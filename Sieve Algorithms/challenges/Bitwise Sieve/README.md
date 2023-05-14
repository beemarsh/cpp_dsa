# Bitwise Sieve

We can optimize Sieve of Eratosthenes by skipping all even numbers altogether. We reduce the size of the prime array to half. We also reduce all iterations to half.

```cpp
#include<iostream>
#include<cstring>
int main(){
	int n;
	std::cin >> n;

	bool a[n/2];
	memset(a,false,sizeof(a));
	
	for(int i=3;i*i <= n ; i+=2){
		if(!a[i/2]){
			for(int j=i*i;j<n;j+=i*2){
				a[j/2] = true;
			}
		}
	}

	std::cout << 2 << " ";

	for(int i=3;i<n;i+=2){
		if(!a[i/2]) std::cout << i << " ";
	}
	return 0;
}
```

**Time Complexity: O(nlogn)**


## Further optimization using bitwise operators.

The above implementation uses bool data type which takes 1 byte. We can optimize space to n/8 by using individual bits of an integer to represent individual primes. We create an integer array of size n/64. Note that the size of the array is reduced to n/64 from n/2 (Assuming that integers take 32 bits).


### Coming Soon ...
