#include<iostream>

void hanoi(int N, int start, int end){
	if(N==1){
		std::cout << "Moved from "<<start<<" to "<<end<<std::endl;
		return;
	}

	int mid = 6 - (start + end);
	hanoi(N-1,start,mid);
	std::cout << "Moved from " << start << " to " << end << std::endl;
	hanoi(N-1,mid,end);
}

int main(){	
	hanoi(3,1,3);
	return 0;
}
	
