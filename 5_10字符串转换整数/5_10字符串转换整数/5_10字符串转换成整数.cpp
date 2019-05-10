#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int myAtoi(string str) {
		string s = "";
		for (int i = 0; i < str.length(); i++){
			if (str[i] == ' '){
				continue;
			}
			if (str[i] > '9' || str[i] < '0'){
				if (!(str[i] == '+' || str[i] == '-')){
					return 0;
				}
			}
			s = s + str[i];
		}
		int flag = 1;
		int num = 0;
		for (int i = 0; i < s.length(); i++){
			if ((s[i] == '+' || s[i] == '-')&&i == 0){
				if (s[i] == '-'){
					flag = -1;
				}
				continue;
			}
			if (s[i] == '+' || s[i] == '-'){
				return 0;
			}
			num = num * 10 + s[i] - '0';
		}
		if (flag == -1){
			return num*-1;
		}
		return num;
	}
};
int main(){
	Solution s;
	cout << s.myAtoi("1234") << endl;
	system("pause");
	return EXIT_SUCCESS;
}