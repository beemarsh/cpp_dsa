
# Remove Duplicates from a String

## Solution

1. The `rmDup` function is called with the input string `str`.

2. If the length of `str` is 0, it means there are no characters left to process. In this case, an empty string is returned as the base case of the recursion.

3. If the length of `str` is not 0, the function makes a recursive call to `rmDup` with `str.substr(1)`. This recursive call processes the remaining portion of the string, excluding the first character.

4. The result of the recursive call is stored in the `ans` variable.

5. The function compares the first character of the original string `str[0]` with the first character of the result `ans[0]` obtained from the recursive call.

6. If they are equal, it means the first character is a duplicate. In this case, the function returns `ans` as it is, effectively removing the duplicate character.

7. If they are not equal, it means the first character is unique. In this case, the function concatenates `str[0]` with `ans` and returns the concatenated string. This effectively preserves the unique character.

8. The recursion continues until all characters in the string have been processed.

9. As the recursion unfolds, each recursive call processes a smaller substring, excluding the first character. By recursively processing smaller substrings, the function gradually eliminates duplicates from the original string.

10. Eventually, the recursion reaches the base case when the length of `str` becomes 0, indicating that there are no more characters left to process. At this point, an empty string is returned.

11. As the recursion backtracks, returning from each recursive call to the previous call, the function builds the final string by concatenating the processed characters and preserving unique characters.

12. By following this recursive approach, the `rmDup` function effectively removes duplicates from the input string, ensuring that each character appears only once in the resulting string.

In summary, the recursion in the given code processes the string character by character, comparing each character with the result obtained from the recursive call on the remaining substring. This recursive process eliminates duplicates and constructs the final string with unique characters.


## Complexity

Time Complexity : $O [ n ]$

Space Complexity : $O [ n ]$

## Code

```cpp
#include<iostream>

std::string rmDup(std::string str){
	if(str.length() == 0 ) return "";

	std::string ans = rmDup(str.substr(1));

	if(str[0] == ans[0]) return ans;

	return str[0] + ans;
}

int main(){
	std::cout << rmDup("abbbbcccdddeffffbhjjjj");
	return 0;
}
```
