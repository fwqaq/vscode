#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	while (num){
		string str;
		cin >> str;
		string str1 = str.substr(0, 2);
		string str2 = str.substr(3, 2);
		string str3 = str.substr(6, 2);
		if (str1 >= "24"){
			str[0] = '0';
		}
		if (str2 >= "60"){
			str[3] = '0';
		}
		if (str3 >= "60"){
			str[6] = '0';
		}
		cout << str << endl;
	}



	return 0;
}