
# Longest Arithmetic Sub array
### Google Kick Start Question

- ## Problem
	An arithmetic array is an array that contains at least two integers and the differences between consecutive 			integers are equal. For example, **[9, 10]**, **[3, 3, 3]**,	and **[9, 7, 5, 3]** are arithmetic arrays, while **[1, 3, 3, 7]**, **[2, 1, 2]**, 	and **[1, 2, 4]** are	not arithmetic arrays.
	
	Sarasvati has an array of N non-negative integers. The $i^{th}$ integer of the array is A~i~. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
**Please help her to determine the length of the longest contiguous arithmetic subarray.**

- ## Input
	The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The $i^{th}$ integer is A~i~

- ## Output
	For each test case, output one line containing **Case #x: y**, where **x** is the test case number (starting from 1) and **y** is the length of the longest contiguous arithmetic subarray.
	
- ## Constraints

	Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ A~i~ ≤ 109

	- ### Test Set 1
		2 ≤ N ≤ 2000
		
	- ### Test Set 2
		2 ≤ N ≤ 2 × $10^{5}$ for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 2000.

	**Time limit:** 20 seconds per test set

	**Memory limit:** 1GB

	1 ≤ **T** ≤ 100
	
	0 ≤ **A~i~** ≤ $10^{9}$
	
	#### Test set 1 :
	2 ≤ **N** ≤ 2000

	#### Test set 2 :
	2 ≤ **N** ≤ 2 × $10^{5}$ for at most 10 test cases.

- ## Solution

	- #### Constraints Analysis
		1 sec = $10^{8}$ operations
		
		20 sec = 2 x $10^{9}$ operations

	-	#### Optimised Approach

		We can solve the problem by looping over the array from **i=1** to **n-1**
		We need to keep track of the maximum length **maxlen** and the current length **len** for which the sub array is arithmetic
		
		We also need to keep track of the previous difference **diff**
		
		If the previous difference **diff** and the current difference **a[i] - a[i-1]** are equal, then we increase the current length **len**
		
		```
		if (a[i + 1] - a[i] == diff) {
	      len++;
	    } 
		```
		Else we change the current length to 2 
		```
		else{
			len=2
		}
		```
		Now we compare current length and maximum length to keep the highest value
		
		``maxlen = std::max(maxlen,len);``

		Overall time complexity: **O [ n ]**
		
	- #### Flow Chart

```mermaid
	graph TD
	A[Initialize variables] --> B[Loop through each index]
	B --> C[Check if there are at least 2 elements in the subarray]
    C -- Yes --> D[Calculate common difference]
    D --> E[Extend subarray as far as possible]
    E --> F[Update maximum length]
    F --> G[Continue loop]
    C -- No --> G[Continue loop]
    G --> H[Output maximum length]
```

-	## Code
```cpp
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int maxlen = 1;
  int diff = a[1] - a[0];
  int len = 1;

  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] == diff) {
      len++;
    } else {
      len = 2;
      diff = a[i] - a[i - 1];
    }

    maxlen = std::max(maxlen, len);
  }
  std::cout << maxlen;
}
```
