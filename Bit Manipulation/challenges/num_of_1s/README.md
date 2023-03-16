# Find numbers of Set Bits

## Example:

Lets say we have to find the number of 1s in `5`.

The binary equivalent of `5` is `101`.

So, the number of set bits is : `2`.

## Brian Kernighan’s Algorithm

Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
