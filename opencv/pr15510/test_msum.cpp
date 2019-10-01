/**
    this source code is part of an investigation about performance loss on the instruction set(vmsum*)
    for more information check https://github.com/opencv/opencv/pull/15510
*/

// ex: g++ -DTHE_INTRIN_N=1 -o test -O3 ./test_msum.cpp && ./test

#if THE_INTRIN_N == 1
    #define THE_INTRIN "vmsummbm"
#elif THE_INTRIN_N == 2
    #define THE_INTRIN "vmsumshm"
#elif THE_INTRIN_N == 3
    #define THE_INTRIN "vmsumshs"
#elif THE_INTRIN_N == 4
    #define THE_INTRIN "vmsumubm"
#elif THE_INTRIN_N == 5
    #define THE_INTRIN "vmsumuhm"
#elif THE_INTRIN_N == 6
    #define THE_INTRIN "vmsumuhs"
#else
    #error "Hey??? Where's the definition?"
#endif

#ifndef SPLAT
    #define SPLAT 0 // load instead of splats
#endif

#include <iostream>
#include <chrono>
#include <string>
#include <altivec.h>

using namespace std;
using namespace std::chrono;

struct timing
{
    timing(const string& str) : str_tmp(str), start(steady_clock::now())
    {}
    ~timing()
    {
        auto end = steady_clock::now();
        cout << str_tmp << " : "
             << duration_cast<microseconds>(end - start).count()
             << "ms" << endl;
    }
    string str_tmp;
    steady_clock::time_point start;
};

#define TIMING(x) timing t("Latency of " + string(__func__) + "(" THE_INTRIN ")")
#if SPLAT
    #define DATA(x) {x, x, x, x}
#else // ld
    #define DATA(x) {x}
#endif
#define LOOP_LN 100000
typedef __vector signed int vec_int4;

int v_msum()
{
    TIMING(__func__);
    vec_int4 r = DATA(1), a = DATA(2), b = DATA(3);
    for (int i = 0; i < LOOP_LN; ++i)
    {
        asm(THE_INTRIN " %0,%1,%2,%3" : "=v" (r) : "v" (a), "v" (b), "v" (r));
    }
    return vec_extract(r, 0);
}

int v_msum_add()
{
    TIMING(__func__);
    vec_int4 r = DATA(1), a = DATA(2), b = DATA(3);
    for (int i = 0; i < LOOP_LN; ++i)
    {
        vec_int4 sum;
        asm (THE_INTRIN " %0,%1,%2,%3" : "=v" (sum) : "v" (a), "v" (b), "v" (r));
        r = vec_add(sum, b);
    }
    return vec_extract(r, 0);
}

int v_msum_no_overlap()
{
    TIMING(__func__);
    vec_int4 r = DATA(1), a = DATA(2), b = DATA(3);
    for (int i = 0; i < LOOP_LN; ++i)
    {
        asm(THE_INTRIN " %0,%1,%2,%3" : "=v" (r) : "v" (a), "v" (b), "v" (b));
    }
    return vec_extract(r, 0);
}

int v_msum_add_no_overlap()
{
    TIMING(__func__);
    vec_int4 r = {1}, a = {2}, b = {3};
    for (int i = 0; i < LOOP_LN; ++i)
    {
        vec_int4 sum;
        asm(THE_INTRIN " %0,%1,%2,%3" : "=v" (sum) : "v" (a), "v" (b), "v" (b));
        r = vec_add(r, sum);
    }
    return vec_extract(r, 0);
}

int main(void)
{
    int r;
    v_msum();
    r = v_msum_add();
    v_msum_no_overlap();
    r = r != v_msum_add_no_overlap();
    if (r) cout << "Awww" << endl;
    return r;
}
