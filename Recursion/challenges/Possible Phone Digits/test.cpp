#include<iostream>

static const std::string keypad[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void combs(std::string str , std::string ans){
    
    if(str.length()==0){
        std::cout << ans << std::endl;
        return;
    }
    
    std::string first = keypad[str[0] - '0'];
    
    for(int i=0;i<first.length();i++){
        combs(str.substr(1),ans + first[i]);
    }
    
}

int main(){
	combs("29","");
	return 0;
}
