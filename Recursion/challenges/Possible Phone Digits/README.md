
# Possible Words in a phone digit

## Solution


1. The `combs` function is called with the remaining digits in `str` and the accumulated combination in `ans`.

2. If `str` is empty (length 0), it means all the digits have been processed, and the current accumulated combination `ans` represents a valid combination of characters. In this case, the function prints `ans` as a possible combination and returns.

3. If `str` is not empty, the function retrieves the characters corresponding to the first digit in `str` from the `keypad` array. For example, if `str[0]` is `'2'`, `first` will be `"abc"`.

4. The function enters a loop that iterates over each character in `first`. This loop allows us to consider each possible character for the current digit.

5. Within the loop, the function makes a recursive call to `combs` with two arguments:
   - `str.substr(1)` represents the remaining digits after excluding the first digit. This allows us to process the next digit in the next recursive call.
   - `ans + first[i]` represents the accumulated combination so far, with the current character `first[i]` appended. This allows us to explore all possible combinations by considering each character for the current digit.

6. The recursion continues until all digits in `str` have been processed. In each recursive call, the function processes the next digit, retrieves the corresponding characters from the `keypad` array, and appends each character to the accumulated combination.

7. As the recursion unfolds, each recursive call explores different possibilities, forming different combinations of characters by considering all the characters corresponding to each digit.

8. Eventually, the recursion reaches the base case when `str` becomes empty. At this point, the function prints the accumulated combinations, one at a time, as valid combinations of characters.

9. The recursion backtracks, returning from each recursive call to the previous call, allowing the function to explore other possibilities and combinations.

10. By following this recursive approach, the `combs` function generates and prints all possible combinations of characters for the given phone digit, using the characters from the `keypad` array.

In summary, the recursion in the given code explores all possible combinations by considering each digit and its corresponding characters. It uses recursive calls to process each digit, explore different possibilities, and accumulate the combinations of characters. The recursion continues until all digits have been processed, and the function prints the valid combinations as the base case is reached.


## Complexity

Time Complexity : O [ $4^{n}$ ]

Space Complexity : O [ n ]

## Code

```cpp
#include<iostream>

static const std::string keypad[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void combs(std::string str , std::string ans){
    
    if(str.length()==0){
        std::cout << ans << std::endl;
        return;
    }
    
    std::string first = keypad[str[0] - '0'];
    
    for(int i=0;i<first.length();i++){
        combs(str.substr(1),ans + first[i]);
    }
    
}

int main(){
	combs("29","");
	return 0;
}

```
