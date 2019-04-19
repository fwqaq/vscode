#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string is_num(string str1, string str2){
	for (int i = 0; i < str1.size(); i++){
		if (str1[i]<'0' || str1[i]>'9'){
			return "error";
		}
		if (str2[i]<'0' || str2[i]>'9'){
			return "error";
		}
	}
	string str = "";
	int flag = 0;
	int i = str1.size() - 1;
	int j = str2.size() - 1;
	for (; i >= 0 && j >= 0; i--, j--){
		int a = str1[i] - '0';
		int b = str2[j] - '0';
		int sum = a + b + flag;
		str = str + to_string(sum % 10);
		flag = sum / 10;
	}
	if (i < 0 && j < 0){
		if (flag != 0){
			str += to_string(flag);
		}
		reverse(str.begin(), str.end());
		return str;
	}
	else if (i < 0){
		while (j >= 0){
			int x = str2[j] - '0' + flag;
			flag = x / 10;
			str += to_string(x);
			j--;
		}
		if (flag != 0){
			str += to_string(flag);
		}
		reverse(str.begin(), str.end());
		return str;
	}
	else {
		while (i >= 0){
			int x = str1[j] - '0' + flag;
			flag = x / 10;
			str += to_string(x);
			i--;
		}
		if (flag != 0){
			str += to_string(flag);
		}
		reverse(str.begin(), str.end());
		return str;
	}
}
int main(){
	string str1;
	string str2;
	cin >> str1 >> str2;
	cout << is_num(str1, str2) << endl;
	system("pause");
	return EXIT_SUCCESS;
}