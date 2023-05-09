#include<iostream>

void combs(std::string str_1, std::string str_2,std::string ans){
	if(str_1.length() == 0) return;	
	if(str_2.length() == 0){
	std::cout << ans << std::endl;	
	}
	combs(str_1.substr(1),str_2,"");
	combs(str_1,str_2.substr(1), std::string() + str_1[0] + str_2[0]);
}

int main(){
	std::string arr[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	combs(arr[2],arr[9],"");
	return 0;
}
