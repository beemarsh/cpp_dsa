#include<iostream>

int knapsack(int N, int W, int (&wt)[], int (&val)[]){
	if(N==0 || W==0) return 0;

	if(wt[N-1] > W) return knapsack(N-1,W,wt,val);

	return std::max(knapsack(N-1,W-wt[N-1], wt,val) + val[N-1] , knapsack(N-1,W,wt,val));
}

int main(){
	int wt[] = {10,20,30};
	int val[] = {100,50,150};

	std::cout << knapsack(3,50,wt,val);
	return 0;
}
