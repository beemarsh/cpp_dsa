# Maximum Sub Sub array

## Problem

Find the maximum sum in the subarray.

Example:  
**[1, -5, 3, 4, -2]**
**Ans = 7**

## Input
	
7

1 -4 2 -5 3 -1 5

## Output
	
		
`` 7``

## Solution

- ####  Brute Force Approach

	Initialize a variable `max_sum` to the smallest possible integer value.

	Next, loop through each element in the array, and for each element, calculate the sum of all contiguous subarrays that start with that element. To do this, we make a nested loop that starts at the current element and goes up to the end of the array, adding each element to the `sum` variable.

	Inside the nested loop, we also update the `max_sum` variable with the maximum value seen so far between the current `max_sum` and the new `sum`. This ensures that `max_sum` contains the largest sum seen so far in any subarray that starts with any element.

	After the nested loop completes for the current element, it moves to the next element and repeats the same process of finding the maximum sum of subarrays starting from that element.

	**Time Complexity** : O [ $n^{2}$ ]
