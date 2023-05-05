#include<iostream>

int countMaze(int n, int i, int j){
	if(i == n-1 && j==n-1)	return 1;
	if(i >=n || j >= n) return 0;

	return countMaze(n,i+1,j) + countMaze(n,i,j+1);
}

int main(){
	std::cout << countMaze(3,0,0);
	return 1;
}
