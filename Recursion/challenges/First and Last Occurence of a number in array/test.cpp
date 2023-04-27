#include<iostream>


int first(int a[], int n, int i, int key){
	if(i==n) return -1;
	if(a[i] == key) return i;
	return first(a,n,i+1,key);
}
	
int last(int a[],int n, int i, int key){
	if(i<0) return -1;
	if(a[i] == key) return i;
	return last(a,n,i-1,key);
}

int main(){
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0;i<n;i++){
		std::cin >> a[i];
	}
	int K;
	std::cin >> K;

	std::cout << first(a,n,0,K) << std::endl;
	std::cout << last(a,n,n-1,K);
	return 1;
}
