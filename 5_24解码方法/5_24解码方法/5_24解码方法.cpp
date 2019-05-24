#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Solution {
public:
	int numDecodings(string s) {
		if (s.size() == 0){
			return 0;
		}
		if (s.size() == 1){
			if (s[0] == '0')
				return 0;
			return 1;
		}
		int* p = new int[s.size()];
		for (int i = 0; i < s.size(); i++){
			p[i] = 0;
		}
		p[0] = 1;
		for (int i = 1; i < s.size(); i++){
			p[i] = p[i - 1];
			string s1 = "";
			s1 += s[i-1];
			s1 += s[i];
			int num = atoi(s1.c_str());
			if (num <= 26 && num >= 1){
				p[i] = p[i - 1] + 1;
			}
		}
		return p[s.size() - 1];
	}
};
int main(){
	Solution s;
	cout << s.numDecodings("1265431264532165") << endl;
	system("pause");
	return EXIT_SUCCESS;
}