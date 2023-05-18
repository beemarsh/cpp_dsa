
# Paths in a maze

Given a 2D grid, find the number of ways to reach (n-1, n-1).

| Index | 0 | 1 | 2 | 3 | 4 |
|-------|-------|-------|-------|-------|-------|
| 0 |   0   |   0   |   0   |   0   |   0   |
| 1 |   0   |   0   |   0   |   0   |   0   |
| 2 |   0   |   0   |   0   |   0   |   0   |
| 3 |   0   |   0   |   0   |   0   |   0   |
| 4 |   0   |   0   |   0   |   0   |   0   |



## Approach

Consider the `countMaze` function with `n = 3` (a 3x3 grid) and the starting position (i, j) = (0, 0) (top-left corner).

1. The initial call is `countMaze(3, 0, 0)`.

2. The function first checks if the current position (i, j) is already at the bottom-right corner (n-1, n-1). Since (i, j) = (0, 0) is not equal to (2, 2), this condition is not satisfied.

3. Next, it checks if either the current row `i` or the current column `j` exceeds the size of the grid `n`. In this case, i and j are both 0, which is within the grid boundaries, so this condition is not satisfied either.

4. Now, the function makes two recursive calls:
   - `countMaze(3, 1, 0)`: This represents moving to the next row by incrementing `i` to 1 while keeping `j` the same.
   - `countMaze(3, 0, 1)`: This represents moving to the next column by incrementing `j` to 1 while keeping `i` the same.

5. Let's focus on the first recursive call, `countMaze(3, 1, 0)`. The function enters another recursive level with `i = 1` and `j = 0`.
   - Again, it checks the base cases. The current position (1, 0) is not the bottom-right corner, and it is within the grid boundaries, so the base cases are not satisfied.
   - It makes two more recursive calls:
     - `countMaze(3, 2, 0)`: Moving to the next row.
     - `countMaze(3, 1, 1)`: Moving to the next column.

6. The process continues in a similar manner for the other recursive calls, exploring different paths in the grid. Each recursive call will eventually reach the base cases, either by reaching the bottom-right corner or moving outside the grid boundaries.

7. As the recursion unfolds and reaches the base cases, the function starts returning the results back up the recursion stack. The return values from the recursive calls are summed up.

8. Finally, the initial call to `countMaze(3, 0, 0)` receives the computed results from all the recursive calls, and it returns the total number of ways to reach the bottom-right corner from the starting position (0, 0).

In this way, the recursion explores all possible paths in the grid, incrementally moving towards the bottom-right corner, and counts the number of ways to reach the destination.


## Complexity

Time Complexity : O [ $2^{n}$ ]

Space Complexity : O [ n ]

## Code

```cpp
#include<iostream>

int countMaze(int n, int i, int j){
	if(i == n-1 && j==n-1)	return 1;
	if(i >=n || j >= n) return 0;

	return countMaze(n,i+1,j) + countMaze(n,i,j+1);
}

int main(){
	std::cout << countMaze(3,0,0);
	return 1;
}
```
