
# N-Queen Problem


The N Queen is the problem of placing  **N**  chess queens on an  **N×N**  chessboard so that no two queens attack each other. 

For example, the following is a solution for the 4 Queen problem where **1** represents a queen.

|    | A0 | A1 | A2 | A3 |
|----|----|----|----|----|
| B0 |  0 | **1** |  0 |  0 |
| B1 |  0 |  0 |  0 | **1** |
| B2 | **1** |  0 |  0 |  0 |
| B3 |  0 |  0 | **1** |  0 |



## Approach

The basic idea behind the recursion is to place one queen at a time in each row, starting from the first row and moving to the next row. The goal is to find a valid arrangement of queens on the board. If we reach the last row and successfully place all the queens, we have found a solution. Otherwise, we backtrack and try a different position for the current queen in the current row.

The `isPossible` function is used to check whether it is possible to place a queen at a particular position (x, y) on the chessboard. It checks three conditions:
1. No queen should be present in the same column above the current row.
2. No queen should be present on the diagonal going from the current position (x, y) to the top-left corner.
3. No queen should be present on the diagonal going from the current position (x, y) to the top-right corner.

The `nQueen` function uses recursion to try different positions for each row and calls the `isPossible` function to check if the current position is valid. If it is valid, it marks that position as occupied by a queen and recursively moves on to the next row. If the recursive call is successful and leads to a valid arrangement of queens, it returns true. If not, it backtracks by marking the current position as unoccupied and tries a different position for the current row.

In the main function, the chessboard is initialized with all zeros. Then, the `nQueen` function is called to find a valid arrangement of queens. If a valid arrangement is found, it is printed on the console.

The backtracking technique is essential in this code as it allows us to explore different possibilities by undoing the choices made in the earlier steps and trying different options. It ensures that we systematically explore all possible configurations of queens on the chessboard to find a valid solution.


## Complexity

Time Complexity : $O [ n! ]$

Space Complexity : $O [ 2^n ]$

## Code

```cpp
#include<iostream>

bool isPossible(int** arr, int x, int y, int n){

	for(int i=0;i<x;i++){
		if(arr[i][y]) return false;
	}

	int yCount = y, xCount = x;
	while(xCount >=0 && yCount >=0){
		if(arr[xCount][yCount]) return false;
		yCount--;
		xCount--;
	}

	yCount = y, xCount=x;

	while(xCount >=0 && yCount < n){
		if(arr[xCount][yCount]) return false;
		xCount--;
		yCount++;
	}

	return true;
}

bool nQueen(int** a, int x, int n){
	if(x >= n) return true;	
	
	for(int y=0;y<n;y++){
		if(isPossible(a,x,y,n)){
			a[x][y] = 1;
			if(nQueen(a,x+1,n)) return true;
			a[x][y] = 0;
		}
	}
	return false;
}

int main(){
	int n;
	std::cin >> n;
	int **a = new int*[n];

	for(int i=0;i<n;i++)
		a[i] = new int[n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = 0;
		}
	}

	std::cout << std::endl;

	if(nQueen(a,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				std::cout << a[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	return 0;
}
```
