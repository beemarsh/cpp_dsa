#include<iostream>

bool isPossible(int** arr, int x, int y, int n){

	for(int i=0;i<x;i++){
		if(arr[i][y]) return false;
	}

	int yCount = y, xCount = x;
	while(xCount >=0 && yCount >=0){
		if(arr[xCount][yCount]) return false;
		yCount--;
		xCount--;
	}

	yCount = y, xCount=x;

	while(xCount >=0 && yCount < n){
		if(arr[xCount][yCount]) return false;
		xCount--;
		yCount++;
	}

	return true;
}

bool nQueen(int** a, int x, int n){
	if(x >= n) return true;	
	
	for(int y=0;y<n;y++){
		if(isPossible(a,x,y,n)){
			a[x][y] = 1;
			if(nQueen(a,x+1,n)) return true;
			a[x][y] = 0;
		}
	}
	return false;
}

int main(){
	int n;
	std::cin >> n;
	int **a = new int*[n];

	for(int i=0;i<n;i++)
		a[i] = new int[n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = 0;
		}
	}

	std::cout << std::endl;

	if(nQueen(a,0,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				std::cout << a[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

	return 0;
}
