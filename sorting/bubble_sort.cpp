#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}
	
	int counter = n-1;

	while(counter > 0){
		for(int i=0;i<counter;i++){
			if(a[i] > a[i+1]) {
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				}
		}
		counter--;
	}

	for(int i=0;i<n;i++){
		std::cout << a[i] << " ";
	}
	return 1;
}
