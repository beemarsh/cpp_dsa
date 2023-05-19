
# Paths in a Dice

Find the number of ways to reach e from s.

## Approach

Consider the `countPath` function with the initial position `s = 0` and the target position `e = 3`.

1. The initial call is `countPath(0, 3)`.

2. The function first checks if the current position `s` is equal to the target position `e`. Since `s = 0` is not equal to `e = 3`, this condition is not satisfied.

3. Next, it checks if the current position `s` is greater than the target position `e`. In this case, `s = 0` is not greater than `e = 3`, so this condition is not satisfied either.

4. Now, the function initializes a variable `count` to keep track of the number of paths.

5. It enters a loop from 1 to 6, representing the possible outcomes of rolling a six-sided dice.

6. For each outcome `i`, it makes a recursive call to `countPath(s + i, e)`.
   - For the first iteration, it calls `countPath(0 + 1, 3)`.
   - For the second iteration, it calls `countPath(0 + 2, 3)`.
   - And so on, until the sixth iteration with `countPath(0 + 6, 3)`.

7. Let's focus on the first recursive call, `countPath(1, 3)`. The function enters another recursive level with `s = 1` and `e = 3`.
   - It checks the base cases. The current position `s = 1` is neither equal to nor greater than the target position `e = 3`, so the base cases are not satisfied.
   - It enters the loop from 1 to 6 again, making more recursive calls for each outcome.

8. The process continues in a similar manner for the other recursive calls, exploring different paths by rolling the dice and moving forward.
   - Each recursive call will eventually reach the base cases or exceed the target position, leading to the termination of further recursive calls.

9. As the recursion unfolds and reaches the base cases, the function starts returning the results back up the recursion stack.

10. The returned values from the recursive calls are accumulated in the `count` variable at each level of recursion.

11. Finally, the initial call to `countPath(0, 3)` receives the computed results from all the recursive calls and returns the final value of `count`, which represents the total number of paths to reach the target position from the initial position.

In this way, the recursion explores all possible paths by rolling the dice and moving forward, and counts the number of paths that lead to the target position.


## Complexity

Time Complexity : O [ $6^{n}$ ]

Space Complexity : O [ n ]

## Code

```cpp
#include<iostream>

int countPath(int s,int e){
	if(s == e){
		return 1;
	}
	if(s>e) return 0;

	int count = 0;

	for(int i=1;i<=6;i++){		
		count += countPath(s+i,e);
	}

	return count;
}

int main(){
	std::cout << countPath(0,3);
	return 0;
}
```
