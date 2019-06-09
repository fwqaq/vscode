#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		for (int i = 0; i < tokens.size(); i++){
			if (tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/"){
				int num1 = _num.top();
				_num.pop();
				int num2 = _num.top();
				_num.pop();
				int ret = 0;
				if (tokens[i] == "+"){
					ret = num2 + num1;
				}
				if (tokens[i] == "-"){
					ret = num2 - num1;
				}
				if (tokens[i] == "/"){
					ret = num2 / num1;
				}
				if (tokens[i] == "*"){
					ret = num1*num2;
				}
				_num.push(ret);
			}
			else{
				int num = atoi(tokens[i].c_str());
				_num.push(num);
			}
		}
		return _num.top();
	}
private:
	stack<int> _num;
};
int main(){

	Solution s;
	vector<string>v;
	v.push_back("2");
	v.push_back("1");
	v.push_back("+");
	v.push_back("3");
	v.push_back("*");
	cout << s.evalRPN(v) << endl;;
	system("pause");
	return EXIT_SUCCESS;
}