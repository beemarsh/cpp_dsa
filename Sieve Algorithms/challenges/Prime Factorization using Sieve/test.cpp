#include<iostream>
#include<cmath>
#include<cstring>

void getFactors(int n){
	int a[n+1];
	for(int i=2;i<=n;i++){
		a[i] = i;
	}

	for(int i=2;i<=n;i++){
		if(a[i]==i)
			for(int j=i*i;j<=n;j+=i) if(a[j] ==j) a[j] = i;
	}

	while(n!=1){
		std::cout << a[n] << " ";
		n = n / a[n];
	}
	
	return;
}

int main(){
	int n;
	std::cin >> n;

	getFactors(n);

	return 0;
}
