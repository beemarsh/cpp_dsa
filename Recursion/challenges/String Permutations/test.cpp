#include<iostream>

void perm(std::string str,std::string ans){
	if(str.length() == 0){
		std::cout << ans << std::endl;
		return;
	}

	for(int i=0;i<str.length();i++){
		char ch = str[i];
		std::string ros = str.substr(0,i) + str.substr(i+1);
		perm(ros,ans + ch);
	}
}

int main(){
	perm("ABC","");
	return 0;
}
