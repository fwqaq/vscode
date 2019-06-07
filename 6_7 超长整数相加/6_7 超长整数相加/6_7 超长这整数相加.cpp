#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2){
		string str = "";
		int i = str1.size() - 1;
		int j = str2.size() - 1;
		int flag = 0;
		while (i >= 0 && j >= 0){
			int sum = str1[i] - '0' + str2[j] - '0' + flag;
			str += to_string(sum%10);
			flag = sum / 10;
			i--; 
			j--;
		}
		if (i == j&&flag!=0){
			str = str + to_string(flag);
			reverse(str.begin(), str.end());
		}
		else if (i < 0){
			while (j >= 0){
				int sum = str2[j] - '0' + flag;
				str += to_string(sum % 10);
				flag = sum / 10;
				j--;
			}
			reverse(str.begin(), str.end());
		}
		else {
			while (i >= 0){
				int sum = str1[i] - '0' + flag;
				str += to_string(sum % 10);
				flag = sum / 10;
				i--;
			}
			reverse(str.begin(), str.end());
		}
		cout << str << endl;
	}

	system("pause");
	return 0;
}