#### Benchmarking results for umath auto-vectorized inner loops

- [AVX2 vs AVX512_SKX (strides 1)](results/strides_1/AVX2.md) 
- [AVX2 vs AVX512_SKX (strides 2)](results/strides_2/AVX2.md)
- [baseline[SSE3] vs (AVX2 and AVX512_SKX) (strides 1)](results/strides_1/BASELINE.md)
- [baseline[SSE3] vs (AVX2 and AVX512_SKX) (strides 2)](results/strides_2/BASELINE.md)

#### Hardware & OS

I used an AWS/EC2 optimized instance (c5d.xlarge), cheap and run on Intel SKX CHIP (Skylake servers),
with gh-15987 it produces stable ratios.

```bash
Architecture:        x86_64
CPU op-mode(s):      32-bit, 64-bit
Byte Order:          Little Endian
CPU(s):              4
On-line CPU(s) list: 0-3
Thread(s) per core:  2
Core(s) per socket:  2
Socket(s):           1
NUMA node(s):        1
Vendor ID:           GenuineIntel
CPU family:          6
Model:               85
Model name:          Intel(R) Xeon(R) Platinum 8124M CPU @ 3.00GHz
Stepping:            4
CPU MHz:             3402.876
BogoMIPS:            6000.00
Hypervisor vendor:   KVM
Virtualization type: full
L1d cache:           32K
L1i cache:           32K
L2 cache:            1024K
L3 cache:            25344K
NUMA node0 CPU(s):   0-3
Flags:               fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush mmx fxsr sse sse2 ss ht syscall nx pdpe1gb rdtscp lm constant_tsc rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq ssse3 fma cx16 pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand hypervisor lahf_lm abm 3dnowprefetch invpcid_single pti fsgsbase tsc_adjust bmi1 hle avx2 smep bmi2 erms invpcid rtm mpx avx512f avx512dq rdseed adx smap clflushopt clwb avx512cd avx512bw avx512vl xsaveopt xsavec xgetbv1 xsaves ida arat pku ospke
```

```bash
Linux ip-172-31-3-222 4.15.0-1065-aws #69-Ubuntu SMP Thu Mar 26 02:17:29 UTC 2020 x86_64 x86_64 x86_64 GNU/Linux
```

```Bash
gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)
```

#### Do it yourself ! Give it a try ?

**Note** the following explanation and examples are using the new features that comes with gh-15987 and gh-13516, so I'm assuming you already have the latest copy of them.

There are two ways to measure the performance changes among CPU features:

- build options `--cpu-baseline` and  `--cpu-dispatch` by totally disable all dispatch-able features and only enable the baseline with the targeted features.

  Example  :

  ```bash
  $ python setup.py build --cpu-baseline AVX512_SKX --cpu-dispatch none install
  $ benchmarks/misc/benchin_ufunc.py --filter 'reciprocal' --export /path/to/benchmarks/AVX512_SKX.json
  $ python setup.py build --cpu-baseline AVX2 --cpu-dispatch none install
  $ /path/to/benchin_ufunc.py --filter 'reciprocal' --compare /path/to/benchmarks/AVX512_SKX.json --output /path/to/benchmarks/AVX2.md
  
  ```

-  Environment variable `NPY_DISABLE_CPU_FEATURES` which allow disabling certain CPU features without the need of rebuild or swapping virtual environments.

In this benchmark tests I picked the second option, through following commands.

```Bash
# filtering only auto-vectorized ufunc and types
export benchin_filter="(square|reciprocal|conjugate|negative|invert|add|subtract|multiply|bitwise_and|bitwise_or|bitwise_xor|left_shift|right_shift|logical_not|logical_xor|equal|not_equal|greater|greater_equal|less|less_equal).*[bBhHiILlqQ]"
# install and test
source my/numpy/env/bin/activate && cd /path/to/gh-15987and13516/
python setup.py build -j`(nproc)` install
# put benchin_ufunc.py in PATH
export PATH=/path/to/gh-15987and13516/benchmarks/misc/:$PATH
######## AVX2 vs AVX512_SKX ########
# - export the benchmark of SKX into json file to compare it later with AVX2
# the running machine has support of AVX512 SKX features, so the dispatcher will difiently
# pick it by default over AVX2
benchin_ufunc.py --filter $benchin_filter --strides 1 --export AVX512_SKX.json
# - compare AVX2 with the exported results of AVX512_SKX
# Disable AVX512_SKX features will force the dispatcher to pick AVX2
NPY_DISABLE_CPU_FEATURES="AVX512_SKX" benchin_ufunc.py --filter $benchin_filter --strides 1 --compare AVX512_SKX.json --output AVX2.txt AVX2.md AVX2.ansi

######## BASELINE VS (AVX2 and AVX512_SKX) ########
# - same as the upove step 1
benchin_ufunc.py --filter $benchin_filter --strides 1 --export AVX512_SKX.json
# - same as the upvoe step but export AVX2 into json file instead of comare it with
# AVX512_SKX
NPY_DISABLE_CPU_FEATURES="AVX512_SKX" benchin_ufunc.py --strides 1 --filter $benchin_filter --export AVX2.json
# - compare BASELINE with the exported results of AVX512_SKX
# Disable AVX2 and AVX512_SKX features will force the dispatcher to pick baseline features
NPY_DISABLE_CPU_FEATURES="AVX2 AVX512_SKX" benchin_ufunc.py --filter $benchin_filter --strides 1 --compare AVX512_SKX.json AVX2.json --output BASELINE.txt BASELINE.md BASELINE.ansi
```


