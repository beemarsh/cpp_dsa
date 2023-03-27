# Find a unique number in an array where all numbers appear thrice.

## Example:

Lets say we have an array `a[]` = `{1,2,1,2,5,1,2}`

Here `1` and `2` appear thrice but `5` appears only once. So, we have to find `5`.


## Approach

The numbers appear `3` times i.e. odd number of times. So we cannot use `XOR` operator here.

Lets look at the binary equivalent of each number above.

|  Decimal  |  1  |  2  |  1  |  2  |  5  |  1  |  2  |
|------|-----|-----|-----|-----|-----|-----|-----|
| Binary| 0001| 0010| 0001| 0010| 0101| 0001| 0010|

The $0^{th}$ bit of 1 is a setbit. So, there are three set bits.

But the number 5 also has a setbit on $0^{th}$ bit. 

Now, if we calculate the numer of set bits , then we have `4` setbits on $0^{th}$ bit and `3` clear bits on $0^{th}$ bit.

Since, `4` is not a muliple of 3, so the $0^{th}$ bit of our number is a set bit. 

In this way, we can loop through all the bits and find the number.
