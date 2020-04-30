metric: gmean, units: ms
|name of test|AVX2|AVX512_SKX|AVX512_SKX vs AVX2|
|---|:-:|:-:|:-:|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.0|
|add::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|1.0|
|add::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0109|0.0109|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.0|
|add::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|add::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.02|
|add::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|1.01|
|add::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0120|0.0120|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|0.99|
|add::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|add::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0145|0.0149|0.97|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|0.99|
|add::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|1.0|
|add::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0146|0.0154|0.95|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|add::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.01|
|add::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0111|0.0110|1.01|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|add::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|1.0|
|add::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0113|0.0113|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|0.99|
|add::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.99|
|add::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0114|0.0115|1.0|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.01|
|add::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|add::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0158|0.0163|0.97|
|add::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.02|
|add::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|*`0.65`*|
|add::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0145|0.0192|*`0.76`*|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|1.0|
|bitwise_and::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0110|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|bitwise_and::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.98|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|1.0|
|bitwise_and::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0119|0.0120|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|bitwise_and::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0145|0.0148|0.98|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|1.0|
|bitwise_and::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0146|0.0154|0.95|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.0|
|bitwise_and::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0111|0.0110|1.01|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|1.0|
|bitwise_and::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0113|0.0113|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.0|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.99|
|bitwise_and::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0114|0.0114|1.0|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.01|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|bitwise_and::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0158|0.0163|0.97|
|bitwise_and::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.04|
|bitwise_and::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|*`0.64`*|
|bitwise_and::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0145|0.0191|*`0.76`*|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.0|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|1.0|
|bitwise_or::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0110|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.0|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|bitwise_or::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|1.01|
|bitwise_or::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0120|0.0120|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|bitwise_or::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0145|0.0148|0.98|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|1.0|
|bitwise_or::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0145|0.0154|0.95|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.0|
|bitwise_or::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0111|0.0110|1.01|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|1.0|
|bitwise_or::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0113|0.0113|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.0|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.99|
|bitwise_or::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0114|0.0114|1.0|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.01|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|bitwise_or::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0158|0.0162|0.98|
|bitwise_or::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.02|
|bitwise_or::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|*`0.64`*|
|bitwise_or::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0145|0.0192|*`0.75`*|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|1.0|
|bitwise_xor::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0110|1.0|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.01|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|bitwise_xor::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|1.0|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|0.99|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|1.01|
|bitwise_xor::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0119|0.0120|1.0|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|bitwise_xor::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0144|0.0148|0.98|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.01|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|1.0|
|bitwise_xor::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0145|0.0154|0.95|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.0|
|bitwise_xor::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0112|0.0110|1.01|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|1.0|
|bitwise_xor::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0113|0.0113|1.0|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.0|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|1.0|
|bitwise_xor::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0115|0.0116|0.99|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.01|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|bitwise_xor::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0158|0.0163|0.97|
|bitwise_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.03|
|bitwise_xor::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|*`0.65`*|
|bitwise_xor::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0145|0.0191|*`0.75`*|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.01|
|conjugate::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0018|**`1.32`**|
|conjugate::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0074|**`1.31`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0001|0.0001|1.01|
|conjugate::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0018|0.0018|1.0|
|conjugate::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0074|0.0074|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0001|**`1.89`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0036|0.0019|**`1.94`**|
|conjugate::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0145|0.0084|**`1.72`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0001|0.0001|1.0|
|conjugate::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0020|0.0020|1.0|
|conjugate::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0080|0.0080|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0001|0.0001|1.0|
|conjugate::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0020|0.0020|1.0|
|conjugate::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0080|0.0080|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0001|0.0002|*`0.78`*|
|conjugate::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0018|0.0024|*`0.75`*|
|conjugate::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0073|0.0097|*`0.76`*|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0001|0.0001|**`1.09`**|
|conjugate::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0019|0.0018|1.02|
|conjugate::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0075|0.0074|1.02|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0001|0.0001|1.0|
|conjugate::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0019|0.0019|0.99|
|conjugate::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0073|0.0073|1.0|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0001|0.0001|1.02|
|conjugate::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0020|0.0020|1.0|
|conjugate::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0090|0.0080|**`1.13`**|
|conjugate::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0001|0.0001|1.01|
|conjugate::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0020|0.0020|1.0|
|conjugate::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0100|0.0080|**`1.25`**|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|1.01|
|equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.13`**|
|equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|1.0|
|greater::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|1.0|
|greater::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0122|0.0121|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|greater::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|1.01|
|greater::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0123|0.0123|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0034|0.0035|1.0|
|greater::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|greater::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0034|0.0035|0.99|
|greater::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0138|0.0139|0.99|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.13`**|
|greater::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0110|0.0109|1.01|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|greater::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|greater::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0038|0.0038|1.0|
|greater_equal::16384&nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0154|0.0154|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|0.98|
|greater_equal::4096&nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0161|0.0156|1.03|
|greater_equal::16384&nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0819|0.0820|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.03|
|greater_equal::4096&nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0148|0.0145|1.02|
|greater_equal::16384&nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0781|0.0783|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0008|0.0008|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0260|0.0268|0.97|
|greater_equal::16384&nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.1401|0.1404|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|1.01|
|greater_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0050|0.0053|0.95|
|greater_equal::16384&nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0205|0.0202|1.02|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0636|0.0646|0.98|
|greater_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.2572|0.2592|0.99|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0035|0.0035|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0636|0.0646|0.98|
|greater_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.1289|0.1300|0.99|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.14`**|
|greater_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|greater_equal::4096&nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater_equal::16384&nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0133|0.0127|1.05|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0019|0.0019|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0302|0.0302|1.0|
|greater_equal::16384&nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.1208|0.1208|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|1.0|
|greater_equal::16384&nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0005|0.0005|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0073|0.0073|1.0|
|greater_equal::16384&nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0319|0.0328|0.97|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|greater_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|greater_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.02|
|greater_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|greater_equal::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0051|0.0052|0.98|
|greater_equal::16384&nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0205|0.0203|1.01|
|greater_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|greater_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|greater_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.01|
|invert::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0024|1.0|
|invert::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0097|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0024|0.0024|1.0|
|invert::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0097|0.0097|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0001|**`1.11`**|
|invert::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0024|0.0024|1.01|
|invert::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0097|0.0106|*`0.92`*|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0025|0.0025|1.0|
|invert::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0101|0.0100|1.01|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0025|0.0025|0.99|
|invert::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0100|0.0101|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0001|0.0002|*`0.9`*|
|invert::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0023|0.0024|*`0.94`*|
|invert::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0092|0.0097|0.95|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0001|**`1.1`**|
|invert::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0021|**`1.14`**|
|invert::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0097|0.0092|1.05|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0024|0.0024|0.99|
|invert::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0097|0.0097|1.0|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0025|0.0025|0.99|
|invert::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0111|0.0100|**`1.11`**|
|invert::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.0|
|invert::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0025|0.0025|0.99|
|invert::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0121|0.0100|**`1.21`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|**`1.27`**|
|left_shift::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0036|0.0028|**`1.28`**|
|left_shift::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0145|0.0114|**`1.27`**|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0003|*`0.71`*|
|left_shift::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0036|0.0049|*`0.74`*|
|left_shift::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0145|0.0206|*`0.7`*|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|*`0.81`*|
|left_shift::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0031|0.0036|*`0.85`*|
|left_shift::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0124|0.0145|*`0.85`*|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0004|*`0.64`*|
|left_shift::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0037|0.0061|*`0.61`*|
|left_shift::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0149|0.0242|*`0.62`*|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0003|0.0004|*`0.64`*|
|left_shift::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0037|0.0061|*`0.6`*|
|left_shift::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0150|0.0243|*`0.62`*|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.01|
|left_shift::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0028|0.0028|1.0|
|left_shift::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0115|0.0114|1.01|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|0.98|
|left_shift::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0047|0.0048|0.98|
|left_shift::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0189|0.0194|0.98|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0003|1.02|
|left_shift::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0049|0.0048|1.02|
|left_shift::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0194|0.0190|1.02|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.01|
|left_shift::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|left_shift::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0159|0.0163|0.97|
|left_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.0|
|left_shift::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0053|*`0.69`*|
|left_shift::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0146|0.0191|*`0.76`*|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0110|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|1.01|
|less::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0033|0.0032|1.03|
|less::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|less::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.13`**|
|less::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.02|
|less::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0110|0.99|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|less::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|less::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0131|0.97|
|less::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0042|0.0042|1.0|
|less_equal::16384&nbsp; &nbsp; ?::2&nbsp; ?::2&nbsp; ->&nbsp; ?::2|0.0169|0.0169|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|1.0|
|less_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0122|0.0122|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.02|
|less_equal::4096&nbsp; &nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0151|0.0148|1.02|
|less_equal::16384&nbsp; &nbsp; D::2&nbsp; D::2&nbsp; ->&nbsp; ?::2|0.0807|0.0795|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.02|
|less_equal::4096&nbsp; &nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0146|0.0146|1.0|
|less_equal::16384&nbsp; &nbsp; F::2&nbsp; F::2&nbsp; ->&nbsp; ?::2|0.0777|0.0788|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0008|0.0008|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.0248|0.0260|0.95|
|less_equal::16384&nbsp; &nbsp; G::2&nbsp; G::2&nbsp; ->&nbsp; ?::2|0.1410|0.1409|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0030|0.0030|1.0|
|less_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0121|0.0121|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0031|0.0031|1.01|
|less_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0123|0.0123|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0035|0.0034|1.0|
|less_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0050|0.0053|0.96|
|less_equal::16384&nbsp; &nbsp; M::2&nbsp; M::2&nbsp; ->&nbsp; ?::2|0.0205|0.0202|1.02|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|1.01|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.0640|0.0649|0.99|
|less_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; ?::2|0.2576|0.2596|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0035|0.0035|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.0640|0.0647|0.99|
|less_equal::16384&nbsp; &nbsp; O::2&nbsp; O::2&nbsp; ->&nbsp; O::2|0.1290|0.1304|0.99|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|less_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0035|0.0035|1.0|
|less_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0138|0.0138|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.14`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|less_equal::4096&nbsp; &nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less_equal::16384&nbsp; &nbsp; d::2&nbsp; d::2&nbsp; ->&nbsp; ?::2|0.0134|0.0128|1.05|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0019|0.0019|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.0303|0.0302|1.0|
|less_equal::16384&nbsp; &nbsp; e::2&nbsp; e::2&nbsp; ->&nbsp; ?::2|0.1210|0.1211|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.08`**|
|less_equal::4096&nbsp; &nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0035|0.0031|**`1.13`**|
|less_equal::16384&nbsp; &nbsp; f::2&nbsp; f::2&nbsp; ->&nbsp; ?::2|0.0126|0.0122|1.03|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0005|0.0005|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0073|0.0073|1.0|
|less_equal::16384&nbsp; &nbsp; g::2&nbsp; g::2&nbsp; ->&nbsp; ?::2|0.0319|0.0328|0.97|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|less_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|less_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0051|0.0052|0.98|
|less_equal::16384&nbsp; &nbsp; m::2&nbsp; m::2&nbsp; ->&nbsp; ?::2|0.0205|0.0203|1.01|
|less_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|less_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|less_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|1.0|
|logical_not::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|1.0|
|logical_not::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|1.0|
|logical_not::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|logical_not::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|logical_not::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|*`0.94`*|
|logical_not::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0022|0.0024|*`0.92`*|
|logical_not::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0089|0.0097|*`0.92`*|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0024|0.0024|1.0|
|logical_not::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0097|0.0097|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0025|0.0024|1.01|
|logical_not::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0098|0.0097|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|logical_not::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|logical_not::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|logical_not::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_not::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|logical_not::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|1.0|
|logical_xor::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0144|0.0142|1.01|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|1.0|
|logical_xor::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0143|0.0142|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|1.0|
|logical_xor::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0158|0.0158|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|1.0|
|logical_xor::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0164|0.0158|1.04|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|1.0|
|logical_xor::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0159|0.0159|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.04|
|logical_xor::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0036|0.0035|1.0|
|logical_xor::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0143|0.0144|0.99|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0036|0.0036|1.0|
|logical_xor::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0142|0.0142|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0003|0.0003|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|1.0|
|logical_xor::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0158|0.0158|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|logical_xor::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|1.0|
|logical_xor::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0159|0.0158|1.0|
|logical_xor::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|logical_xor::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0040|0.0040|0.99|
|logical_xor::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0159|0.0159|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0026|0.0027|0.98|
|multiply::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0109|1.01|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|multiply::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0111|0.0111|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|1.01|
|multiply::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0120|0.0120|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|multiply::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0145|0.0148|0.98|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0030|0.0029|1.01|
|multiply::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0146|0.0154|*`0.94`*|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.01|
|multiply::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0113|0.0110|1.04|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0028|0.0028|1.01|
|multiply::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0111|0.0111|1.0|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.01|
|multiply::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|1.0|
|multiply::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0115|0.0117|0.98|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.02|
|multiply::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|multiply::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0160|0.0164|0.97|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0003|0.0003|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0048|0.0048|1.0|
|multiply::16384&nbsp; &nbsp; m::2&nbsp; q::2&nbsp; ->&nbsp; m::2|0.0193|0.0201|0.96|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0002|0.0002|1.0|
|multiply::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0036|0.0037|0.95|
|multiply::16384&nbsp; &nbsp; q::2&nbsp; m::2&nbsp; ->&nbsp; m::2|0.0142|0.0165|*`0.86`*|
|multiply::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.02|
|multiply::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0059|*`0.61`*|
|multiply::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0145|0.0195|*`0.74`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0001|0.0002|*`0.9`*|
|negative::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0023|0.0024|0.95|
|negative::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0092|0.0097|0.95|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0001|0.0002|*`0.91`*|
|negative::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0023|0.0024|*`0.94`*|
|negative::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0093|0.0097|0.96|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0024|0.0024|1.01|
|negative::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0097|0.0106|*`0.91`*|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0025|0.0025|0.99|
|negative::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0100|0.0100|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0025|0.0025|0.99|
|negative::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0100|0.0101|0.99|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0024|0.0024|1.0|
|negative::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0097|0.0097|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0024|1.0|
|negative::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0097|0.0097|1.0|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0001|**`1.12`**|
|negative::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0024|0.0024|1.01|
|negative::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0097|0.0085|**`1.14`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0025|0.0026|0.99|
|negative::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0111|0.0100|**`1.11`**|
|negative::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.0|
|negative::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0025|0.0025|0.99|
|negative::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0121|0.0100|**`1.21`**|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|not_equal::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|not_equal::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|1.01|
|not_equal::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; ?::2|0.0111|0.0111|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|not_equal::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|0.99|
|not_equal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|not_equal::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|**`1.14`**|
|not_equal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|not_equal::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0027|0.0027|1.0|
|not_equal::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; ?::2|0.0109|0.0109|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0028|0.0028|0.99|
|not_equal::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; ?::2|0.0110|0.0110|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.01|
|not_equal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|1.0|
|not_equal::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|1.0|
|not_equal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0002|0.0002|1.0|
|not_equal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0032|0.0032|0.98|
|not_equal::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; ?::2|0.0127|0.0127|0.99|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0049|0.0049|1.0|
|reciprocal::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0194|0.0194|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0049|0.0049|1.0|
|reciprocal::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0195|0.0195|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0049|0.0049|1.0|
|reciprocal::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0196|0.0221|*`0.89`*|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0004|0.0004|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0070|0.0070|1.0|
|reciprocal::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0283|0.0283|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0004|0.0004|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0070|0.0070|1.0|
|reciprocal::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0283|0.0282|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0049|0.0049|1.0|
|reciprocal::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0194|0.0194|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0048|0.0048|1.0|
|reciprocal::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0195|0.0195|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0049|0.0049|1.0|
|reciprocal::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0193|0.0193|1.0|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0049|0.0049|0.99|
|reciprocal::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0226|0.0200|**`1.13`**|
|reciprocal::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0003|0.0003|1.0|
|reciprocal::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0049|0.0049|0.99|
|reciprocal::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0254|0.0200|**`1.27`**|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0004|*`0.62`*|
|right_shift::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0036|0.0060|*`0.6`*|
|right_shift::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0147|0.0242|*`0.61`*|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0037|0.0037|1.0|
|right_shift::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0149|0.0149|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0039|0.0039|1.0|
|right_shift::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0156|0.0156|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0043|0.0043|1.0|
|right_shift::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0172|0.0175|0.98|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0038|0.0039|0.97|
|right_shift::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0173|0.0181|0.96|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0003|0.0003|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0042|0.0042|1.0|
|right_shift::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0170|0.0170|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0003|0.0003|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0043|0.0043|1.0|
|right_shift::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0170|0.0170|1.0|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0004|*`0.63`*|
|right_shift::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0039|0.0061|*`0.64`*|
|right_shift::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0151|0.0242|*`0.62`*|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0003|0.0002|1.02|
|right_shift::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0043|0.0043|1.0|
|right_shift::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0186|0.0190|0.98|
|right_shift::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0003|0.0002|1.0|
|right_shift::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0043|0.0063|*`0.68`*|
|right_shift::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0173|0.0218|*`0.79`*|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|**`1.06`**|
|square::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0024|0.0023|1.04|
|square::16384&nbsp; &nbsp; B::2&nbsp; ->&nbsp; B::2|0.0097|0.0094|1.03|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0001|**`1.13`**|
|square::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0024|0.0021|**`1.14`**|
|square::16384&nbsp; &nbsp; H::2&nbsp; ->&nbsp; H::2|0.0097|0.0089|**`1.09`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.0|
|square::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0024|0.0024|1.0|
|square::16384&nbsp; &nbsp; I::2&nbsp; ->&nbsp; I::2|0.0097|0.0108|*`0.9`*|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0001|**`1.09`**|
|square::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0024|0.0024|1.02|
|square::16384&nbsp; &nbsp; L::2&nbsp; ->&nbsp; L::2|0.0097|0.0096|1.01|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0001|**`1.09`**|
|square::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0024|0.0024|1.02|
|square::16384&nbsp; &nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0098|0.0096|1.01|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|1.0|
|square::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0024|0.0024|1.0|
|square::16384&nbsp; &nbsp; b::2&nbsp; ->&nbsp; b::2|0.0097|0.0097|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.0|
|square::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0024|0.0024|1.0|
|square::16384&nbsp; &nbsp; h::2&nbsp; ->&nbsp; h::2|0.0097|0.0097|1.0|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0001|0.0002|*`0.9`*|
|square::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0023|0.0024|*`0.94`*|
|square::16384&nbsp; &nbsp; i::2&nbsp; ->&nbsp; i::2|0.0085|0.0097|*`0.88`*|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|1.0|
|square::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0024|0.0024|1.0|
|square::16384&nbsp; &nbsp; l::2&nbsp; ->&nbsp; l::2|0.0110|0.0097|**`1.12`**|
|square::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|1.01|
|square::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0024|0.0024|1.0|
|square::16384&nbsp; &nbsp; q::2&nbsp; ->&nbsp; q::2|0.0122|0.0098|**`1.25`**|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0002|0.0002|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0027|0.0027|1.0|
|subtract::16384&nbsp; &nbsp; B::2&nbsp; B::2&nbsp; ->&nbsp; B::2|0.0110|0.0110|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0002|0.0002|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0028|0.0028|1.0|
|subtract::16384&nbsp; &nbsp; H::2&nbsp; H::2&nbsp; ->&nbsp; H::2|0.0113|0.0113|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0002|0.0002|1.0|
|subtract::4096&nbsp; &nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0030|0.0030|0.99|
|subtract::16384&nbsp; &nbsp; I::2&nbsp; I::2&nbsp; ->&nbsp; I::2|0.0119|0.0120|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0002|0.0002|1.0|
|subtract::4096&nbsp; &nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0036|0.0036|1.0|
|subtract::16384&nbsp; &nbsp; L::2&nbsp; L::2&nbsp; ->&nbsp; L::2|0.0144|0.0148|0.98|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0002|0.0002|1.0|
|subtract::4096&nbsp; &nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0029|0.0029|1.0|
|subtract::16384&nbsp; &nbsp; Q::2&nbsp; Q::2&nbsp; ->&nbsp; Q::2|0.0145|0.0154|0.95|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0002|0.0002|0.99|
|subtract::4096&nbsp; &nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0027|0.0027|1.0|
|subtract::16384&nbsp; &nbsp; b::2&nbsp; b::2&nbsp; ->&nbsp; b::2|0.0111|0.0110|1.01|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0002|0.0002|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0027|0.0027|1.0|
|subtract::16384&nbsp; &nbsp; h::2&nbsp; h::2&nbsp; ->&nbsp; h::2|0.0113|0.0113|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0002|0.0002|1.01|
|subtract::4096&nbsp; &nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0030|0.0030|0.99|
|subtract::16384&nbsp; &nbsp; i::2&nbsp; i::2&nbsp; ->&nbsp; i::2|0.0115|0.0114|1.0|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0002|0.0002|0.98|
|subtract::4096&nbsp; &nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0036|0.0036|1.0|
|subtract::16384&nbsp; &nbsp; l::2&nbsp; l::2&nbsp; ->&nbsp; l::2|0.0158|0.0163|0.97|
|subtract::256&nbsp; &nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0002|0.0002|0.99|
|subtract::4096&nbsp; &nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0036|0.0056|*`0.64`*|
|subtract::16384&nbsp; &nbsp; q::2&nbsp; q::2&nbsp; ->&nbsp; q::2|0.0144|0.0191|*`0.76`*|