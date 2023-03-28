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

## Steps:

- We dont know the number of bits in our number. Lets say we have a 32 bit number. So we have to loop `i` from `0` to `31`through each bit. We also have to loop `j` from `0` to `n-1` through each number in the array as well. We also have to keep track of `result`, `zeroes` and `ones`.
- To check whether the bit is set or not, we can use left shift operator on 1 by `i` and perform `&` operation with the current element in the array. i.e `a[j] & (1 << i)`.
	- If the bit is set, we increase `ones` by 1.
	- If the bit is not set, we increase `zeroes` by 1.
- After each loop, if the number of `ones` is a multiple of 3, then we update the result by setting the $i^{th}$ bit. i.e.`result |= (1 << i)`.
