# Check if a number is power of 2

A number is power of 2 only if the left most bit is high and all the bits are low.

| Number | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|--------|---|---|---|---|---|---|---|---|
| Binary | 10000000 | 01000000 | 00100000 | 00010000 | 00001000 | 00000100 | 00000010 | 00000000|
| Power  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |


## How to get n-1 using bit manipulation ?

We can get `n-1` by clearing the right most set bit and setting all the bits right of it.

Lets say `a = 8`. We have to get `a-1` i.e `7`.

The binary equivalent of `8` is : `00001000`

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] -- Right Most Set Bit --> E[1] --- F[0] --- G[0] --- H[0]
```

Now, we unset the right most set bit and set all the other bits.

```mermaid
graph LR
    A[0] --- B[0] --- C[0] --- D[0] -- Unset --> E[0] --- F[1] --- G[1] --- H[1]
```

Now, we get `0111`. Its decimal equivalent is: `7`.

## Checking

To check if a number is power of two, we perform AND operation on `a` and `a-1`

| a | a - 1 | a & a-1 |
|-----------|-----------|-------------|
|     1000  |     0111  |     0000    |
 
 Since, `a` and `a-1` id 0. So the number is a power of `2`.
