#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string removeKdigits(string num, int k) {
		if (num.size() <= k){
			return "";
		}
		string s = "";
		for (int i = 0; i < num.size() - k; i++){
			string s1 = num.substr(0, i);
			string s2 = num.substr(i + k, num.size() - i - k);
			if (s == ""){
				s = s1 + s2;
				continue;
			}
			if (atoi(s.c_str()) > atoi((s1 + s2).c_str())){
				s = s1 + s2;
			}
		}
		int n = 0;
		n = atoi(s.c_str());
		s = to_string(n);
		return s;
	}
};
int main(){
	Solution s;
	cout<<s.removeKdigits("10", 1);

	system("pause");
	return EXIT_SUCCESS;
}