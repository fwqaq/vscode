#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		int len = s.size();
		int*p = new int[len];
		for (int i = 0; i < len; i++){
			p[i] = 0;
		}
		for (int i = 0; i < len; i++){
			if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
				int j = i - 1;
				int flag = 0;
				while (j >= 0){
					if ((s[j] == '(' || s[j] == '[' || s[j] == '{')&&p[j] == 0){
						if (s[i]-s[j]>4){
							return false;
						}
						p[i] = p[j] = 1;
						flag = 1;
						break;
					}
					--j;
				}
				if (flag == 0){
					return false;
				}
			}
		}
		for (int i = 0; i < len; i++){
			if (p[i] == 0){
				return false;
			}
		}
		delete []p;
		return true;
	}
};
int main(){
	Solution s;
	cout << s.isValid("()()()()({}){}[]}[]") << endl;
	system("pause");
	return EXIT_SUCCESS;
}