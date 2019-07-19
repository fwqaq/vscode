#include <string>
#include <iostream>
using namespace std;
bool Get_Sum(string & s){
	string str1;
	string str2;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ';'){
			str1 = s.substr(0, i);
			str2 = s.substr(i + 1, -1);
			break;
		}
	}
	if (str1.size() != str2.size()){
		return false;
	}
	//str1的依次往后移动和str2进行对比，判断是不是相同
	for (int i = 1; i < str1.size(); i++){
		if ((str1.substr(i, -1) + str1.substr(0, i)) == str2){
			return true;
		}
	}
	return false;
}
int main(){
	string s;
	while (cin >> s){
		if (Get_Sum(s)){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}

	
	return 0;
}