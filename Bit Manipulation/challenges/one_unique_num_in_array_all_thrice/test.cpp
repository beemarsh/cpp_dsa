#include <iostream>

int main(){

	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}

	int result = 0;

	int SIZE = 32;

	for(int i=0;i<SIZE;i++){
		int ones=0,zeroes=0;
		for(int j=0;j<n;j++){
			if((1<<i) & a[j]) ones++;
			else zeroes++;
		}
		if(ones%3) result |= 1 << i;

	}

	std::cout << result;

}
