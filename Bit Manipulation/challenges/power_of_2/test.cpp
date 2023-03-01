#include<iostream>

int main(){
	
	int a;
	std::cin >> a;

	if(a & (a-1)) std::cout << "Not a power of 2";
	else std::cout << "Power of 2";
}
