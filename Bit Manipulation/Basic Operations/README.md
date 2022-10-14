# Basic Bit Manipulation Operations

- ### Get Bit:

We can easily get the value of an $i^{th}$ bit by using left-shift operator `<<` and `&` operator.

Let us consider a 8 bit integer: `00000101`. We have to find the $2^{nd}$ integer i.e `i=2`.

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] --- E[0] --- F[1] --- G[0] --- H[1]
```

Also, lets right shift `1` by `i` i.e. `1 << i`

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] --- E[0] --- F[1] --- G[0] --- H[0]
```

Now lets perform `&` operation on above set of bits, we get: `00000101` & `00000100` = `00000100`

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] --- E[0] --- F[1] --- G[0] --- H[0]
```

The above set of bits is not `0`. So, the $2^{nd}$ bit is `1`.

```cpp
#include<iostream>

int main(){
	int a = 0b101;
	int i = 2;
	int output = a & (1 << i);

	if(output!=0) std::cout << 1;
	else std::cout << 0;
}
```

Output:

```cpp
1
```
