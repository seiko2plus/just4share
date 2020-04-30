metric: gmean, units: ms
|name of test|BASELINE|AVX512_SKX|AVX2|AVX512_SKX vs BASELINE|AVX2 vs BASELINE|
|---|:-:|:-:|:-:|:-:|:-:|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|0.99|1.0|
|add::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|0.0027|1.01|1.01|
|add::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0109|0.0109|1.0|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|1.01|1.01|
|add::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|0.0028|1.0|1.0|
|add::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|0.0113|1.0|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.0002|1.02|1.0|
|add::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|0.0030|1.02|1.01|
|add::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0120|0.0120|0.0120|1.0|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.0002|1.02|1.04|
|add::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|0.0036|1.0|1.0|
|add::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0152|0.0149|0.0159|1.02|0.95|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|1.03|1.03|
|add::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|0.0029|1.0|1.0|
|add::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0152|0.0154|0.0145|0.99|1.05|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|0.99|1.0|
|add::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|0.0027|1.01|1.0|
|add::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0110|0.0110|0.0109|1.0|1.01|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|**`1.45`**|**`1.45`**|
|add::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0036|0.0027|0.0027|**`1.35`**|**`1.35`**|
|add::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0145|0.0113|0.0114|**`1.28`**|**`1.28`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|0.0002|1.01|1.03|
|add::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.0030|1.01|1.01|
|add::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0115|0.0115|0.0115|1.0|1.01|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.71`**|
|add::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0048|0.0036|0.0036|**`1.34`**|**`1.34`**|
|add::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0203|0.0163|0.0152|**`1.25`**|**`1.34`**|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0003|0.0002|0.0002|**`1.7`**|**`1.71`**|
|add::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0048|0.0056|0.0036|*`0.87`*|**`1.34`**|
|add::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0213|0.0192|0.0178|**`1.11`**|**`1.2`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|**`1.11`**|**`1.12`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0029|0.0027|0.0027|**`1.09`**|**`1.1`**|
|bitwise_and::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|**`1.44`**|**`1.45`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0036|0.0028|0.0028|**`1.28`**|**`1.28`**|
|bitwise_and::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0145|0.0113|0.0113|**`1.28`**|**`1.28`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0002|0.0002|**`1.75`**|**`1.8`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0048|0.0030|0.0030|**`1.62`**|**`1.61`**|
|bitwise_and::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0193|0.0120|0.0120|**`1.61`**|**`1.61`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0003|0.0002|0.0002|**`1.7`**|**`1.72`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0048|0.0036|0.0036|**`1.35`**|**`1.35`**|
|bitwise_and::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0196|0.0148|0.0160|**`1.33`**|**`1.23`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.71`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0049|0.0029|0.0029|**`1.67`**|**`1.68`**|
|bitwise_and::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0196|0.0154|0.0145|**`1.28`**|**`1.35`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|**`1.11`**|**`1.11`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0030|0.0027|0.0027|**`1.09`**|**`1.1`**|
|bitwise_and::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|1.0|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|0.0027|1.0|1.0|
|bitwise_and::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0114|0.0113|0.0113|1.01|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0002|0.0002|**`1.78`**|**`1.79`**|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0048|0.0030|0.0030|**`1.61`**|**`1.61`**|
|bitwise_and::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0193|0.0114|0.0114|**`1.69`**|**`1.69`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|1.03|1.03|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|0.0036|1.0|1.0|
|bitwise_and::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0163|0.0163|0.0151|1.0|**`1.08`**|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|1.03|1.03|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|0.0036|*`0.64`*|1.0|
|bitwise_and::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0168|0.0191|0.0178|*`0.88`*|*`0.94`*|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|**`1.1`**|**`1.11`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0029|0.0027|0.0027|**`1.09`**|**`1.09`**|
|bitwise_or::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|**`1.45`**|**`1.45`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0036|0.0028|0.0028|**`1.28`**|**`1.28`**|
|bitwise_or::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0145|0.0113|0.0113|**`1.28`**|**`1.28`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.0002|1.01|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|0.0030|1.02|1.0|
|bitwise_or::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0120|0.0120|0.0120|1.0|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.7`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0048|0.0036|0.0036|**`1.35`**|**`1.34`**|
|bitwise_or::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0196|0.0148|0.0159|**`1.33`**|**`1.23`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.69`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0048|0.0029|0.0029|**`1.67`**|**`1.67`**|
|bitwise_or::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0196|0.0154|0.0145|**`1.28`**|**`1.35`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|**`1.12`**|**`1.13`**|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0030|0.0027|0.0027|**`1.09`**|**`1.1`**|
|bitwise_or::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|1.0|1.0|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|0.0027|1.0|1.0|
|bitwise_or::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0114|0.0113|0.0113|1.01|1.01|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|0.0002|1.01|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.0030|1.01|1.02|
|bitwise_or::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0115|0.0114|0.0114|1.01|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|1.04|1.04|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|0.0036|1.0|1.0|
|bitwise_or::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0163|0.0162|0.0151|1.01|**`1.08`**|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|1.04|1.04|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|0.0036|*`0.65`*|1.0|
|bitwise_or::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0168|0.0192|0.0176|*`0.88`*|0.95|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|**`1.12`**|**`1.12`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0029|0.0027|0.0027|**`1.09`**|**`1.09`**|
|bitwise_xor::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|**`1.45`**|**`1.44`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0036|0.0028|0.0028|**`1.28`**|**`1.28`**|
|bitwise_xor::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0145|0.0113|0.0113|**`1.28`**|**`1.28`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0002|0.0002|**`1.78`**|**`1.81`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0048|0.0030|0.0030|**`1.63`**|**`1.61`**|
|bitwise_xor::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0193|0.0120|0.0120|**`1.62`**|**`1.61`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.72`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0049|0.0036|0.0036|**`1.35`**|**`1.35`**|
|bitwise_xor::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0196|0.0148|0.0160|**`1.33`**|**`1.23`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.71`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0048|0.0029|0.0029|**`1.67`**|**`1.67`**|
|bitwise_xor::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0196|0.0154|0.0145|**`1.28`**|**`1.35`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|**`1.11`**|**`1.12`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0029|0.0027|0.0027|**`1.09`**|**`1.09`**|
|bitwise_xor::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0118|0.0110|0.0110|**`1.07`**|**`1.07`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|1.0|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|0.0027|1.0|1.0|
|bitwise_xor::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0114|0.0113|0.0113|1.0|1.0|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0002|0.0002|**`1.77`**|**`1.78`**|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0048|0.0030|0.0030|**`1.61`**|**`1.62`**|
|bitwise_xor::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0193|0.0116|0.0115|**`1.67`**|**`1.68`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|1.03|1.03|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|0.0036|1.0|1.0|
|bitwise_xor::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0163|0.0163|0.0151|1.0|**`1.08`**|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|1.03|1.03|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|0.0036|*`0.64`*|1.0|
|bitwise_xor::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0168|0.0191|0.0176|*`0.88`*|0.95|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0001|0.0002|0.0002|*`0.78`*|*`0.78`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0018|0.0018|0.0024|0.99|*`0.75`*|
|conjugate::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0073|0.0074|0.0097|0.99|*`0.76`*|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0001|0.0001|0.0001|1.01|1.0|
|conjugate::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0018|0.0018|0.0018|1.0|1.0|
|conjugate::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0074|0.0074|0.0074|1.0|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0001|0.0001|0.0002|0.99|*`0.52`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0019|0.0019|0.0036|1.01|*`0.52`*|
|conjugate::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0075|0.0084|0.0145|*`0.89`*|*`0.52`*|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0001|0.0001|0.0001|1.03|1.04|
|conjugate::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0020|0.0020|0.0020|1.0|1.0|
|conjugate::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0080|0.0080|0.0080|1.0|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0001|0.0001|0.0001|1.02|1.03|
|conjugate::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0020|0.0020|0.0020|0.99|1.0|
|conjugate::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0080|0.0080|0.0080|1.0|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0001|0.0002|0.0001|*`0.77`*|*`0.92`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0018|0.0024|0.0018|*`0.75`*|1.0|
|conjugate::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0073|0.0097|0.0073|*`0.76`*|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0001|0.0001|**`1.28`**|**`1.07`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0018|0.0019|**`1.33`**|**`1.27`**|
|conjugate::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0102|0.0074|0.0084|**`1.38`**|**`1.21`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0001|0.0001|0.0001|0.99|0.99|
|conjugate::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0019|0.0019|0.0019|1.0|1.01|
|conjugate::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0073|0.0073|0.0073|1.0|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0001|0.0001|0.0001|1.0|0.98|
|conjugate::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0020|0.0020|0.0020|1.0|1.0|
|conjugate::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0080|0.0080|0.0090|1.0|*`0.89`*|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0001|0.0001|0.0001|0.99|*`0.92`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0020|0.0020|0.0020|1.0|1.0|
|conjugate::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0080|0.0080|0.0080|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.0|
|equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|0.0110|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0029|0.0028|0.0028|1.04|1.05|
|equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|0.0110|1.0|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.71`**|
|equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.69`**|**`1.7`**|
|equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|0.99|
|greater::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|0.0030|1.0|1.0|
|greater::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|0.0122|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|0.0030|1.0|1.0|
|greater::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0121|0.0121|0.0121|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|0.0031|1.01|1.0|
|greater::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0123|0.0123|0.0122|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|0.0034|1.0|1.0|
|greater::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|0.0138|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0034|0.0035|0.0035|1.0|1.0|
|greater::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0138|0.0139|0.0138|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|greater::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.01|
|greater::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|0.0110|1.0|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.7`**|**`1.71`**|
|greater::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|greater::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.68`**|**`1.7`**|
|greater::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|greater::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0038|0.0038|0.0038|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0154|0.0154|0.0155|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|0.99|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0155|0.0156|0.0160|0.99|0.97|
|greater_equal::16384&nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0813|0.0820|0.0818|0.99|0.99|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|0.96|0.95|
|greater_equal::4096&nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0147|0.0145|0.0151|1.02|0.97|
|greater_equal::16384&nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0771|0.0783|0.0781|0.99|0.99|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0008|0.0008|0.0008|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0256|0.0268|0.0257|0.96|1.0|
|greater_equal::16384&nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.1405|0.1404|0.1400|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.0|
|greater_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|0.0110|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.01|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0051|0.0053|0.0051|0.96|0.99|
|greater_equal::16384&nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0207|0.0202|0.0207|1.02|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|0.0035|1.01|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0638|0.0646|0.0635|0.99|1.0|
|greater_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.2606|0.2592|0.2572|1.01|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0035|0.0035|0.0035|1.01|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0640|0.0646|0.0635|0.99|1.01|
|greater_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.1304|0.1300|0.1287|1.0|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0019|0.0019|0.0019|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0302|0.0302|0.0303|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.1208|0.1208|0.1208|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|0.0031|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|0.0122|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0005|0.0005|0.0005|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0073|0.0073|0.0073|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0325|0.0328|0.0317|0.99|1.02|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|greater_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.01|
|greater_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|0.0110|1.0|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.72`**|**`1.7`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|greater_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0051|0.0052|0.0052|0.97|0.97|
|greater_equal::16384&nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0205|0.0203|0.0203|1.01|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.7`**|**`1.69`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|greater_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|0.99|0.99|
|invert::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0024|0.0024|1.0|1.0|
|invert::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0097|0.0098|1.0|0.99|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|1.0|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0024|0.0024|0.0024|1.0|1.0|
|invert::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0097|0.0097|0.0097|1.0|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0001|0.0001|0.0002|0.99|*`0.89`*|
|invert::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0024|0.0024|0.0024|1.0|0.99|
|invert::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0096|0.0106|0.0097|*`0.9`*|0.99|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.0002|0.99|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0025|0.0025|0.0025|0.99|0.99|
|invert::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0100|0.0100|0.0100|1.0|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|0.99|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0025|0.0025|0.0025|0.99|0.99|
|invert::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0100|0.0101|0.0100|0.99|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0001|0.99|**`1.09`**|
|invert::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0024|0.0024|0.0023|1.0|**`1.06`**|
|invert::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0097|0.0097|0.0092|1.0|1.05|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0001|0.0002|**`1.1`**|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0021|0.0024|**`1.14`**|1.0|
|invert::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0103|0.0092|0.0097|**`1.11`**|**`1.06`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0001|0.0002|0.0002|*`0.89`*|*`0.89`*|
|invert::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0024|0.0024|0.0024|0.99|1.0|
|invert::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0086|0.0097|0.0097|*`0.89`*|*`0.89`*|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|0.98|0.98|
|invert::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0025|0.0025|0.0025|0.99|1.0|
|invert::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0101|0.0100|0.0111|1.01|*`0.91`*|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|0.98|0.99|
|invert::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0025|0.0025|0.0025|1.0|1.0|
|invert::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0100|0.0100|0.0100|1.0|1.0|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|0.99|*`0.78`*|
|left_shift::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0028|0.0028|0.0036|1.0|*`0.78`*|
|left_shift::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0114|0.0114|0.0145|1.0|*`0.79`*|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0003|0.0002|*`0.7`*|0.99|
|left_shift::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0036|0.0049|0.0036|*`0.74`*|1.0|
|left_shift::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0145|0.0206|0.0145|*`0.7`*|1.0|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0002|0.0002|**`1.32`**|**`1.63`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0049|0.0036|0.0031|**`1.33`**|**`1.55`**|
|left_shift::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0193|0.0145|0.0124|**`1.33`**|**`1.56`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0004|0.0004|0.0002|1.0|**`1.57`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0061|0.0061|0.0037|1.0|**`1.64`**|
|left_shift::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0243|0.0242|0.0162|1.01|**`1.5`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0004|0.0004|0.0002|1.0|**`1.57`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0061|0.0061|0.0037|1.0|**`1.66`**|
|left_shift::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0243|0.0243|0.0149|1.0|**`1.63`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|1.0|1.0|
|left_shift::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0028|0.0028|0.0028|1.0|1.0|
|left_shift::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0114|0.0114|0.0114|1.0|1.0|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|0.0003|0.98|1.0|
|left_shift::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0047|0.0048|0.0047|0.98|1.0|
|left_shift::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0189|0.0194|0.0189|0.98|1.0|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0003|0.0003|1.04|1.02|
|left_shift::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0049|0.0048|0.0048|1.03|1.01|
|left_shift::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0194|0.0190|0.0194|1.02|1.0|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|0.99|0.99|
|left_shift::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|0.0036|1.0|1.0|
|left_shift::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0165|0.0163|0.0154|1.01|**`1.08`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|0.99|1.0|
|left_shift::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0053|0.0036|*`0.69`*|1.0|
|left_shift::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0167|0.0191|0.0174|*`0.87`*|0.96|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|less::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.02|
|less::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0110|0.0109|0.99|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|less::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.0|
|less::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|0.0110|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0033|1.0|0.97|
|less::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|0.99|
|less::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|less::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|less::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|less::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0110|0.0109|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.02|
|less::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|0.0110|1.0|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.72`**|**`1.71`**|
|less::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|less::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0131|0.0127|**`1.48`**|**`1.53`**|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.69`**|**`1.7`**|
|less::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0033|**`1.53`**|**`1.49`**|
|less::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.52`**|**`1.53`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0042|0.0042|0.0042|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0169|0.0169|0.0169|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|0.0030|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|0.0122|0.99|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0149|0.0148|0.0153|1.01|0.97|
|less_equal::16384&nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0800|0.0795|0.0797|1.01|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.01|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0148|0.0146|0.0146|1.02|1.01|
|less_equal::16384&nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0774|0.0788|0.0776|0.98|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0008|0.0008|0.0008|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0246|0.0260|0.0246|*`0.94`*|1.0|
|less_equal::16384&nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.1414|0.1409|0.1411|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|0.0030|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0121|0.0121|0.0121|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|0.0031|1.01|1.0|
|less_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0123|0.0123|0.0122|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0035|0.0034|0.0035|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|0.0138|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.01|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0051|0.0053|0.0051|0.96|0.99|
|less_equal::16384&nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0207|0.0202|0.0207|1.02|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|0.0036|1.01|0.98|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0640|0.0649|0.0634|0.99|1.01|
|less_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.2622|0.2596|0.2577|1.01|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0035|0.0035|0.0035|1.01|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0644|0.0647|0.0633|0.99|1.02|
|less_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.1313|0.1304|0.1292|1.01|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0034|0.0035|0.0035|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|0.0138|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.01|1.01|
|less_equal::16384&nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0129|0.0128|0.0129|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0019|0.0019|0.0019|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0302|0.0302|0.0303|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.1211|0.1211|0.1211|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|**`1.13`**|**`1.13`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0035|0.0031|0.0032|**`1.13`**|**`1.09`**|
|less_equal::16384&nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0124|0.0122|0.0123|1.02|1.01|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0005|0.0005|0.0005|1.0|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0073|0.0073|0.0073|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0324|0.0328|0.0317|0.99|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|less_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.01|
|less_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0109|0.0110|0.0110|1.0|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.71`**|**`1.7`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|less_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0051|0.0052|0.0052|0.97|0.97|
|less_equal::16384&nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0205|0.0203|0.0203|1.01|1.01|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.69`**|**`1.7`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|less_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|0.0024|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|0.0097|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|0.0024|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|0.0097|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0025|0.0024|0.0024|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0098|0.0097|0.0097|1.01|1.01|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|*`0.94`*|*`0.94`*|
|logical_not::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|*`0.94`*|0.95|
|logical_not::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|0.99|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|**`1.06`**|
|logical_not::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|0.0022|1.0|**`1.08`**|
|logical_not::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|0.0089|1.0|**`1.08`**|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|0.0024|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|0.0097|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0025|0.0024|0.0025|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0098|0.0097|0.0098|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|0.98|
|logical_not::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.98|0.99|
|logical_not::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|logical_not::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|0.99|
|logical_xor::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|0.0035|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0143|0.0142|0.0143|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0142|0.0142|0.0142|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|1.01|1.01|
|logical_xor::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0158|0.0158|0.0158|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0159|0.0158|0.0158|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0159|0.0159|0.0159|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0143|0.0144|0.0142|0.99|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|0.0036|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0143|0.0142|0.0142|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.0003|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|1.0|1.01|
|logical_xor::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0158|0.0158|0.0158|1.0|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|1.0|1.0|
|logical_xor::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0159|0.0158|0.0159|1.01|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.0040|0.99|0.99|
|logical_xor::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0159|0.0159|0.0159|1.0|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|**`1.13`**|**`1.14`**|
|multiply::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0029|0.0027|0.0027|**`1.07`**|**`1.07`**|
|multiply::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0116|0.0109|0.0110|**`1.07`**|**`1.06`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|1.01|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|0.0028|1.0|1.0|
|multiply::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0111|0.0111|0.0111|1.0|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.0002|**`1.13`**|**`1.12`**|
|multiply::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0031|0.0030|0.0030|1.04|1.02|
|multiply::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0122|0.0120|0.0120|1.02|1.02|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.0002|**`1.35`**|**`1.35`**|
|multiply::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|0.0036|1.01|1.01|
|multiply::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0152|0.0148|0.0160|1.03|0.95|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|**`1.34`**|**`1.33`**|
|multiply::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0036|0.0029|0.0029|**`1.24`**|**`1.24`**|
|multiply::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0152|0.0154|0.0145|0.99|1.05|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|**`1.13`**|**`1.13`**|
|multiply::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0029|0.0027|0.0027|**`1.08`**|**`1.1`**|
|multiply::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0116|0.0110|0.0110|**`1.06`**|**`1.06`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|1.02|1.02|
|multiply::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0028|0.0028|0.97|0.97|
|multiply::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0111|0.0111|0.0111|1.0|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|0.0002|**`1.12`**|**`1.09`**|
|multiply::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0031|0.0030|0.0030|1.03|1.03|
|multiply::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0121|0.0117|0.0116|1.03|1.04|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|1.0|0.99|
|multiply::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|0.0036|1.0|1.0|
|multiply::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0164|0.0164|0.0151|1.0|**`1.08`**|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0003|0.0003|0.0003|1.0|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0048|0.0048|0.0049|1.0|1.0|
|multiply::16384&nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0196|0.0201|0.0196|0.98|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0002|0.0002|0.0002|1.0|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0039|0.0037|0.0042|1.05|*`0.92`*|
|multiply::16384&nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0149|0.0165|0.0152|*`0.9`*|0.98|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|0.98|0.98|
|multiply::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0059|0.0036|*`0.61`*|1.0|
|multiply::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0170|0.0195|0.0178|*`0.88`*|0.95|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0001|0.99|**`1.09`**|
|negative::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0024|0.0023|1.0|**`1.06`**|
|negative::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0097|0.0094|1.0|1.03|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0001|1.0|**`1.09`**|
|negative::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0024|0.0024|0.0023|1.0|**`1.06`**|
|negative::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0097|0.0097|0.0092|1.0|1.05|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.0002|0.99|0.99|
|negative::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0024|0.0024|0.0024|1.01|1.0|
|negative::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0097|0.0106|0.0097|*`0.91`*|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.0002|1.0|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0025|0.0025|0.0025|0.99|0.99|
|negative::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0100|0.0100|0.0100|1.0|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|1.0|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0025|0.0025|0.0025|0.99|0.99|
|negative::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0100|0.0101|0.0100|0.99|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|0.99|0.99|
|negative::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0024|0.0024|0.0024|1.0|1.0|
|negative::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0097|0.0097|0.0097|1.0|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|0.99|0.98|
|negative::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0024|0.0024|1.0|1.0|
|negative::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0103|0.0097|0.0097|**`1.06`**|**`1.06`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0001|0.0002|**`1.1`**|0.98|
|negative::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0025|0.0024|0.0024|1.02|1.01|
|negative::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0097|0.0085|0.0097|**`1.14`**|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|0.99|0.99|
|negative::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0025|0.0026|0.0025|0.99|0.99|
|negative::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0101|0.0100|0.0111|1.01|*`0.91`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|0.98|0.98|
|negative::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0025|0.0025|0.0025|0.99|1.0|
|negative::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0100|0.0100|0.0100|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|0.99|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.0|
|not_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|0.0110|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.0032|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.0127|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.0|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|0.0027|1.0|1.0|
|not_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|0.0109|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.0002|1.01|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.0028|1.01|1.01|
|not_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|0.0110|1.0|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.72`**|**`1.7`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.53`**|**`1.53`**|
|not_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.53`**|**`1.53`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0003|0.0002|0.0002|**`1.69`**|**`1.69`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0048|0.0032|0.0032|**`1.49`**|**`1.53`**|
|not_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0193|0.0127|0.0127|**`1.52`**|**`1.53`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0049|0.0049|0.0049|1.01|1.01|
|reciprocal::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0196|0.0194|0.0206|1.01|0.95|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0049|0.0049|0.0049|1.0|1.01|
|reciprocal::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0196|0.0195|0.0195|1.01|1.01|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0050|0.0049|0.0049|1.01|1.01|
|reciprocal::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0198|0.0221|0.0196|*`0.9`*|1.01|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0005|0.0004|0.0004|1.02|1.03|
|reciprocal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0070|0.0070|0.0070|1.0|1.0|
|reciprocal::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0289|0.0283|0.0283|1.02|1.02|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0005|0.0004|0.0004|1.02|1.03|
|reciprocal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0070|0.0070|0.0070|1.01|1.01|
|reciprocal::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0288|0.0282|0.0283|1.02|1.02|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0049|0.0049|0.0048|1.01|1.01|
|reciprocal::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0196|0.0194|0.0194|1.01|1.01|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|0.0003|0.99|0.99|
|reciprocal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0048|0.0048|0.0048|1.0|1.0|
|reciprocal::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0217|0.0195|0.0194|**`1.11`**|**`1.12`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0049|0.0049|0.0049|1.0|1.0|
|reciprocal::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0193|0.0193|0.0193|1.0|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0003|0.0003|0.0003|1.0|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0049|0.0049|0.0049|1.0|1.0|
|reciprocal::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0202|0.0200|0.0226|1.01|*`0.89`*|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0003|0.0003|0.0003|1.0|1.01|
|reciprocal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0049|0.0049|0.0049|1.0|1.0|
|reciprocal::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0202|0.0200|0.0199|1.01|1.02|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0004|0.0002|*`0.62`*|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0036|0.0060|0.0036|*`0.6`*|1.0|
|right_shift::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0148|0.0242|0.0147|*`0.61`*|1.01|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|1.0|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0037|0.0037|0.0037|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0149|0.0149|0.0149|1.0|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.0002|0.99|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0039|0.0039|0.0039|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0155|0.0156|0.0155|0.99|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0003|0.0002|0.0002|1.01|1.02|
|right_shift::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0043|0.0043|0.0043|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0179|0.0175|0.0185|1.03|0.97|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|1.0|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0038|0.0039|0.0038|0.97|1.0|
|right_shift::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0179|0.0181|0.0172|0.99|1.04|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0003|0.0003|0.0003|1.0|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0042|0.0042|0.0042|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0170|0.0170|0.0170|1.0|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|0.0003|1.0|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0043|0.0043|0.0043|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0170|0.0170|0.0170|1.0|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0004|0.0004|0.0002|1.0|**`1.6`**|
|right_shift::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0061|0.0061|0.0039|1.0|**`1.55`**|
|right_shift::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0242|0.0242|0.0150|1.0|**`1.61`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0003|1.01|0.98|
|right_shift::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0043|0.0043|0.0043|1.0|1.0|
|right_shift::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0189|0.0190|0.0180|1.0|1.05|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0003|1.0|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0043|0.0063|0.0043|*`0.68`*|1.0|
|right_shift::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0196|0.0218|0.0203|*`0.9`*|0.96|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|1.05|1.0|
|square::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0023|0.0024|1.04|1.0|
|square::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0094|0.0099|1.03|0.98|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0001|0.0002|**`1.12`**|1.0|
|square::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0024|0.0021|0.0024|**`1.14`**|1.0|
|square::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0097|0.0089|0.0097|**`1.09`**|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0001|0.0002|0.0002|*`0.89`*|*`0.9`*|
|square::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0023|0.0024|0.0024|*`0.94`*|*`0.94`*|
|square::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0091|0.0108|0.0097|*`0.85`*|*`0.94`*|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0001|0.0002|**`1.09`**|1.0|
|square::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0024|0.0024|0.0024|1.02|1.0|
|square::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0097|0.0096|0.0097|1.02|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0001|0.0002|**`1.08`**|1.0|
|square::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0024|0.0024|0.0024|1.02|1.0|
|square::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0098|0.0096|0.0097|1.01|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|1.0|1.0|
|square::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0024|0.0024|0.0024|1.0|1.0|
|square::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0097|0.0097|0.0097|1.0|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0001|0.0002|0.0002|*`0.89`*|*`0.89`*|
|square::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0021|0.0024|0.0024|*`0.88`*|*`0.88`*|
|square::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0097|0.0097|0.0097|1.0|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|0.0001|0.99|**`1.11`**|
|square::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0024|0.0024|0.0023|1.0|**`1.07`**|
|square::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0097|0.0097|0.0085|1.0|**`1.14`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.0002|1.02|1.01|
|square::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0024|0.0024|0.0024|1.0|1.0|
|square::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0097|0.0097|0.0110|1.0|*`0.89`*|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.0002|1.01|1.01|
|square::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0024|0.0024|0.0024|1.0|1.0|
|square::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0098|0.0098|0.0097|1.0|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|0.0002|1.01|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|0.0027|1.0|1.0|
|subtract::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0110|0.0110|1.0|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|0.0002|1.01|1.0|
|subtract::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|0.0028|1.0|1.0|
|subtract::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|0.0113|1.0|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0002|0.0002|**`1.8`**|**`1.8`**|
|subtract::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0048|0.0030|0.0030|**`1.6`**|**`1.61`**|
|subtract::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0193|0.0120|0.0120|**`1.61`**|**`1.61`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.0002|1.02|1.03|
|subtract::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|0.0036|1.0|1.0|
|subtract::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0152|0.0148|0.0159|1.02|0.95|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.0002|1.02|1.03|
|subtract::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|0.0029|1.0|1.0|
|subtract::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0152|0.0154|0.0145|0.99|1.05|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.0002|1.01|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|0.0027|1.0|1.0|
|subtract::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0110|0.0110|0.0110|1.0|1.01|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|0.0002|**`1.46`**|**`1.45`**|
|subtract::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0036|0.0027|0.0027|**`1.34`**|**`1.34`**|
|subtract::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0145|0.0113|0.0113|**`1.28`**|**`1.28`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0002|0.0002|**`1.79`**|**`1.76`**|
|subtract::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0048|0.0030|0.0030|**`1.61`**|**`1.63`**|
|subtract::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0193|0.0114|0.0115|**`1.69`**|**`1.69`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0003|0.0002|0.0002|**`1.65`**|**`1.7`**|
|subtract::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0048|0.0036|0.0036|**`1.35`**|**`1.34`**|
|subtract::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0203|0.0163|0.0151|**`1.25`**|**`1.34`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0003|0.0002|0.0002|**`1.65`**|**`1.71`**|
|subtract::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0048|0.0056|0.0036|*`0.87`*|**`1.35`**|
|subtract::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0213|0.0191|0.0175|**`1.11`**|**`1.21`**|