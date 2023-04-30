#include<iostream>

void posssubstr(std::string str, std::string add){
	if(str.length() == 0){
		std::cout << add <<std::endl;
		return;
	}

	posssubstr(str.substr(1), add);
	posssubstr(str.substr(1), add + str[0]);
}

int main(){
	posssubstr("ABC","");
	return 0;
}
