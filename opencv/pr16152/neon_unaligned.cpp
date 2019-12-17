/**
 * this source code is part of an investigation about BUS errors that caused
 * by unaligned memory access on armhf
 * for more information check https://github.com/opencv/opencv/pull/16152
*/
// ex: g++ -DTYPE_SFX=u64 -DMEM_ALIGN=8 -o test -O3 ./neon_unaligned.cpp && ./test
// for armhf add -mfpu=neon
// to cast add -DTYPE_CAST=u64 or any other suffix
// ex: g++ -DTYPE_SFX=u8 -DTYPE_CAST=u64 -DMEM_ALIGN=2 -o test -O3 ./neon_unaligned.cpp && ./test

#ifndef TYPE_SFX
    #error "Missing defintion TYPE_SFX. it can hold u8, u16, u32, u64, f32"
#endif

#ifndef MEM_ALIGN
    #error "Missing defintion MEM_ALIGN. Memory alignment size!"
#endif

#include <iostream>
#include <chrono>
#include <string>
#include <arm_neon.h>

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

typedef uint8x16_t  v_u8;
typedef uint16x8_t  v_u16;
typedef uint32x4_t  v_u32;
typedef uint64x2_t  v_u64;
typedef float32x4_t v_f32;

typedef uint8_t  s_u8;
typedef uint16_t s_u16;
typedef uint32_t s_u32;
typedef uint64_t s_u64;
typedef float s_f32;

#define EXPAND(X) X
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define CAT__(a, b) a ## b
#define CAT_(a, b) CAT__(a, b)
#define CAT(a, b) CAT_(a, b)

#define SFX(X) CAT(CAT(X, _), TYPE_SFX)
#ifdef TYPE_CAST
    #define CAST_SFX(X) CAT(CAT(X, _), TYPE_CAST)
    #define v_cast  SFX(CAST_SFX(vreinterpretq))
    #define v_cast2 CAST_SFX(SFX(vreinterpretq))
#else
    #define CAST_SFX SFX
    #define v_cast(X) X
    #define v_cast2(X) X
#endif
#define v_load   SFX(vld1q)
#define v_store  SFX(vst1q)
#define v_intrin CAST_SFX(vaddq)

typedef SFX(s) scalar_t;
typedef CAST_SFX(v) vector_t;
typedef CAST_SFX(s) scalar_ct;

static char the_data[1024 * 1024] __attribute__ ((aligned(MEM_ALIGN + (MEM_ALIGN % 2))));

static void fill_data()
{
    for (int i = 0; i < sizeof(the_data) / sizeof(the_data[0]); ++i)
    {
        the_data[i] = (char)(i + 1);
    }
}

static void __attribute__ ((noinline)) test_neon()
{
    timing(TOSTRING(CAT(test_neon_, TYPE_SFX)));
    char *ptr = the_data + (MEM_ALIGN % 2);
    size_t size = sizeof(the_data) - (MEM_ALIGN % 2);

    for (int i = 0; i < size - 16; i += 16)
    {
        scalar_t* s = reinterpret_cast<scalar_t*>(ptr + i);
        vector_t a = v_cast(v_load(s));
        v_store(s, v_cast2(v_intrin(a, a)));
    }
}

int main(void)
{
    fill_data();
    test_neon();
    return (int)the_data[0];
}
