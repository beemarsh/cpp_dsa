# Smallest Positive Missing Number
###  Amazon, Samsung, Snap Deal, Accolite Interview Question

## Problem

Find the smallest positive missing number in the given array.

Example:  
**[0, -10, 1, 3, -20]**
**Ans = 2**

## Input
	
6

0, -9, 1, 3, -4, 5

## Output
	
		
`` 2``

## Constraints

1 <= n <= $10^{6}$
	
0 <= A~i~ <=  $10^{6}$

## Solution

- ####  Approach

	First  we initialize a Boolean array `checkA` of size `1e6 + 2` with all elements set to false.
	
	Next, we loops through the elements in the input array `a` and marks the corresponding index in `checkA` as true if the element is non-negative.
	
	Finally, we loops through the `checkA` array and print out the index of the first false element, which represents the smallest positive integer that is not present in the input array.
	
## Flow Chart
```mermaid
	graph TD;
    A[Input size of array and its elements]
    B[Initialize boolean array checkA with false values]
    C[Loop through input array and mark corresponding index in checkA as true if element is non-negative]
    D["Loop through checkA and print out the index of the first false element (smallest positive integer not present in input array)"]
    A --> B
    B --> C
    C --> D
```
		
