#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string str = "";
		if (strs.empty()){
			return str;
		}
		int m = strs[0].length();
		for (int i = 0; i < strs.size(); i++){
			if (strs[i].size() < m){
				m = strs[i].size();
			}
		}
		
		for (int i = 0; i < m; i++){
			char ch = strs[0][i];
			for (int j = 0; j < strs.size(); j++){
				if (ch != strs[j][i]){
					return str;
				}
			}
			str = str + ch;

		}
		return str;
	}
};
int main(){
	vector<string>str;
	str.push_back("flower");
	str.push_back("flow");
	str.push_back("flght");
	Solution s;
	cout << s.longestCommonPrefix(str) << endl;
	system("pause");
	return EXIT_SUCCESS;
}