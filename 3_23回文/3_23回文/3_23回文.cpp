#include <iostream>
#include <string>
using namespace std;
bool is_Huiwen(string str){
	int i = 0;
	int j = str.length()-1;
	while (i < j){
		if (str[i] != str[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main(){
	//走半个长度的循环，判断子序列是不是回文
	string name;
	cin >> name;
	for (int i = 0; i < name.length(); i++){
		if (is_Huiwen(name.substr(i,name.length()-i))){
			cout << name.length()+i<< endl;
			break;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}