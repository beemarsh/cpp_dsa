
# 0-1 KnapSack

Given n items, each item has a certain value and weight. We have to maximize the
value of the objects we can accommodate in a bag of weight W.

## Approach

The weight and value array looks like the table below.

|          |  0   |  1   |  2   |
|----------|------|------|------|
|   wt     |  10  |  20  |  30  |
|  value   | 100  |  50  | 150  |

First of all we don't know whether adding an item to the sack will give us the maximum value. 

So, we have to consider two possibilities: 
- Include the item
- Not include the item.

**Solution:**

The function recursively calculates the maximum value that can be achieved by selecting items to fit into the bag.

Here's a step-by-step explanation of the code:

1. The base case of the recursion is checked. If there are no more items (`N==0`) or the bag's weight capacity is 0 (`W==0`), it means there are no items to select or the bag is full, so the function returns 0 (indicating no value can be achieved).

2. If the weight of the current item is greater than the remaining capacity of the bag (`wt[N-1] > W`), it means the current item cannot be included in the bag. In this case, the function calls itself recursively with the next item (`N-1`) and the same weight capacity (`W`) to explore other possibilities.

3. If the weight of the current item is within the remaining capacity of the bag, the function compares two scenarios:
   - Include the current item in the bag: The function calls itself recursively with the next item (`N-1`) and reduced capacity (`W-wt[N-1]`). It adds the value of the current item (`val[N-1]`) to the total value achieved.
   - Exclude the current item from the bag: The function calls itself recursively with the next item (`N-1`) and the same weight capacity (`W`).

The code essentially explores all possible combinations of items and calculates the maximum value that can be achieved within the given weight capacity using a recursive approach.

## Complexity

Time Complexity : O [ $2^{n}$ ]

Space Complexity : O [ $2^{n}$ ]

## Code

```cpp
#include<iostream>

int knapsack(int N, int W, int (&wt)[], int (&val)[]){
	if(N==0 || W==0) return 0;

	if(wt[N-1] > W) return knapsack(N-1,W,wt,val);

	return std::max(knapsack(N-1,W-wt[N-1], wt,val) + val[N-1] , knapsack(N-1,W,wt,val));
}

int main(){
	int wt[] = {10,20,30};
	int val[] = {100,50,150};

	std::cout << knapsack(3,50,wt,val);
	return 0;
}
```
