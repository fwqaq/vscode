#include <iostream>
#include <string>
using namespace std;
bool Is_huiwen(string str){
	for (int i = 0, j = str.length() - 1; i < j; i++, j--){
		if (str[i] != str[j]){
			return false;
		}
	}
	return true;
}
int main(){
	string str;
	cin >> str;
	string a = "NO";
	for (int i = 0; i < str.length(); i++){
		if (Is_huiwen(str.substr(i, 1))){
			a = "YES";
			break;
		}
	}
	cout << a << endl;
	system("pause");
	return EXIT_SUCCESS;
}