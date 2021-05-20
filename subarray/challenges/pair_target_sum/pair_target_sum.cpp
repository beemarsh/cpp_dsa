#include <iostream>

int main(){
	int n;
	std::cin >> n;

	int K;
	std::cin >> K;

	int a[n];
	for(int i=0;i < n;i++){
		std::cin >> a[i];
	}

	int lp=0,rp=n-1;

	while(lp < rp){
		if(a[lp] + a[rp] < K) lp++;
		else if(a[lp] + a[rp] > K) rp--;
		else break;
	}

	std::cout << lp << " " << rp;
	
}
