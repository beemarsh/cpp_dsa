# Matrix Transpose

## Problem

Given a square matrix A & its number of rows (or columns) N, return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal,switching the row and column indices of the matrix.

Example:  

Let us consider the following 2D array of size 6 * 5

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
