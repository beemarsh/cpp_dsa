# Possible Sub Sets

## Example:

Lets say we have an array `a[]` = `{1,2,3}`

The possible subsets of `a` are:
- {}
- {1}
- {2}
- {3}
- {1,2}
- {2,3}
- {1,3}
- {1,2,3}

## Approach

The total number of possible subsets are $2^{n}$ where n is the number of elements in the array.

Lets say each element in the array is represented by a single bit. Each digit in the binary equivalent corresponds to an element in the set, with a value of 1 indicating the presence of that element in the subset and 0 indicating its absence.

| Subset   | Binary Equivalent |
|----------|------------------|
| {}       | 000              |
| {1}      | 001              |
| {2}      | 010              |
| {3}      | 100              |
| {1,2}    | 011              |
| {2,3}    | 110              |
| {1,3}    | 101              |
| {1,2,3}  | 111              |

Then we check through each single bit, whether it is set or not. We can do so by using left shift operator `<<` and `&` operator.

## Code

```cpp
#include<iostream>

int main(){
	
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}

	for(int i=0; i< (1 << n); i++){
		for(int j=0;j<n;j++){
			if((1 << j) & i) std::cout << a[j] << " ";
		}
		std::cout <<std::endl;
	}
}
```

# Possible Sub Sets

## Example:

Lets say we have an array `a[]` = `{1,2,3}`

The possible subsets of `a` are:
- {}
- {1}
- {2}
- {3}
- {1,2}
- {2,3}
- {1,3}
- {1,2,3}

## Approach

The total number of possible subsets are $2^{n}$ where n is the number of elements in the array.

Lets say each element in the array is represented by a single bit. Each digit in the binary equivalent corresponds to an element in the set, with a value of 1 indicating the presence of that element in the subset and 0 indicating its absence.

| Subset   | Binary Equivalent |
|----------|------------------|
| {}       | 000              |
| {1}      | 001              |
| {2}      | 010              |
| {3}      | 100              |
| {1,2}    | 011              |
| {2,3}    | 110              |
| {1,3}    | 101              |
| {1,2,3}  | 111              |

Then we check through each single bit, whether it is set or not. We can do so by using left shift operator `<<` and `&` operator.


## Code

```cpp
#include<iostream>

int main(){
	
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}

	for(int i=0; i< (1 << n); i++){
		for(int j=0;j<n;j++){
			if((1 << j) & i) std::cout << a[j] << " ";
		}
		std::cout <<std::endl;
	}
}
```
