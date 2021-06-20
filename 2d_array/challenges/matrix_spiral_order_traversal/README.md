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

## Solution

respectively. These variables keep track of the indices of the current row and column being traversed.

2.  While `row_start` is less than or equal to `row_end` and `col_start` is less than or equal to `col_end`, do the following:

    -   Traverse the first row from `col_start` to `col_end` and print the values in that row.
    -   Increment `row_start` to move to the next row.
    -   Traverse the last column from `row_start` to `row_end` and print the values in that column.
    -   Decrement `col_end` to move to the previous column.
    -   Traverse the last row from `col_end` to `col_start` and print the values in that row.
    -   Decrement `row_end` to move to the previous row.
    -   Traverse the first column from `row_end` to `row_start` and print the values in that column.
    -   Increment `col_start` to move to the next column.
3.  The traversal of the array is complete when all the elements have been printed.

Overall, this algorithm traverses the array in a spiral order by starting at the top left corner and moving towards the center in a clockwise direction.
	
