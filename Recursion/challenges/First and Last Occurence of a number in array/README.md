
# First and Last Occurrence of a number in an array



## Approach

Imagine you have an array of numbers in front of you, and you want to find the position of the first and last occurrence of a specific number within that array.

To find the first occurrence of the number, you start by looking at the first number in the array. If it matches the number you are searching for, you remember its position. If it doesn't match, you move on to the next number in the array and repeat the same process. You keep doing this until you either find a match or reach the end of the array.

If you find a match, you note down the position and stop searching further. However, if you reach the end of the array without finding a match, it means the number is not present in the array.

To find the last occurrence of the number, you start from the end of the array and work your way backward. You look at the last number in the array and check if it matches the number you are searching for. If it does, you remember its position. If it doesn't match, you move to the previous number and repeat the process. You continue this until you find a match or reach the beginning of the array.

When you find a match, you note down the position and stop searching. If you reach the beginning of the array without finding a match, it means the number is not present.

Now, to accomplish this using recursion, you can define two recursive functions: one to find the first occurrence and another to find the last occurrence.

The function to find the first occurrence takes the array, the current index, and the number to search as parameters. It performs the following steps:
1. If the current index is equal to the length of the array, return -1 to indicate that the number is not found.
2. If the number at the current index matches the number to search, return the current index.
3. If there is no match, recursively call the same function with the next index to continue the search.

The function to find the last occurrence takes the array, the current index, and the number to search as parameters. It performs the following steps:
1. If the current index is less than 0, return -1 to indicate that the number is not found.
2. If the number at the current index matches the number to search, return the current index.
3. If there is no match, recursively call the same function with the previous index to continue the search.

By using these recursive functions, you can find the positions of the first and last occurrences of the number in the array.

## Complexity

Time Complexity : O [ n ]

Space Complexity : O [ n ]

## Code

```cpp
#include<iostream>


int first(int a[], int n, int i, int key){
	if(i==n) return -1;
	if(a[i] == key) return i;
	return first(a,n,i+1,key);
}
	
int last(int a[],int n, int i, int key){
	if(i<0) return -1;
	if(a[i] == key) return i;
	return last(a,n,i-1,key);
}

int main(){
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}
	int K;
	std::cin >> K;

	std::cout << first(a,n,0,K) << std::endl;
	std::cout << last(a,n,n-1,K);
	return 1;
}
```
