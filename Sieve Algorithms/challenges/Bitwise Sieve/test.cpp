#include<iostream>
#include<cstring>
int main(){
	int n;
	std::cin >> n;

	bool a[n/2];
	memset(a,false,sizeof(a));
	
	for(int i=3;i*i <= n ; i+=2){
		if(!a[i/2]){
			for(int j=i*i;j<n;j+=i*2){
				a[j/2] = true;
			}
		}
	}

	std::cout << 2 << " ";

	for(int i=3;i<n;i+=2){
		if(!a[i/2]) std::cout << i << " ";
	}

	return 0;

}
