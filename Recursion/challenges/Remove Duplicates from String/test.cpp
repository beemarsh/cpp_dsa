#include<iostream>

std::string rmDup(std::string str){
	if(str.length() == 0 ) return "";

	std::string ans = rmDup(str.substr(1));

	if(str[0] == ans[0]) return ans;

	return str[0] + ans;
}

int main(){
	std::cout << rmDup("abbbbcccdddeffffbhjjjj");
	return 0;
}
