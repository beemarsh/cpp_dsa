
# Matrix Transpose

## Problem

Given a square matrix A & its number of rows (or columns) N, return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal,switching the row and column indices of the matrix.

Example:  

Let us consider the following 2D array of size 5 * 5

|     |  0 |  1 |  2 |  3 |  4 |
|-----|----|----|----|----|----|
|   **0** |  1 |  2 |  3 |  4 |  5 |
|   **1** |  6 |  7 |  8 |  9 | 10 |
|   **2** | 11 | 12 | 13 | 14 | 15 |
|   **3** | 16 | 17 | 18 | 19 | 20 |
|   **4** | 21 | 22 | 23 | 24 | 25 |


The transpose of the matrix would be:

|    |  0 |  1 |  2 |  3 |  4 |
|----|----|----|----|----|----|
| **0** |  1 |  6 | 11 | 16 | 21 |
| **1** |  2 |  7 | 12 | 17 | 22 |
| **2** |  3 |  8 | 13 | 18 | 23 |
| **3** |  4 |  9 | 14 | 19 | 24 |
| **4** |  5 | 10 | 15 | 20 | 25 |


## Input
	
5

1 2 3 4 5

6 7 8 9 10

11 12 13 14 15

16 17 18 19 20

21 22 23 24 25


## Output
	
```
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
```


## Solution

We use two nested loops to iterate over the upper-right triangular portion of the matrix (including the diagonal). For each pair of elements `a[i][j]` and `a[j][i]` in this portion, we swap their values. This has the effect of reflecting the matrix along its diagonal, effectively transposing the matrix.

Overall, this algorithm traverses the array in a spiral order by starting at the top left corner and moving towards the center in a clockwise direction.
	
**Time Complexity** : O [ $n^{2}$ ]

	
## Flow Chart
```mermaid
graph TD
A[Start] --> B[Input the size of matrix n]
B --> C[Initialize a 2D array with size n * n]
C --> D[Input elements of the array]
D --> E[Transpose the matrix]
E --> F[Output the transposed matrix]
F --> G[Stop]

subgraph Transpose the matrix
  E --> H[Loop through the rows of the matrix]
  H --> I[Loop through the columns of the matrix]
  I --> J["Swap the elements of a[i][j] with a[j][i]"]
end

```

## Code
```cpp
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int temp = a[i][j];
      a[i][j] = a[j][i];
      a[j][i] = temp;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
```
