
# Rat in a Maze

Given a maze(2D matrix) with obstacles, starting from (0,0) you have to reach (n-1, n-1). 

If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).

You can not move to the walls.

The following table represents the 5 *5 maze. 1 represents the blocked path and 0 represents free path.

|    | A0 | A1 | A2 | A3 | A4 |
|----|----|----|----|----|----|
| B0 |  0 |  **1** |  0 |  1 |  0 |
| B1 |  0 |  0 |  0 |  0 |  0 |
| B2 |  **1** |  0 |  **1** |  0 |  **1** |
| B3 |  0 |  **1** |  **1** |  0 |  0 |
| B4 |  0 |  0 |  0 |  **1** |  0 |


## Approach

The idea is to explore all possible paths from the current position to the destination using a depth-first search (DFS) strategy. At each cell, we have two choices: move down or move right.

We first check if the current position is the destination. If it is, we have found a valid path, so we mark that cell as part of the solution path and return true.

If the current position is not the destination, we check if it is a valid cell to move to. If it is, we mark that cell as part of the solution path and recursively call `ratMaze` for the next possible moves: moving down and moving right. We do this to explore all possible paths.

If either of the recursive calls to `ratMaze` returns true, it means that a path is found. In that case, we return true to indicate that a path exists from the current position to the destination.

If both recursive calls return false, it means that the current path does not lead to the destination. In this case, we backtrack by marking the current cell as not part of the solution path and return false.

By recursively exploring all possible paths, the `ratMaze` function will eventually find a valid path to the destination or determine that no path exists.


## Complexity

Time Complexity : $O [ 2^n ]$

Space Complexity : $O [ 2^n ]$

## Code

```cpp
#include<iostream>

bool isPossible(int** arr, int i, int j, int n){
	if(i<n && j<n && arr[i][j] == 1) return true;
	return false;
}

bool ratMaze(int** arr, int** solArr, int i, int j, int n){
	if(i==(n-1) && j==(n-1)){
		solArr[i][j] = 1;
		return true;
	}

	if(isPossible(arr,i,j,n)){
		solArr[i][j] = 1;
		if(ratMaze(arr,solArr,i+1,j,n))return true;
		if(ratMaze(arr,solArr,i,j+1,n)) return true;
		solArr[i][j] = 0; //BackTracking
		return false;
	}

	return false;
}

int main(){
	int n;
	std::cin >> n;

	int **arr = new int*[n], **solArr = new int*[n];
	
	for(int i=0;i<n;i++){
		arr[i] = new int[n];
		solArr[i] = new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			std::cin >> arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			solArr[i][j] = 0;
		}
	}

	std::cout << std::endl;

	if(ratMaze(arr,solArr,0,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				std::cout << solArr[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	return 0;
}	
```
