#include<iostream>

bool isPossible(int** arr, int i, int j, int n){
	if(i<n && j<n && arr[i][j] == 1) return true;
	return false;
}

bool ratMaze(int** arr, int** solArr, int i, int j, int n){
	if(i==(n-1) && j==(n-1)){
		solArr[i][j] = 1;
		return true;
	}

	if(isPossible(arr,i,j,n)){
		solArr[i][j] = 1;
		if(ratMaze(arr,solArr,i+1,j,n))return true;
		if(ratMaze(arr,solArr,i,j+1,n)) return true;
		solArr[i][j] = 0; //BackTracking
		return false;
	}

	return false;
}

int main(){
	int n;
	std::cin >> n;

	int **arr = new int*[n], **solArr = new int*[n];
	
	for(int i=0;i<n;i++){
		arr[i] = new int[n];
		solArr[i] = new int[n];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			std::cin >> arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			solArr[i][j] = 0;
		}
	}

	std::cout << std::endl;

	if(ratMaze(arr,solArr,0,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				std::cout << solArr[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	return 0;
}

