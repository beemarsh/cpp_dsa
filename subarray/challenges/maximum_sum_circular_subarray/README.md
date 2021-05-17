# Maximum Sum Circular Sub array

## Problem

Find the maximum sum in the subarray.

Example:  

**[1, 2, -3, 5, 1]**

**Ans = 9**

## Input
	
7

1 -4 2 -5 3 -1 5

## Output
	
`` 8``

## Solution

- ### Kadanes Algorithm Approach

	The approach is to first find the total sum of the given array, and then find the maximum sum of a non-circular subarray using Kadane's algorithm on the negated array.

	To find the maximum sum of a circular subarray, we subtract the minimum possible subarray sum (i.e., negative of the maximum subarray sum of negated array) from the total sum. We do this because the maximum sum of a circular subarray is either a non-circular subarray or the sum of the remaining elements after excluding the minimum possible subarray sum from the total sum.

	In summary, the algorithm works as follows:

	1.  Find the total sum of the array.
	2.  Negate the elements of the array.
	3.  Find the maximum sum of a non-circular subarray using Kadane's algorithm on the negated array.
	4.  Add the total sum to the maximum sum obtained in step 3 to get the maximum circular subarray sum.
	5.  Return the maximum circular subarray sum.	
	
	**Time Complexity** : O [ n ]
	
## Diagram

```mermaid
graph LR
A[1] --- B[-4]
B --- C[2]
C --- D[-5]
D --- E[3]
E --- F[-1]
F --- G[5]
```

Calculate the total sum of the array and then multiply all the elements by -1.
The array now looks like this.
```mermaid
graph LR
A[-1] --- B[4]
B --- C[-2]
C --- D[5]
D --- E[-3]
E --- F[1]
F --- G[-5]    
```

Total Sum = (1 + -4 + 2 + -5 + 3 + -1 + 5) = 1

Now using Kadanes algorithm, get the maximum sum in the negated array. This is the sum of minimum possible sub array.

Minimum Sum = (4 + -2 + 5) = 7

So, Maximum Sum = Total Sum - -(Minimum Sum) = Total Sum + Minimum Sum = 1 + 7 = 8

## Flow Chart

```mermaid
graph TD;
    A[Start] --> B[Input n];
    B --> C[Input Array];
    C --> D[Initialize totalSum to 0];
    D --> E[Calculate totalSum];
    E --> F[Negate all elements of the array];
    F --> G[Find maximum sum using Kadane's algorithm];
    G --> H[Add totalSum to maximum sum];
    H --> I[Print maximum circular sum];
    I --> J[Stop];

```

## Code
