#include <iostream>

int main(){
	//Question : In an array arr of size n, find the index of k.
	//Take array input and find k.

	int n;
	std::cin >> n;

	int k;
	std::cin >> k;

	int arr[n];
	for(int i=0;i<n;i++){
		std::cin >> arr[i];
	}

	//Now perform a binary search

	int lp=0, rp = n-1;
	int mid;
	mid = (lp + rp) / 2;

	while(arr[mid]!=k){
		mid = (lp + rp) / 2;
		if(arr[mid] > k) rp = mid - 1;
		else if(arr[mid] < k) lp = mid + 1;

	}

	std::cout << mid;
	return 1;
}
