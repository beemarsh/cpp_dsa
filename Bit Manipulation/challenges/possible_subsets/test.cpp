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
