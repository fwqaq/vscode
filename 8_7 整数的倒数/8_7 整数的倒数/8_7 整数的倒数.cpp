#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		if (str == "-0"){
			cout << str << endl;
			continue;
		}
		long long num = atoi(str.c_str());
		int flag = 1;
		if (num < 0){
			flag = -1;
			num = (0 - num);
		}
		long long ret = 0;
		while (num){
			ret = ret * 10 + num % 10;
			num /= 10;
		}
		ret = ret*flag;
		cout << ret << endl;
	}


	system("pause");
	return 0;
}