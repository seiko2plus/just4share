metric: gmean, units: ms
|name of test|BASELINE|AVX512_SKX|AVX2|AVX512_SKX vs BASELINE|AVX2 vs BASELINE|
|---|:-:|:-:|:-:|:-:|:-:|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.5`*|*`0.59`*|
|add::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0002|**`1.34`**|**`1.07`**|
|add::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0009|0.0006|0.0007|**`1.54`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.87`*|**`1.17`**|
|add::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.64`**|**`1.17`**|
|add::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.62`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`1.81`**|0.95|
|add::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0009|0.0006|0.0007|**`1.61`**|**`1.28`**|
|add::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0022|0.0028|**`1.63`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`2.52`**|**`1.33`**|
|add::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|add::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0071|0.0044|0.0062|**`1.64`**|**`1.15`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`2.42`**|**`1.32`**|
|add::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0013|0.0010|0.0013|**`1.31`**|1.05|
|add::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0093|0.0044|0.0056|**`2.12`**|**`1.66`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0000|0.0000|*`0.43`*|*`0.58`*|
|add::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.41`**|**`1.12`**|
|add::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0008|0.0006|0.0007|**`1.46`**|**`1.18`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.34`**|*`0.77`*|
|add::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0002|**`1.71`**|**`1.28`**|
|add::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.62`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.55`**|0.98|
|add::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0009|0.0006|0.0007|**`1.61`**|**`1.28`**|
|add::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0034|0.0022|0.0024|**`1.57`**|**`1.44`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0001|**`1.91`**|**`1.15`**|
|add::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.28`**|
|add::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0071|0.0046|0.0056|**`1.55`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`1.96`**|**`1.15`**|
|add::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.28`**|
|add::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0071|0.0046|0.0056|**`1.54`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.4`*|*`0.5`*|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0002|**`1.28`**|1.05|
|bitwise_and::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0009|0.0006|0.0007|**`1.53`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.81`*|1.02|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.65`**|**`1.16`**|
|bitwise_and::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.61`**|**`1.29`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`1.55`**|0.97|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0009|0.0006|0.0007|**`1.61`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0022|0.0028|**`1.64`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`1.95`**|**`1.24`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0071|0.0044|0.0062|**`1.63`**|**`1.16`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`1.85`**|**`1.23`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0013|0.0010|0.0013|**`1.32`**|1.05|
|bitwise_and::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0093|0.0044|0.0056|**`2.12`**|**`1.67`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0000|0.0000|*`0.36`*|*`0.5`*|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.36`**|**`1.09`**|
|bitwise_and::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0008|0.0006|0.0007|**`1.46`**|**`1.18`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.39`**|*`0.86`*|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0002|**`1.76`**|**`1.29`**|
|bitwise_and::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`2.02`**|*`0.94`*|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0009|0.0006|0.0007|**`1.58`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0034|0.0022|0.0024|**`1.56`**|**`1.44`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0001|0.0001|**`1.8`**|**`1.2`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0071|0.0046|0.0056|**`1.55`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`2.04`**|**`1.2`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0071|0.0046|0.0056|**`1.54`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0001|0.0000|*`0.3`*|*`0.5`*|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0002|**`1.33`**|1.05|
|bitwise_or::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0009|0.0006|0.0007|**`1.52`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.82`*|1.04|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.64`**|**`1.16`**|
|bitwise_or::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.61`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`1.81`**|0.96|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0009|0.0006|0.0007|**`1.62`**|**`1.28`**|
|bitwise_or::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0022|0.0028|**`1.64`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`1.95`**|**`1.23`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_or::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0071|0.0044|0.0062|**`1.64`**|**`1.16`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`1.86`**|**`1.23`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0013|0.0010|0.0013|**`1.32`**|1.05|
|bitwise_or::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0093|0.0044|0.0056|**`2.13`**|**`1.66`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0001|0.0000|*`0.34`*|*`0.5`*|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.36`**|**`1.09`**|
|bitwise_or::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0008|0.0006|0.0007|**`1.46`**|**`1.18`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.48`**|*`0.86`*|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0002|**`1.77`**|**`1.29`**|
|bitwise_or::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.91`**|0.97|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0009|0.0006|0.0007|**`1.61`**|**`1.29`**|
|bitwise_or::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0034|0.0022|0.0024|**`1.56`**|**`1.44`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0001|**`1.99`**|**`1.31`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_or::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0071|0.0046|0.0056|**`1.55`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`1.86`**|**`1.33`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|bitwise_or::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0071|0.0047|0.0056|**`1.53`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.41`*|*`0.5`*|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0002|**`1.33`**|1.05|
|bitwise_xor::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0009|0.0006|0.0007|**`1.53`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.8`*|1.02|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.65`**|**`1.16`**|
|bitwise_xor::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.61`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0001|0.0000|0.0000|**`2.4`**|**`1.29`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0009|0.0006|0.0007|**`1.59`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0022|0.0028|**`1.63`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`1.93`**|**`1.23`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0071|0.0044|0.0062|**`1.63`**|**`1.16`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`1.85`**|**`1.23`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0013|0.0010|0.0013|**`1.32`**|1.05|
|bitwise_xor::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0093|0.0044|0.0056|**`2.13`**|**`1.66`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0000|0.0000|*`0.36`*|*`0.5`*|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0002|**`1.36`**|**`1.08`**|
|bitwise_xor::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0008|0.0006|0.0007|**`1.46`**|**`1.18`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.34`**|*`0.83`*|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0002|**`1.75`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.27`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.86`**|1.04|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0009|0.0006|0.0007|**`1.6`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0034|0.0022|0.0024|**`1.54`**|**`1.44`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0001|**`1.95`**|**`1.3`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.29`**|
|bitwise_xor::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0071|0.0046|0.0056|**`1.55`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`1.99`**|**`1.3`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0071|0.0047|0.0056|**`1.53`**|**`1.28`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.37`*|*`0.58`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0001|**`1.96`**|**`1.44`**|
|conjugate::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0006|0.0003|0.0004|**`2.1`**|**`1.65`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.83`*|**`1.6`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0001|0.0002|**`2.11`**|**`1.78`**|
|conjugate::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0012|0.0008|0.0009|**`1.47`**|**`1.31`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`2.43`**|**`1.22`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0005|0.0003|0.0004|**`1.83`**|**`1.38`**|
|conjugate::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0022|0.0017|0.0019|**`1.32`**|**`1.18`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0000|**`2.69`**|**`1.96`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0012|0.0008|0.0009|**`1.46`**|**`1.31`**|
|conjugate::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0048|0.0033|0.0037|**`1.46`**|**`1.3`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0000|**`2.92`**|**`1.95`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0012|0.0008|0.0015|**`1.48`**|*`0.82`*|
|conjugate::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0048|0.0033|0.0037|**`1.46`**|**`1.3`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0000|0.0000|*`0.43`*|*`0.58`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`2.01`**|**`1.55`**|
|conjugate::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0006|0.0003|0.0004|**`2.14`**|**`1.58`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.29`**|*`0.8`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0002|0.0001|0.0002|**`1.41`**|**`1.23`**|
|conjugate::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0010|0.0008|0.0009|**`1.18`**|1.04|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.4`**|1.03|
|conjugate::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0004|0.0003|0.0004|**`1.5`**|**`1.12`**|
|conjugate::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0019|0.0014|0.0019|**`1.39`**|1.01|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0000|**`2.36`**|**`1.29`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0010|0.0008|0.0009|**`1.19`**|1.05|
|conjugate::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0039|0.0033|0.0037|**`1.19`**|1.05|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0000|**`2.37`**|**`1.29`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0010|0.0008|0.0009|**`1.19`**|1.05|
|conjugate::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0039|0.0033|0.0037|**`1.18`**|1.05|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.4`*|*`0.51`*|
|equal::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.61`**|**`1.1`**|
|equal::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.33`**|**`1.26`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.46`*|**`1.1`**|
|equal::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.42`**|1.05|
|equal::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0011|**`1.59`**|**`1.19`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.25`**|**`1.12`**|
|equal::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.42`**|**`1.71`**|
|equal::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0035|0.0015|0.0022|**`2.31`**|**`1.61`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.06`**|**`1.75`**|
|equal::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.48`**|**`2.21`**|
|equal::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0045|**`3.66`**|**`2.18`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`4.58`**|**`1.92`**|
|equal::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0007|0.0011|**`3.38`**|**`2.15`**|
|equal::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0098|0.0027|0.0045|**`3.67`**|**`2.17`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.37`*|*`0.56`*|
|equal::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`1.76`**|**`1.14`**|
|equal::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.3`**|**`1.25`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.47`**|*`0.64`*|
|equal::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.43`**|**`1.17`**|
|equal::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0012|**`1.66`**|**`1.16`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.26`**|**`1.12`**|
|equal::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.41`**|**`1.7`**|
|equal::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0012|0.0021|**`2.7`**|**`1.57`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.32`**|**`2.16`**|
|equal::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.59`**|**`2.16`**|
|equal::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0044|**`3.61`**|**`2.21`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.31`**|**`2.22`**|
|equal::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.43`**|**`2.17`**|
|equal::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0045|**`3.59`**|**`2.19`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.4`*|*`0.55`*|
|greater::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.33`**|**`1.16`**|
|greater::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0008|0.0006|0.0006|**`1.41`**|**`1.31`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.51`*|**`1.19`**|
|greater::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.76`**|**`1.24`**|
|greater::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0014|0.0009|0.0012|**`1.66`**|**`1.16`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.27`**|**`1.16`**|
|greater::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0010|0.0004|0.0006|**`2.62`**|**`1.66`**|
|greater::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0042|0.0016|0.0025|**`2.6`**|**`1.71`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.19`**|**`1.49`**|
|greater::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0025|0.0008|0.0014|**`3.32`**|**`1.74`**|
|greater::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0101|0.0027|0.0057|**`3.66`**|**`1.76`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`4.14`**|**`1.58`**|
|greater::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0015|**`3.37`**|**`1.7`**|
|greater::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0103|0.0028|0.0058|**`3.73`**|**`1.79`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.41`*|*`0.66`*|
|greater::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.71`**|**`1.64`**|
|greater::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0009|0.0005|0.0006|**`1.74`**|**`1.67`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.64`**|*`0.71`*|
|greater::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.64`**|**`1.34`**|
|greater::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0012|**`1.68`**|**`1.14`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.43`**|**`1.14`**|
|greater::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.42`**|**`1.63`**|
|greater::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0013|0.0022|**`2.65`**|**`1.54`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.35`**|**`1.82`**|
|greater::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.56`**|**`1.84`**|
|greater::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0098|0.0027|0.0052|**`3.63`**|**`1.88`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.32`**|**`1.86`**|
|greater::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0007|0.0013|**`3.42`**|**`1.84`**|
|greater::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0053|**`3.59`**|**`1.85`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0038|0.0038|0.0038|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0152|0.0152|0.0152|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.38`*|*`0.46`*|
|greater_equal::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.61`**|1.0|
|greater_equal::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0008|0.0005|0.0006|**`1.41`**|**`1.28`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0150|0.0149|0.0151|1.01|1.0|
|greater_equal::16384&nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0788|0.0784|0.0788|1.01|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.01|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0146|0.0144|0.0146|1.01|1.0|
|greater_equal::16384&nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0770|0.0773|0.0769|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.0008|0.0008|0.0008|1.0|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.0244|0.0250|0.0251|0.98|0.97|
|greater_equal::16384&nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.1226|0.1217|0.1231|1.01|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.5`*|1.04|
|greater_equal::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.62`**|**`1.06`**|
|greater_equal::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0014|0.0009|0.0013|**`1.66`**|**`1.15`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.4`**|**`1.15`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0010|0.0004|0.0006|**`2.51`**|**`1.62`**|
|greater_equal::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0041|0.0017|0.0025|**`2.45`**|**`1.63`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.16`**|**`1.51`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0024|0.0008|0.0014|**`3.24`**|**`1.72`**|
|greater_equal::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0057|**`3.48`**|**`1.71`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0049|0.0049|0.0049|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0199|0.0199|0.0197|1.0|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.0035|0.0035|0.0036|1.0|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.0635|0.0633|0.0633|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.2574|0.2576|0.2572|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.0035|0.0035|0.0036|0.99|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.0637|0.0635|0.0635|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.1281|0.1285|0.1286|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`3.78`**|**`1.6`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0008|0.0015|**`3.2`**|**`1.68`**|
|greater_equal::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0098|0.0028|0.0057|**`3.48`**|**`1.71`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.36`*|*`0.55`*|
|greater_equal::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`1.79`**|**`1.14`**|
|greater_equal::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.3`**|**`1.25`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0001|0.0001|0.0001|0.98|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0014|0.0014|0.0014|0.99|0.99|
|greater_equal::16384&nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0055|0.0055|0.0055|0.99|0.99|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.0019|0.0019|0.0019|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.0302|0.0302|0.0302|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.1208|0.1208|0.1208|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|1.05|1.05|
|greater_equal::4096&nbsp; &nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0005|0.0005|0.0005|0.98|1.0|
|greater_equal::16384&nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0028|0.0028|0.0027|1.0|1.03|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0005|0.0005|0.0005|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0073|0.0073|0.0073|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0290|0.0290|0.0290|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.48`**|*`0.56`*|
|greater_equal::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.44`**|**`1.18`**|
|greater_equal::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0012|**`1.69`**|**`1.16`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.34`**|**`1.13`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.22`**|**`1.7`**|
|greater_equal::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0013|0.0022|**`2.66`**|**`1.56`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.33`**|**`1.84`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.54`**|**`1.86`**|
|greater_equal::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0052|**`3.52`**|**`1.88`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0050|0.0049|0.0049|1.02|1.02|
|greater_equal::16384&nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0197|0.0197|0.0195|1.0|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.32`**|**`1.89`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.28`**|**`1.85`**|
|greater_equal::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0052|**`3.53`**|**`1.88`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0001|0.0000|*`0.28`*|*`0.47`*|
|invert::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0001|**`1.31`**|**`1.42`**|
|invert::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0006|0.0003|0.0004|**`1.91`**|**`1.59`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.88`*|**`1.23`**|
|invert::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0001|0.0002|**`2.35`**|**`1.66`**|
|invert::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0012|0.0008|0.0009|**`1.43`**|**`1.28`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`1.95`**|**`1.17`**|
|invert::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0006|0.0003|0.0004|**`2.07`**|**`1.56`**|
|invert::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0023|0.0016|0.0019|**`1.4`**|**`1.23`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`2.16`**|**`1.42`**|
|invert::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0012|0.0008|0.0009|**`1.44`**|**`1.29`**|
|invert::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0047|0.0033|0.0037|**`1.44`**|**`1.28`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`2.39`**|**`1.41`**|
|invert::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0012|0.0008|0.0016|**`1.44`**|*`0.76`*|
|invert::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0047|0.0033|0.0037|**`1.43`**|**`1.28`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0001|0.0000|*`0.24`*|*`0.49`*|
|invert::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0001|0.0001|0.0001|**`1.2`**|**`1.2`**|
|invert::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0005|0.0003|0.0004|**`1.56`**|**`1.21`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.77`**|*`0.86`*|
|invert::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0002|0.0001|0.0002|**`2.04`**|**`1.46`**|
|invert::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0012|0.0008|0.0010|**`1.45`**|**`1.25`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.53`**|**`1.16`**|
|invert::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0006|0.0003|0.0004|**`2.03`**|**`1.5`**|
|invert::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0021|0.0014|0.0019|**`1.46`**|**`1.08`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0000|**`2.23`**|**`1.55`**|
|invert::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0012|0.0008|0.0009|**`1.44`**|**`1.27`**|
|invert::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0047|0.0033|0.0037|**`1.45`**|**`1.27`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0000|**`2.29`**|**`1.55`**|
|invert::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0012|0.0008|0.0009|**`1.45`**|**`1.27`**|
|invert::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0047|0.0033|0.0037|**`1.44`**|**`1.28`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0001|**`1.92`**|**`2.15`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0024|0.0006|0.0009|**`3.94`**|**`2.62`**|
|left_shift::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0098|0.0023|0.0036|**`4.19`**|**`2.72`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0002|0.0001|0.0000|**`3.09`**|**`3.59`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0024|0.0004|0.0007|**`5.64`**|**`3.34`**|
|left_shift::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0109|0.0017|0.0029|**`6.28`**|**`3.79`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0002|0.0000|0.0001|**`7.48`**|**`4.16`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0006|0.0007|**`6.46`**|**`4.99`**|
|left_shift::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0145|0.0022|0.0028|**`6.68`**|**`5.11`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0002|0.0000|0.0001|**`4.94`**|**`2.65`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0036|0.0011|0.0015|**`3.28`**|**`2.46`**|
|left_shift::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0145|0.0044|0.0067|**`3.31`**|**`2.17`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0002|0.0000|0.0001|**`5.07`**|**`2.63`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0036|0.0011|0.0014|**`3.26`**|**`2.69`**|
|left_shift::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0157|0.0044|0.0059|**`3.57`**|**`2.66`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.51`**|**`2.08`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0024|0.0006|0.0009|**`3.92`**|**`2.68`**|
|left_shift::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0097|0.0023|0.0035|**`4.28`**|**`2.78`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0002|0.0000|0.0001|**`7.53`**|**`4.09`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0036|0.0004|0.0006|**`9.24`**|**`5.73`**|
|left_shift::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0145|0.0017|0.0029|**`8.51`**|**`5.07`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0002|0.0000|0.0001|**`4.9`**|**`2.95`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0027|0.0006|0.0007|**`4.66`**|**`3.67`**|
|left_shift::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0103|0.0021|0.0026|**`4.96`**|**`4.01`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0002|0.0001|0.0001|**`4.11`**|**`2.7`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0036|0.0011|0.0015|**`3.32`**|**`2.46`**|
|left_shift::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0145|0.0047|0.0059|**`3.09`**|**`2.46`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0002|0.0001|0.0001|**`4.25`**|**`2.7`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0036|0.0011|0.0015|**`3.32`**|**`2.45`**|
|left_shift::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0145|0.0047|0.0059|**`3.08`**|**`2.46`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.36`*|*`0.48`*|
|less::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.28`**|1.01|
|less::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0008|0.0005|0.0006|**`1.43`**|**`1.32`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.53`*|**`1.2`**|
|less::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.62`**|**`1.12`**|
|less::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0014|0.0009|0.0012|**`1.65`**|**`1.15`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.35`**|**`1.15`**|
|less::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0010|0.0004|0.0006|**`2.5`**|**`1.62`**|
|less::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0041|0.0016|0.0025|**`2.54`**|**`1.63`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.23`**|**`1.5`**|
|less::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0024|0.0008|0.0014|**`3.24`**|**`1.73`**|
|less::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0057|**`3.51`**|**`1.72`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`4.03`**|**`1.59`**|
|less::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0014|**`3.33`**|**`1.72`**|
|less::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0098|0.0028|0.0057|**`3.51`**|**`1.71`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.37`*|*`0.55`*|
|less::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`1.88`**|**`1.14`**|
|less::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.31`**|**`1.24`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.5`**|*`0.64`*|
|less::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.44`**|**`1.17`**|
|less::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0012|**`1.68`**|**`1.16`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.31`**|**`1.13`**|
|less::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.44`**|**`1.7`**|
|less::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0013|0.0022|**`2.66`**|**`1.56`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.38`**|**`1.85`**|
|less::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.64`**|**`1.88`**|
|less::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0052|**`3.62`**|**`1.88`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.35`**|**`1.89`**|
|less::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.43`**|**`1.86`**|
|less::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0052|**`3.6`**|**`1.88`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|0.98|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0042|0.0042|0.0042|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; ?::1&nbsp; ?::1&nbsp; ->&nbsp; ?::1|0.0167|0.0166|0.0166|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.39`*|*`0.53`*|
|less_equal::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.7`**|**`1.16`**|
|less_equal::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0008|0.0005|0.0006|**`1.46`**|**`1.33`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.02|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0143|0.0144|0.0144|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; D::1&nbsp; D::1&nbsp; ->&nbsp; ?::1|0.0778|0.0773|0.0777|1.01|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.05|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0144|0.0145|0.0147|0.99|0.98|
|less_equal::16384&nbsp; &nbsp; F::1&nbsp; F::1&nbsp; ->&nbsp; ?::1|0.0764|0.0775|0.0766|0.99|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.0008|0.0008|0.0008|0.97|1.02|
|less_equal::4096&nbsp; &nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.0233|0.0241|0.0239|0.97|0.97|
|less_equal::16384&nbsp; &nbsp; G::1&nbsp; G::1&nbsp; ->&nbsp; ?::1|0.1226|0.1229|0.1233|1.0|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.52`*|**`1.19`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.78`**|**`1.25`**|
|less_equal::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0014|0.0009|0.0012|**`1.69`**|**`1.16`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.53`**|**`1.2`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0010|0.0004|0.0006|**`2.57`**|**`1.68`**|
|less_equal::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0042|0.0016|0.0024|**`2.58`**|**`1.72`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.11`**|**`1.5`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0025|0.0008|0.0014|**`3.2`**|**`1.73`**|
|less_equal::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0101|0.0029|0.0057|**`3.46`**|**`1.76`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|0.99|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0049|0.0049|0.0049|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; M::1&nbsp; M::1&nbsp; ->&nbsp; ?::1|0.0199|0.0199|0.0197|1.0|1.01|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.0035|0.0035|0.0035|1.02|1.02|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.0636|0.0636|0.0636|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; ?::1|0.2576|0.2590|0.2583|0.99|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.0035|0.0035|0.0035|1.01|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.0637|0.0637|0.0637|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; O::1&nbsp; O::1&nbsp; ->&nbsp; O::1|0.1281|0.1292|0.1290|0.99|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`3.89`**|**`1.58`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0008|0.0015|**`3.17`**|**`1.7`**|
|less_equal::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0103|0.0029|0.0058|**`3.58`**|**`1.79`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.44`*|*`0.65`*|
|less_equal::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.58`**|**`1.64`**|
|less_equal::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0009|0.0005|0.0006|**`1.7`**|**`1.66`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0001|0.0001|0.0001|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0014|0.0014|0.0014|1.03|1.02|
|less_equal::16384&nbsp; &nbsp; d::1&nbsp; d::1&nbsp; ->&nbsp; ?::1|0.0055|0.0054|0.0054|1.03|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.0019|0.0019|0.0019|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.0302|0.0302|0.0302|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; e::1&nbsp; e::1&nbsp; ->&nbsp; ?::1|0.1212|0.1211|0.1211|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|1.04|1.04|
|less_equal::4096&nbsp; &nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0005|0.0005|0.0005|0.97|1.01|
|less_equal::16384&nbsp; &nbsp; f::1&nbsp; f::1&nbsp; ->&nbsp; ?::1|0.0027|0.0027|0.0028|0.99|0.97|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0005|0.0005|0.0005|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0073|0.0073|0.0073|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; g::1&nbsp; g::1&nbsp; ->&nbsp; ?::1|0.0290|0.0290|0.0290|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.66`**|*`0.73`*|
|less_equal::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.63`**|**`1.34`**|
|less_equal::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0012|**`1.66`**|**`1.16`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.26`**|1.05|
|less_equal::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.2`**|**`1.65`**|
|less_equal::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0013|0.0022|**`2.63`**|**`1.54`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.36`**|**`1.84`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0013|**`3.56`**|**`1.84`**|
|less_equal::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0100|0.0028|0.0052|**`3.64`**|**`1.93`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0050|0.0049|0.0049|1.02|1.02|
|less_equal::16384&nbsp; &nbsp; m::1&nbsp; m::1&nbsp; ->&nbsp; ?::1|0.0197|0.0197|0.0195|1.0|1.01|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.32`**|**`1.87`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0007|0.0013|**`3.31`**|**`1.84`**|
|less_equal::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0053|**`3.5`**|**`1.85`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|*`0.4`*|*`0.61`*|
|logical_not::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`1.69`**|**`1.44`**|
|logical_not::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0006|0.0002|0.0004|**`2.69`**|**`1.59`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|*`0.6`*|**`1.38`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.84`**|**`1.69`**|
|logical_not::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0012|0.0006|0.0007|**`2.02`**|**`1.64`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0000|**`2.9`**|**`1.27`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0008|0.0003|0.0003|**`2.95`**|**`2.61`**|
|logical_not::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0033|0.0011|0.0016|**`3.17`**|**`2.08`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0001|0.0001|0.0001|**`2.23`**|**`1.69`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0019|0.0004|0.0010|**`4.32`**|**`1.95`**|
|logical_not::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0078|0.0017|0.0040|**`4.71`**|**`1.96`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`4.34`**|**`1.68`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0019|0.0004|0.0010|**`4.31`**|**`1.94`**|
|logical_not::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0078|0.0017|0.0040|**`4.65`**|**`1.96`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.37`*|*`0.75`*|
|logical_not::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.02`**|**`1.45`**|
|logical_not::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0006|0.0003|0.0004|**`1.85`**|**`1.61`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.85`**|*`0.78`*|
|logical_not::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.48`**|**`1.56`**|
|logical_not::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0011|0.0006|0.0008|**`1.98`**|**`1.5`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0000|**`2.87`**|**`1.27`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0008|0.0003|0.0003|**`2.92`**|**`2.61`**|
|logical_not::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0033|0.0011|0.0016|**`3.15`**|**`2.08`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.88`**|**`2.48`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0024|0.0004|0.0010|**`5.75`**|**`2.41`**|
|logical_not::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0097|0.0017|0.0039|**`5.77`**|**`2.45`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.85`**|**`2.47`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0004|0.0010|**`5.44`**|**`2.42`**|
|logical_not::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0017|0.0039|**`5.77`**|**`2.45`**|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0036|0.0035|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0142|0.0142|0.0142|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0036|0.0036|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0142|0.0143|0.0143|1.0|0.99|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0040|0.0040|0.0040|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0158|0.0158|0.0158|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|0.99|
|logical_xor::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0036|0.0036|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0146|0.0146|0.0146|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0036|0.0036|0.0037|1.0|0.98|
|logical_xor::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0147|0.0145|0.0146|1.01|1.01|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.01|
|logical_xor::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0035|0.0035|0.0035|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0142|0.0142|0.0142|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.01|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0036|0.0036|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0142|0.0142|0.0142|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0003|0.0003|0.0003|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0040|0.0040|0.0040|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0158|0.0158|0.0158|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.01|
|logical_xor::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0037|0.0036|0.0036|1.02|1.02|
|logical_xor::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0146|0.0145|0.0146|1.01|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0037|0.0037|0.0036|1.0|1.01|
|logical_xor::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0146|0.0146|0.0147|1.0|0.99|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0001|0.0000|*`0.56`*|*`0.8`*|
|multiply::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0004|0.0003|0.0003|**`1.51`**|**`1.43`**|
|multiply::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0016|0.0011|0.0010|**`1.45`**|**`1.54`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.83`*|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.46`**|**`1.13`**|
|multiply::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.6`**|**`1.28`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0001|0.0000|0.0000|**`2.62`**|**`1.77`**|
|multiply::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0013|0.0006|0.0007|**`2.17`**|**`1.81`**|
|multiply::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0052|0.0023|0.0028|**`2.23`**|**`1.84`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0002|0.0001|0.0001|**`3.54`**|**`1.42`**|
|multiply::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0029|0.0012|0.0020|**`2.36`**|**`1.47`**|
|multiply::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0117|0.0049|0.0088|**`2.39`**|**`1.33`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0002|0.0001|0.0001|**`3.5`**|**`1.42`**|
|multiply::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0026|0.0012|0.0017|**`2.15`**|**`1.53`**|
|multiply::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0150|0.0049|0.0079|**`3.06`**|**`1.89`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0001|0.0000|*`0.55`*|*`0.81`*|
|multiply::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0004|0.0003|0.0003|**`1.5`**|**`1.51`**|
|multiply::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0015|0.0010|0.0010|**`1.52`**|**`1.61`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.36`**|*`0.85`*|
|multiply::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0003|**`1.74`**|**`1.25`**|
|multiply::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.63`**|**`1.27`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0001|0.0000|0.0000|**`3.04`**|**`1.78`**|
|multiply::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0013|0.0006|0.0007|**`2.1`**|**`1.81`**|
|multiply::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0048|0.0025|0.0024|**`1.94`**|**`1.95`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0002|0.0001|0.0001|**`2.67`**|**`1.39`**|
|multiply::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0029|0.0012|0.0020|**`2.4`**|**`1.49`**|
|multiply::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0117|0.0055|0.0080|**`2.13`**|**`1.47`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; m::1&nbsp; q::1&nbsp; ->&nbsp; m::1|0.0003|0.0003|0.0003|0.99|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; m::1&nbsp; q::1&nbsp; ->&nbsp; m::1|0.0048|0.0048|0.0048|1.0|1.0|
|multiply::16384&nbsp; &nbsp; m::1&nbsp; q::1&nbsp; ->&nbsp; m::1|0.0193|0.0193|0.0193|1.0|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; m::1&nbsp; ->&nbsp; m::1|0.0002|0.0002|0.0002|**`1.16`**|1.02|
|multiply::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; m::1&nbsp; ->&nbsp; m::1|0.0034|0.0034|0.0034|1.0|1.0|
|multiply::16384&nbsp; &nbsp; q::1&nbsp; m::1&nbsp; ->&nbsp; m::1|0.0128|0.0128|0.0128|1.0|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0002|0.0001|0.0001|**`2.59`**|**`1.39`**|
|multiply::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0029|0.0012|0.0020|**`2.39`**|**`1.47`**|
|multiply::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0117|0.0055|0.0080|**`2.11`**|**`1.46`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.51`*|*`0.64`*|
|negative::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0001|**`1.87`**|**`1.44`**|
|negative::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0006|0.0003|0.0004|**`1.98`**|**`1.48`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.94`*|**`1.2`**|
|negative::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0001|0.0002|**`2.37`**|**`1.66`**|
|negative::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0012|0.0008|0.0019|**`1.45`**|*`0.62`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0000|0.0000|0.0000|**`1.79`**|**`1.16`**|
|negative::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0006|0.0003|0.0004|**`2.17`**|**`1.49`**|
|negative::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0023|0.0016|0.0039|**`1.43`**|*`0.6`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`2.13`**|**`1.44`**|
|negative::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0012|0.0008|0.0020|**`1.46`**|*`0.62`*|
|negative::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0048|0.0033|0.0077|**`1.46`**|*`0.63`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`2.73`**|**`1.67`**|
|negative::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0012|0.0008|0.0025|**`1.45`**|*`0.5`*|
|negative::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0048|0.0033|0.0077|**`1.47`**|*`0.63`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0001|0.0000|*`0.28`*|*`0.59`*|
|negative::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.86`**|**`1.53`**|
|negative::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0006|0.0003|0.0004|**`2.12`**|**`1.38`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.8`**|*`0.85`*|
|negative::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0002|0.0001|0.0002|**`2.05`**|**`1.45`**|
|negative::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0012|0.0008|0.0020|**`1.45`**|*`0.61`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0000|0.0000|0.0000|**`1.53`**|**`1.17`**|
|negative::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0006|0.0003|0.0004|**`2.13`**|**`1.31`**|
|negative::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0021|0.0014|0.0019|**`1.51`**|**`1.1`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0000|**`2.66`**|**`1.53`**|
|negative::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0012|0.0008|0.0019|**`1.44`**|*`0.61`*|
|negative::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0047|0.0033|0.0078|**`1.45`**|*`0.6`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0000|**`2.58`**|**`1.53`**|
|negative::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0012|0.0008|0.0020|**`1.45`**|*`0.61`*|
|negative::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0047|0.0033|0.0078|**`1.45`**|*`0.61`*|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.37`*|*`0.49`*|
|not_equal::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0002|**`1.6`**|**`1.1`**|
|not_equal::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.36`**|**`1.25`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.47`*|**`1.13`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0003|**`1.43`**|**`1.06`**|
|not_equal::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0011|**`1.59`**|**`1.2`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.24`**|**`1.12`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.23`**|**`1.7`**|
|not_equal::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; ?::1|0.0035|0.0016|0.0022|**`2.15`**|**`1.61`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.3`**|**`1.75`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.35`**|**`2.2`**|
|not_equal::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; ?::1|0.0097|0.0027|0.0045|**`3.58`**|**`2.18`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0000|0.0001|**`4.57`**|**`1.9`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0024|0.0007|0.0011|**`3.32`**|**`2.14`**|
|not_equal::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; ?::1|0.0098|0.0027|0.0045|**`3.59`**|**`2.17`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0000|0.0001|0.0000|*`0.4`*|*`0.59`*|
|not_equal::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`1.79`**|**`1.14`**|
|not_equal::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; ?::1|0.0007|0.0005|0.0006|**`1.31`**|**`1.25`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0000|0.0000|0.0000|**`1.55`**|*`0.68`*|
|not_equal::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0003|0.0002|0.0002|**`1.43`**|**`1.18`**|
|not_equal::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; ?::1|0.0013|0.0008|0.0011|**`1.67`**|**`1.17`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0001|0.0000|0.0001|**`2.29`**|**`1.11`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0009|0.0004|0.0005|**`2.21`**|**`1.7`**|
|not_equal::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; ?::1|0.0034|0.0013|0.0022|**`2.65`**|**`1.56`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.33`**|**`2.18`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.51`**|**`2.16`**|
|not_equal::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; ?::1|0.0098|0.0028|0.0044|**`3.55`**|**`2.23`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0002|0.0001|0.0001|**`2.32`**|**`2.24`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0025|0.0007|0.0011|**`3.33`**|**`2.17`**|
|not_equal::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; ?::1|0.0097|0.0028|0.0045|**`3.52`**|**`2.19`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0002|0.0002|0.98|**`1.12`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0036|0.0026|0.0025|**`1.38`**|**`1.48`**|
|reciprocal::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0147|0.0105|0.0098|**`1.4`**|**`1.5`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0002|0.0002|0.0002|1.0|**`1.22`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0033|0.0026|0.0024|**`1.24`**|**`1.35`**|
|reciprocal::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0132|0.0105|0.0097|**`1.26`**|**`1.36`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0004|0.0002|0.0002|**`2.19`**|**`1.59`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0066|0.0026|0.0042|**`2.54`**|**`1.59`**|
|reciprocal::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0264|0.0104|0.0166|**`2.55`**|**`1.6`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0003|0.0003|0.0003|1.05|**`1.06`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0066|0.0064|0.0063|1.03|1.04|
|reciprocal::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0259|0.0253|0.0253|1.02|1.02|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0003|0.0003|0.0003|1.04|1.05|
|reciprocal::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0065|0.0064|0.0087|1.02|*`0.75`*|
|reciprocal::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0260|0.0254|0.0253|1.03|1.03|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0002|0.0002|1.01|**`1.18`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0033|0.0027|0.0025|**`1.24`**|**`1.34`**|
|reciprocal::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0132|0.0104|0.0097|**`1.27`**|**`1.36`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0002|0.0002|0.0002|**`1.14`**|**`1.13`**|
|reciprocal::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0029|0.0026|0.0024|**`1.12`**|**`1.22`**|
|reciprocal::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0136|0.0104|0.0097|**`1.31`**|**`1.41`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0002|0.0002|0.0002|0.95|*`0.94`*|
|reciprocal::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0025|0.0026|0.0024|0.96|1.03|
|reciprocal::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0097|0.0103|0.0097|*`0.94`*|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0003|0.0002|0.0003|**`1.78`**|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0049|0.0026|0.0048|**`1.84`**|1.0|
|reciprocal::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0194|0.0101|0.0194|**`1.93`**|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0003|0.0002|0.0003|**`1.79`**|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0049|0.0025|0.0048|**`1.93`**|1.0|
|reciprocal::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0194|0.0100|0.0194|**`1.93`**|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0001|**`2.36`**|**`2.49`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0031|0.0006|0.0009|**`4.87`**|**`3.28`**|
|right_shift::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0122|0.0023|0.0036|**`5.22`**|**`3.38`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0002|0.0001|0.0000|**`3.55`**|**`4.33`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0032|0.0004|0.0007|**`7.58`**|**`4.43`**|
|right_shift::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0129|0.0017|0.0029|**`7.43`**|**`4.49`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0002|0.0000|0.0001|**`8.5`**|**`3.96`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0033|0.0006|0.0007|**`5.9`**|**`4.54`**|
|right_shift::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0131|0.0022|0.0028|**`6.09`**|**`4.64`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0002|0.0001|0.0001|**`4.0`**|**`2.29`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0034|0.0011|0.0015|**`3.13`**|**`2.32`**|
|right_shift::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0138|0.0044|0.0067|**`3.15`**|**`2.07`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0002|0.0000|0.0001|**`4.49`**|**`2.3`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0031|0.0011|0.0014|**`2.76`**|**`2.27`**|
|right_shift::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0155|0.0044|0.0059|**`3.55`**|**`2.63`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`2.19`**|**`2.56`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0033|0.0006|0.0009|**`5.17`**|**`3.68`**|
|right_shift::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0133|0.0023|0.0035|**`5.68`**|**`3.81`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0000|0.0001|**`8.89`**|**`4.84`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0048|0.0004|0.0007|**`11.08`**|**`7.0`**|
|right_shift::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0193|0.0020|0.0033|**`9.72`**|**`5.93`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0002|0.0000|0.0001|**`7.52`**|**`3.15`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0033|0.0006|0.0009|**`5.61`**|**`3.76`**|
|right_shift::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0127|0.0020|0.0032|**`6.42`**|**`3.94`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0002|0.0002|0.0002|**`1.23`**|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0035|0.0028|0.0034|**`1.26`**|1.01|
|right_shift::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0138|0.0116|0.0138|**`1.19`**|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0002|0.0002|0.0002|**`1.2`**|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0035|0.0028|0.0034|**`1.24`**|1.0|
|right_shift::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0138|0.0116|0.0138|**`1.19`**|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.57`*|*`0.65`*|
|square::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0003|0.0002|0.0002|**`1.6`**|**`1.51`**|
|square::16384&nbsp; &nbsp; B::1&nbsp; ->&nbsp; B::1|0.0012|0.0008|0.0007|**`1.58`**|**`1.71`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.77`*|**`1.21`**|
|square::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0002|**`1.66`**|**`1.48`**|
|square::16384&nbsp; &nbsp; H::1&nbsp; ->&nbsp; H::1|0.0011|0.0009|0.0010|**`1.21`**|**`1.14`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0001|0.0000|0.0000|**`2.97`**|**`1.89`**|
|square::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0011|0.0003|0.0004|**`3.54`**|**`2.71`**|
|square::16384&nbsp; &nbsp; I::1&nbsp; ->&nbsp; I::1|0.0044|0.0018|0.0019|**`2.4`**|**`2.28`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0000|0.0001|**`3.02`**|**`1.37`**|
|square::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0023|0.0009|0.0016|**`2.44`**|**`1.44`**|
|square::16384&nbsp; &nbsp; L::1&nbsp; ->&nbsp; L::1|0.0091|0.0037|0.0062|**`2.48`**|**`1.46`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`3.27`**|**`1.36`**|
|square::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0023|0.0009|0.0024|**`2.45`**|*`0.93`*|
|square::16384&nbsp; &nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0091|0.0037|0.0062|**`2.48`**|**`1.46`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0000|0.0000|*`0.5`*|*`0.63`*|
|square::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0003|0.0002|0.0002|**`1.18`**|**`1.43`**|
|square::16384&nbsp; &nbsp; b::1&nbsp; ->&nbsp; b::1|0.0010|0.0007|0.0007|**`1.45`**|**`1.37`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`2.08`**|**`1.08`**|
|square::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0005|0.0002|0.0002|**`2.83`**|**`1.89`**|
|square::16384&nbsp; &nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0009|0.0010|**`2.02`**|**`1.86`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0001|0.0000|0.0000|**`2.49`**|**`1.92`**|
|square::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0011|0.0003|0.0004|**`3.58`**|**`2.75`**|
|square::16384&nbsp; &nbsp; i::1&nbsp; ->&nbsp; i::1|0.0037|0.0015|0.0020|**`2.4`**|**`1.86`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0000|0.0001|**`3.75`**|**`1.35`**|
|square::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0023|0.0009|0.0016|**`2.45`**|**`1.46`**|
|square::16384&nbsp; &nbsp; l::1&nbsp; ->&nbsp; l::1|0.0091|0.0037|0.0062|**`2.46`**|**`1.45`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`3.33`**|**`1.35`**|
|square::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0023|0.0009|0.0016|**`2.45`**|**`1.45`**|
|square::16384&nbsp; &nbsp; q::1&nbsp; ->&nbsp; q::1|0.0091|0.0037|0.0062|**`2.46`**|**`1.45`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0000|0.0000|0.0000|*`0.47`*|*`0.56`*|
|subtract::4096&nbsp; &nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0002|0.0001|0.0002|**`1.36`**|**`1.09`**|
|subtract::16384&nbsp; &nbsp; B::1&nbsp; B::1&nbsp; ->&nbsp; B::1|0.0009|0.0006|0.0007|**`1.52`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0000|0.0000|0.0000|*`0.85`*|1.04|
|subtract::4096&nbsp; &nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0003|0.0002|0.0003|**`1.63`**|**`1.17`**|
|subtract::16384&nbsp; &nbsp; H::1&nbsp; H::1&nbsp; ->&nbsp; H::1|0.0018|0.0011|0.0014|**`1.61`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0001|0.0000|0.0000|**`2.38`**|**`1.28`**|
|subtract::4096&nbsp; &nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0009|0.0006|0.0007|**`1.59`**|**`1.28`**|
|subtract::16384&nbsp; &nbsp; I::1&nbsp; I::1&nbsp; ->&nbsp; I::1|0.0036|0.0022|0.0028|**`1.64`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0001|0.0001|0.0001|**`1.88`**|**`1.42`**|
|subtract::4096&nbsp; &nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|subtract::16384&nbsp; &nbsp; L::1&nbsp; L::1&nbsp; ->&nbsp; L::1|0.0071|0.0044|0.0062|**`1.63`**|**`1.16`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0001|0.0000|0.0001|**`1.99`**|**`1.39`**|
|subtract::4096&nbsp; &nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0013|0.0010|0.0013|**`1.32`**|1.05|
|subtract::16384&nbsp; &nbsp; Q::1&nbsp; Q::1&nbsp; ->&nbsp; Q::1|0.0093|0.0044|0.0056|**`2.12`**|**`1.66`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0000|0.0001|0.0000|*`0.39`*|*`0.56`*|
|subtract::4096&nbsp; &nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0002|0.0001|0.0001|**`1.4`**|**`1.19`**|
|subtract::16384&nbsp; &nbsp; b::1&nbsp; b::1&nbsp; ->&nbsp; b::1|0.0008|0.0006|0.0007|**`1.47`**|**`1.18`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0000|0.0000|0.0000|**`1.71`**|0.96|
|subtract::4096&nbsp; &nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0003|0.0002|0.0002|**`1.72`**|**`1.41`**|
|subtract::16384&nbsp; &nbsp; h::1&nbsp; h::1&nbsp; ->&nbsp; h::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0001|0.0000|0.0001|**`2.44`**|0.98|
|subtract::4096&nbsp; &nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0009|0.0006|0.0007|**`1.6`**|**`1.28`**|
|subtract::16384&nbsp; &nbsp; i::1&nbsp; i::1&nbsp; ->&nbsp; i::1|0.0034|0.0022|0.0024|**`1.56`**|**`1.4`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0001|0.0001|0.0001|**`1.86`**|**`1.09`**|
|subtract::4096&nbsp; &nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.28`**|
|subtract::16384&nbsp; &nbsp; l::1&nbsp; l::1&nbsp; ->&nbsp; l::1|0.0071|0.0046|0.0056|**`1.55`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0001|0.0000|0.0001|**`2.1`**|**`1.09`**|
|subtract::4096&nbsp; &nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0018|0.0011|0.0014|**`1.64`**|**`1.29`**|
|subtract::16384&nbsp; &nbsp; q::1&nbsp; q::1&nbsp; ->&nbsp; q::1|0.0071|0.0047|0.0056|**`1.53`**|**`1.28`**|