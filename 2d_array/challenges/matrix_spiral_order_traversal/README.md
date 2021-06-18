# Matrix Spiral Order Traversal

## Problem

We have to print the given 2D matrix in the spiral order. Spiral Order means that firstly, first row is printed, then last column is printed, then last row is printed and then first column is printed, then we will come inwards in the similar way.

|  1 |  5 |  7 |  9 | 10 |

Example:  

Let us consider the following 2D array of size 6 * 5

|  0   |  1 |  2 |  3 |  4 |  5 |
|-----|----|----|----|----|----|
|   **1** |  1 |  2 |  3 |  4 |  5 |
|   **2** |  6 |  7 |  8 |  9 | 10 |
|   **3** | 11 | 12 | 13 | 14 | 15 |
|   **4** | 16 | 17 | 18 | 19 | 20 |
|   **5** | 21 | 22 | 23 | 24 | 25 |
|   **6** | 26 | 27 | 28 | 29 | 30 |


The spiral order traversal would be:

**1  2  3  4  5  10 15 20 25 30  29 28 27 26 21  16 11 6  7  8  9  14 19 24 23 22  17 12 13 18**

## Input

6 5

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
26 27 28 29 30

## Output

	
``1  2  3  4  5  10 15 20 25 30  29 28 27 26 21  16 11 6  7  8  9  14 19 24 23 22  17 12 13 18``
