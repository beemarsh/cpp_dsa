# Basic Bit Manipulation Operations

- ### Get Bit:

We can easily get the value of an $i^{th}$ bit by using left-shift operator `<<` and `&` operator.

Let us consider a 8 bit integer: `00000101`. We have to find the $2^{nd}$ integer i.e `i=2`.

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] --- E[0] --- F[1] --- G[0] --- H[1]
```

Also, lets right shift `1` by `i` i.e. `1 << i`
