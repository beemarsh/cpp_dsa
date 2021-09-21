# Matrix Multiplication

## Problem

Given two 2-Dimensional arrays of sizes n~1~ * m~1~ and n~2~ * m~2~. Your task is to multiply these matrices and output the multiplied matrix.

**Example:**

Let us consider the following two 2D array matrices a~1~ and a~2~ of size 3 * 4 and 4 * 3.

**a~1~:**

|    |  0 |  1 |  2 |  3 |
|----|---:|---:|---:|---:|
|  **0** |  2 |  4 |  1 | 2 |
|  **1** |  8 |  4 |  3 | 6 |
|  **2** |  1 |  7 |  9 | 5 |

**a~2~:**

|    |  0 |  1 |  2 |
|----|---:|---:|---:|
|  **0** |  1 |  2 |  3 |
|  **1** |  4 |  5 |  6 |
|  **2** |  7 |  8 |  9 |
|  **3** |  4 |  5 |  6 |

**Answer: a~1~ * a~2~ =**

|    | 0 |  1 |  2 |
|----|---:|---:|---:|
|  **0** |  33 |  42 |  51 |
|  **1** |  69 |  90 |  111 |
|  **2** |  112 |  134 |  156 |

## Constraints

1 <= n~1~

m~1~, n~2~ <= 1,000

## Input

```	
3 4
4 3
```
```
2 4 1 2
8 4 3 6
1 7 9 5
```
```
1 2 3
4 5 6
7 8 9
4 5 6
```

## Output
```
33 42 51
69 90 111
112 134 156
```

## Solution

**Note: If the number of columns of the first matrix is not equal to the number of rows of the second matrix, then matrix multiplication is not possible.**

The order of new matrix of a~1~ * a~2~ is  **n~1~ * m~2~**

Loop through each row of the first matrix and each column of the second matrix, calculating the dot product of the two corresponding rows and columns. The result is stored in the corresponding position of the new matrix. Finally, the new matrix is printed out.

In summary, the code performs the following steps:

1.  Get the dimensions of two matrices
2.  Check if matrix multiplication is possible
3.  Get the values of two matrices
4.  Multiply the two matrices and store the result in a new matrix
5.  Print the new matrix
	
	
	**Time Complexity** : O [ n~1~ * m~1~ * m~2~ ]
	
## Code
