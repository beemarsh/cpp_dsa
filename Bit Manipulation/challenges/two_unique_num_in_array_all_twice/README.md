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

We also know that XOR operation of any two same operands gives 0.

So, we calculate the XOR of all numbers. The numbers that appear twice became 0 by `^` operation and only the unique number remains.

So at last what remains is the XOR of 5 and 6 i.e `xorSum = 5^6` Its binary equivalent is `011`

But now we have to separate 5 and 6 from the xorSum above.

The binary equivalent of xorSum is `011`. The right most bit is `1` which means one operand has a set bit at $0^{th}$ position and another operand has unset bit at $0^{th}$ position.

So if we XOR all the elements that have set bit at $0^{th}$ position with xorSum, we can get our number which doesnt have set bit at $0^{th}$ position.

To get the number with set bit at $0^{th}$ position, we XOR the current xorSum with the previous xorSum.
