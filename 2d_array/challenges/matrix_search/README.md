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

	**Time Complexity** : O [ n * m ]
	
		### Brute Force Code
		
	```cpp
#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int K;
  std::cin >> K;

  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == K) {
        std::cout << i << " " << j;
      }
    }
  }
}
```

- ### Optimized Approach

	Initialize the starting position at the top-right corner of the array, since this is the maximum value in the row and the minimum value in the column. 

	Then loop until the element is found or the column and row get out of index.
	
	- Check whether the current element is greater or lesser than the element to be searched. 
	- Based on this comparison, it either moves down to the next row (if the current element is lesser than the element to be searched) or moves to the previous column (if the current element is greater than the element to be searched).
	
	**Time Complexity** : O [ n + m ]
	
	### Flow chart:
	
	```mermaid
graph TD
A[Start] --> B[Input n, m, K]
B --> C["Input array a[n][m]"]
C --> D[Initialize r=0, c=m-1, found=false]
D --> E{r<n and c>=0}
E -- Yes --> F{"a[r][c] > K"}
E -- No --> G[Not Found]
F -- Yes --> H[Decrease c by 1]
F -- No --> I{"a[r][c] < K"}
I -- Yes --> J[Increase r by 1]
I -- No --> K[Set found=true and break]
H --> E
J --> E
K --> L[Output r and c]
G --> L
```

### Optimized Code

```cpp
#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int K;
  std::cin >> K;

  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }

  int r = 0, c = m - 1;
  bool found = false;

  while (r < n && c >= 0) {
    if (a[r][c] > K)
      c--;
    else if (a[r][c] < K)
      r++;
    else {
      found = true;
      break;
    }
  }

  if (found)
    std::cout << r << " " << c;
  else
    std::cout << "Not Found";
}
```
