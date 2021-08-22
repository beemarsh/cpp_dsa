# 2D Matrix Search

## Problem

Given a n * m matrix.

Write an algorithm to find that the given value exists in the matrix or not.

**Integers in each row are sorted in ascending from left to right.**

**Integers in each column are sorted in ascending from top to bottom.**

**Example:**

Let us consider the following 2D array of size 5 * 5

|    |  0 |  1 |  2 |  3 |  4 |
|----|---:|---:|---:|---:|---:|
|  **0** |  1 |  4 |  7 | 11 | 15 |
|  **1** |  2 |  5 |  8 | 12 | 19 |
|  **2** |  3 |  6 |  9 | 16 | 22 |
|  **3** | 10 | 13 | 14 | 17 | 24 |
|  **4** | 18 | 21 | 23 | 26 | 30 |

Given target = 5, return true.

Given target = 20, return false.

## Constraints

1 <= N

M <= 1,000

## Input

5 5

5

1, 4, 7, 11, 15

2, 5, 8, 12, 19

3, 6, 9, 16, 22

10, 13, 14, 17, 24

18, 21, 23, 26, 30

## Output

`1 2`

## Solution

- ### Brute Force Approach

Search for a given element in a sorted 2D array by scanning each element of the array from left to right and top to bottom until the element is found or until the end of the array is reached.
