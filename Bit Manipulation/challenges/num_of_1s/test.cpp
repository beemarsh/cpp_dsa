#include <iostream>

int main(){
	
	int n;
	std::cin >> n;

	int count = 0;

	while(n){
		n = n & (n-1);
		count++;
	}

	std::cout << count;
	return 0;
}
