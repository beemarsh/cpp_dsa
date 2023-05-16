
# Friends Pairing Problem

There are n friends, we have to find all the pairings possible. Each person can be paired with only one person or does not pair with anyone.

## Approach

The friends pairing problem can be solved using a concept from combinatorics called "recurrence relation." 

Suppose we have 'n' friends. Now, let's consider the first friend and analyze the possible pairings:

1. The first friend can choose not to pair with anyone. In this case, we have solved the problem for 'n-1' friends.

2. The first friend can choose to pair with any of the remaining (n-1) friends. Once the first friend is paired with someone, we are left with 'n-2' friends to pair.

To calculate the total number of pairings for 'n' friends, we need to consider both cases and sum up the results:

1. When the first friend is not paired, the number of pairings is equal to the number of pairings for the remaining (n-1) friends. This can be represented as the recursive call pairing(n-1).

2. When the first friend is paired, we have (n-1) choices for selecting a partner, and the remaining (n-2) friends need to be paired. This can be represented as (n-1) * pairing(n-2).

Therefore, the total number of pairings for 'n' friends can be expressed using the following recurrence relation:

pairing(n) = pairing(n-1) + (n-1) * pairing(n-2)

The base cases of the recursion are:
- When 'n' is 0 or 1, there are no friends to pair, so the number of pairings is 0 or 1 respectively.
- When 'n' is 2, there are two friends, and they can be paired in only one way.

By using this recurrence relation and considering the base cases, we can recursively calculate the total number of possible pairings for 'n' friends.

The code provided in the previous example implements this recursive approach to solve the friends pairing problem.

## Complexity

Time Complexity : O [ n ]

Space Complexity : O [ n ]

## Code

```cpp
#include<iostream>

int pairing(int n){
	if(n==0 || n==1 || n==2) return n;
	return pairing(n-1) + pairing(n-2) * (n-1);
}

int main(){
	std::cout << pairing(4);
	return 0;
}
```
