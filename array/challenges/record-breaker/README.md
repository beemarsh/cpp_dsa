
# Record Breaker
### Google Kick Start Question

- ## Problem
	Isyana is given the number of visitors at her local theme park on **N** consecutive days. The number of visitors on the $i^{th}$ day is V~i~. A day is record breaking if it satisfies both of the following conditions:
	- The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
	- Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

	Note that the very first day could be a record breaking day!

**Please help Isyana find out the number of record breaking days.**

- ## Input
	The first line of the input gives the number of test cases, **T**. **T** test cases follow.
	Each test case begins with a line containing the integer **N**. The second line contains N integers. The $i^{th}$ integer is V~i~

- ## Output
	For each test case, output one line containing **Case #x: y**, where **x** is the test case number (starting from 1) and **y** is the number of record breaking days.

- ## Constraints
	**Time limit:** 20 seconds per test set

	**Memory limit:** 1GB

	1 ≤ **T** ≤ 100:
	0 ≤ **V~i~** ≤ 2 × 105
	
	#### Test set 1 :
	1 ≤ **N** ≤ 1000

	#### Test set 2 :
	1 ≤ **N** ≤ 2 × $10^{5}$ for at most 10 test cases.

- ## Solution

	- #### Constraints Analysis
		1 sec = $10^{8}$ operations
		
		20 sec = 2x$10^{8}$ operations

	-	#### Brute Force Approach

		Iterate over all the elements and check if it is record breaking day or not.
		Note: To check if **a[i]** is a record breaking day, we have to iterate over **a[0]**, **a[1]**,...., **a[i-1]**.

		Time complexity for this operation: **O(n)**

		Overall Time Complexity: **O($n^{2}$)**

	-	#### Optimised Approach

		We can optimize the solution by keeping track of the maximum element. i.e we dont need to loop over everytime to compare with each day. We just compare it with the largest one.

		For this, we will keep a variable **max**, which will store the maximum value till **a[i]**.

		Then we just need to check,

		``a[i] > max && a[i] > a[i+1]``

		and update **mx**

		`` mx = max(mx, a[i])``

		Overall time complexity: **O(n)**

-	## Code
```
#include <iostream>

int main()
{

  int n;
  std::cin >> n;

  int a[n + 1];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  a[n] = -1;
  int max = -1;
  int rb_days = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > max && a[i] > a[i + 1]) {
      rb_days++;
    }
    max = std::max(max, a[i]);
  }

  std::cout << rb_days;
}
```
