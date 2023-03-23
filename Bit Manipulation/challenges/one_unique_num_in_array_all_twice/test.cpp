#include<iostream>

int main(){
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}

	int xorSum = 0;

	for(int i=0;i<n;i++){
		xorSum = xorSum ^ a[i];
	}

	std::cout <<xorSum;
	
	return 0;
}
