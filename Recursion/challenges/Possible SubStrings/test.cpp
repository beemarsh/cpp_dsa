#include<iostream>

const std::string keypad[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void retSUBS(std::string s, std::string ans){
	if(s.length() == 0){
		std::cout << ans << std::endl;
		return;
	}
	
	for(int i=0;i<keypad[s[0] - '0'].length();i++){
		retSUBS(s.substr(1), ans + keypad[s[0] - '0'][i]);
	}
	}

int main(){
	retSUBS("379","");
	return 0;
}
