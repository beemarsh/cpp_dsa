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
		xorSum ^= a[i];
	}

	int temp = xorSum;
	int pos=0;
	while(!(xorSum & (1 << pos))){
		pos++;
	}

	for(int i=0;i<n;i++){
		if(a[i] & (1 << pos)) xorSum ^= a[i];
	}

	std::cout << xorSum <<std::endl;
	xorSum^=temp;
	std::cout << xorSum <<std::endl;

	return 0;
}
