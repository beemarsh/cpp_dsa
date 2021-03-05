# Sub array with given Sum
### Google, Amazon, Facebook, Visa Interview Question

- ## Problem
	Given an unsorted array **A** of size **N** of non-negative integers, find a continuous subarray which adds to a given number **S**
	
- ## Input
	N = 5
	
	S = 12
	
	A[] = {1,2,3,7,5}
	
- ## Output
	
	The sum of elements from 2nd position to 4th position is 12
		
	`` 2 4 ``

- ## Constraints

	1 <= N <= $10^{5}$
	0 <= Ai <=  $10^{10}$
	
- ## Solution

	-	#### Optimised Approach

		We can solve the problem by looping over the array from **i=0** to **n-1**
		
		We need to keep track of the left pointer **lp** and right pointer **rp**
		
		Initially right pointer and left pointer point at first element.
		
		``int lp=0,rp=0``
		
		We also need to keep track of current sum
	
		``int currSum = 0;``

		We have to check whether the sum of current element and the current sum is greater than S.
		
		If it is greater, then we shift the left pointer by 1 index to the right and decrease the current sum.
		
		If it is less, then we shift the right pointer to the right by 1 index and increase the current sum
	
		else we break the loop because the it is equal to S.
		
		```
		if(a[i] + currSum > S){
			currSum-=a[lp];
			lp++;
		}
		else if(a[i] + currSum < S){
			currSum+=a[rp];
			rp++;
		}
		else break;
		```

		Overall time complexity: **O [ n ]**
