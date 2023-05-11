# Sieve of Eratosthenes

Sieve of Eratosthenes, is a popular and efficient method used to find all prime numbers up to a given limit. It is named after the ancient Greek mathematician Eratosthenes, who developed the algorithm.

## Approach

The algorithm starts with a list of numbers from 2 up to the given limit and considers the first unmarked number (which is a prime). It then marks all of its multiples as composite. The process is repeated until all numbers have been considered or marked.

## Steps

Here's a step-by-step explanation of the Sieve of Eratosthenes algorithm:

1.  Create a list of numbers from 2 up to the desired limit.
2.  Start with the first number (2) and mark it as prime.
3.  Iterate through the remaining unmarked numbers. 
	- If the current number is unmarked, it is a prime number. Mark it as prime. 
	- Mark all multiples of the current number as composite.
5.  Move to the next unmarked number and repeat step 3.
6.  Repeat step 4 until there are no more unmarked numbers.

At the end of the algorithm, the remaining unmarked numbers in the list will be all the prime numbers up to the given limit.

## Optimization - 1

To optimize the algorithm, we can loop until the square root of `n`. If a number `n` is composite, it can be factored into two factors, let's say `a` and `b`, such that `a * b = n`. At least one of these factors, `a` or `b`, must be less than or equal to the square root of `n`.

By iterating until `i*i<=n`, the code ensures that all the composite numbers in the range from 2 to `n` are marked as such, using the Sieve of Eratosthenes algorithm. This optimization significantly reduces the number of iterations and improves the efficiency of the algorithm.

## Optimization - 2

If we start the inner loop from `i`, we would be marking multiples of `i` that are smaller than `i*i` multiple times. These multiples would have already been marked as composite in previous iterations of the outer loop.

By starting the inner loop from `i*i`, we ensure that we skip marking these multiples that have already been processed. All the multiples of `i` smaller than `i*i` would have been covered by previous iterations of the outer loop.

Starting the inner loop from `i*i` reduces the number of unnecessary iterations and makes the algorithm more efficient.

To illustrate this, let's consider an example:

Suppose `i` is 5, and `n` is 30. If we start the inner loop from `i`, we would mark the multiples of 5 like this:

5 * 1 = 5 (marked) 5 * 2 = 10 (marked) 5 * 3 = 15 (marked) 5 * 4 = 20 (marked) 5 * 5 = 25 (marked)

Now, if we start the inner loop from `i*i` (which is 25 in this case), we would mark the multiples as follows:

5 * 5 = 25 (marked)

As you can see, starting from `i*i` avoids redundant iterations and ensures that each multiple of `i` is marked only once, improving the efficiency of the algorithm.

## Complexity

**Time Complexity** : O [ n log ( logn ) ]
**Space Complexity** : O [ n ]

## Code

```cpp
#include<iostream>

int main(){
	int n;
	std::cin >> n;

	int a[n + 1];
	for(int i=2;i<=n;i++){
		a[i] = i;
	}

	for(int i=2;i*i<=n;i++){
		if(!a[i]) continue;
		else {
			for(int j=(i*i); j<=n; j+=i){
				a[j] = 0;
			}
		}
	}

	for(int i=2;i<=n;i++){
		if(a[i]) std::cout << i << " ";
	}
	return 0;
}
```
