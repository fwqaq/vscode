#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	bool isNumber(string s) {
		//需要判断我们的字符串是不是含有不止a-的字符
		if (isShuzi(s) && isfuhao(s) && isXsd(s)){
			return true;
		}
		return false;
	}
	bool isfuhao(string s){
		for (int i = 0; i < s.length(); i++){
			if (s[i] == '+' || s[i] == '-'){
				if (i != 0 && s[i - 1] != 'e'){
					return false;
				}
			}
		}
		return true;
	}
	bool isShuzi(string s){
		for (int i = 0; i < s.length(); i++){
			if (s[i]<'0' || s[i]>'9'){
				if (s[i] != 'e'&&s[i]!='.'){
					return false;
				}
				else{
					if (i == 0){
						return false;
					}
				}
			}
		}
		return true;
	}
	bool isXsd(string s){
		//判断小数点是不是符合要求
		//小数点只能含有最多两个
		int post = 0;
		vector<int>v;
		for (int i = 0; i < s.length(); i++){
			if (s[i] == 'e'){
				post = i;
			}
			if (s[i] == '.'){
				v.push_back(i);
			}
		}
		if (!v.empty()){
			return true;
		}
		if (v.size()>2){
			return false;
		}
		if (v.size() == 1){
			if ((v[0]==post - 1 || v[0]==post + 1) && v[0] == 0){
				return false;
			}
		}
		if (v.size() == 2){
			if (v[0] == 0 || v[0] > post || v[1] < post){
				return false;
			}
		}
		return true;
	}
};
int main(){
	Solution s;
	cout << s.isNumber("0") << endl;;
	system("pause");
	return EXIT_SUCCESS;
}