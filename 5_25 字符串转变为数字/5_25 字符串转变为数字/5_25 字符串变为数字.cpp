#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		if(str.empty()){
			return 0;
		}
		int flag = 1;
		if (str[0] == '-'){
			flag = -1;
			str = str.substr(1, str.size() - 1);
		}
		if (str[0] == '+'){
			flag = 1;
			str = str.substr(1, str.size() - 1);
		}
		for (int i = 0; i<str.size(); i++){
			if (str[i]>'9' || str[i] < '0'){
				return 0;
			}
		}
		int num = 0;
		for (int i = 0; i < str.size(); i++){
			num = num * 10 + str[i] - '0';
		}
		return num*flag;
	}
};
int main(){

	Solution s;
	cout << s.StrToInt("+5465321") << endl;
	system("pause");
	return 0;
}