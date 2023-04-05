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
