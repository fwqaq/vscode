#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string countAndSay(int n) {
		if (n == 1){
			return "1";
		}
		if (n == 2){
			return "11";
		}
		string s = "11";
		string str = "";
		for (int i = 0; i < n - 2; i++){
			str = "";
			//循环次数。需要特殊处理最后一个字符
			for (int j = 0; j < s.length() - 1; j++){
				int num = 1;
				while (s[j] == s[j + 1]&&j<s.length()-1){
					num++;
					j++;
				}
				str = str + to_string(num) + s[j];
			}
			if (s[s.length() - 1] != s[s.length() - 2]){
				//需要加上我们最后一个元素
				str = str + "1" + s[s.length() - 1];
			}
			s = str;
		}
		return str;
	}
};
int main(){
	Solution s;
	cout << s.countAndSay(6);
	system("pause");
	return EXIT_SUCCESS;
}