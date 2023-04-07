# Find a unique number in an array where all numbers appear twice.

## Example:

Lets say we have an array `a[]` = `{1,2,1,2,5}`

Here `1` and `2` appear twice but `5` appears only once. So, we have to find `5`.

## Approach

The numbers appear `2` times i.e. odd number of times. So we can use `XOR` operator here.

Lets look at the binary equivalent of each number above.

|  Decimal  |  1  |  2  |  1  |  2  |  5  |
|------|-----|-----|-----|-----|-----|
| Binary| 0001| 0010| 0001| 0010| 0101|

We also know that XOR operation of any two same operands gives 0.

So, we calculate the XOR of all numbers. The numbers that appear twice became 0 by `^` operation and only the unique number remains.

## Code
