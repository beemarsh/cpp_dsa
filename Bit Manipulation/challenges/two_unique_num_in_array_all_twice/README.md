# Find two unique numbers where all the numbers appear twice

## Example:

Lets say we have an array `a[]` = `{1,2,5,1,2,6}`

Here `1` and `2` appear twice but `5` and `6` appears only once. So, we have to find `5` and `6`.

## Approach

The numbers appear `2` times i.e. odd number of times. So we can use `XOR` operator here.

Lets look at the binary equivalent of each number above.

|  Decimal  |  1  |  2  |  5  |  1  |  2  |  6  |
|------|-----|-----|-----|-----|-----|-----|
| Binary| 0001| 0010| 0001| 0010| 0101| 0110
