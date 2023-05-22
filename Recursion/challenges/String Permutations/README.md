
# String Permutations

## Solution


The code provided implements a recursive function to print all permutations of a given string. Here's how the process works step by step:

1. The `permutation` function is called with the input string `str` and an empty string `ans` as the initial value.

2. If the length of the input string `str` is 0, it means that we have processed all the characters in the original string. In this case, the current permutation (`ans`) is printed.

3. Inside the function, a loop iterates over each character in the input string `str`.

4. For each iteration of the loop, a new string `ros` (remaining string) is created by excluding the current character at index `i` from `str`. This is done using `str.substr(0, i) + str.substr(i + 1)`.

5. The `permutation` function is called recursively with the remaining string `ros` and the current permutation `ans` appended with the current character (`ans + str[i]`).

6. This recursive call generates all possible permutations by fixing one character at a time and recursively permuting the remaining characters.

7. The recursive calls continue until the length of the remaining string (`ros`) becomes 0, at which point a single permutation has been completed.

8. As the recursive calls return, the function backtracks to the previous call and continues with the next iteration of the loop, generating other permutations.

9. The process continues until all possible permutations of the original string have been printed.

10. By following this recursive approach, the `permutation` function systematically generates and prints all permutations of the input string.

In summary, the recursive process explores all possible combinations of characters by fixing one character at a time and recursively permuting the remaining characters. This generates all possible permutations of the input string, which are printed as they are generated.

The code will output all possible permutations of the string "ABC": "ABC", "ACB", "BAC", "BCA", "CAB", and "CBA".


## Complexity

Time Complexity : $O [ n * n! ]$

Space Complexity : $O [ n ]$

## Code

```cpp
#include<iostream>

void permutation(std::string str,std::string ans = ""){
    
    if(str.length()==0){
        std::cout << ans << std::endl;
        return;
    }
    
    for(int i=0;i<str.length();i++){
        std::string ros = str.substr(0,i) + str.substr(i+1);
        permutation(ros,ans+ str[i]);
    }
}


int main(){
	permutation("ABC");
	return 0;
}
```
