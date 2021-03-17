# First-repeating element
###  Amazon, Oracle Interview Question

- ## Problem
	Given an array **a[]** of size **n**. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.
	
- ## Input
	
	7

	1 5 3 4 3 5 6

- ## Output
	
	The sum of elements from 2nd position to 4th position is 12
		
	`` 1``

- ## Constraints

	1 <= n <= $10^{6}$
	
	0 <= Ai <=  $10^{6}$
	

	-	####  Approach

		To solve the first repeating element question using a check array, we need to iterate through the given array of size n and initialize a check array of size m with all elements set to -1. Then, we iterate through each element of the given array and check if the element is already present in the check array by accessing the index corresponding to the element value. If the value at that index is not equal to -1, then we have found the first repeating element, and we return that value. Otherwise, we set the value at that index to the current element value. If we finish iterating through the array and no repeating element is found, we return -1.

		The check array is used to keep track of which elements have already been seen while iterating through the given array. By initializing it with all values set to -1, we can easily check if an element has been seen before by checking if the value at the corresponding index is not equal to -1.
