#include <iostream>

int main(){
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}

	int N = 1e6 + 2;
	int checkA[N];

	for(int i=0;i<n;i++){
		if(a[i] >=0) checkA[a[i]] = 1;
	}



}
