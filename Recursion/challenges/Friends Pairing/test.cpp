#include<iostream>

int pairing(int n){
	if(n==0 || n==1 || n==2) return n;
	return pairing(n-1) + pairing(n-2) * (n-1);
}

int main(){
	std::cout << pairing(4);
	return 0;
}
