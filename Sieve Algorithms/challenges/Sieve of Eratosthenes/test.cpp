#include<iostream>

int main(){
	int n;
	std::cin >> n;

	int a[n + 1];
	for(int i=2;i<=n;i++){
		a[i] = i;
	}

	for(int i=2;i*i<=n;i++){
		if(!a[i]) continue;
		else {
			for(int j=(i*i); j<=n; j+=i){
				a[j] = 0;
			}
		}
	}

	for(int i=2;i<=n;i++){
		if(a[i]) std::cout << i << " ";
	}
	return 0;
}
