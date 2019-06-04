#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
	bool wordBreak(string s, vector<string>& wordDict) {
		int m = s.size();
		vector<bool> dp(m, false);
		unordered_set<string> set_s(wordDict.begin(), wordDict.end());
		int i = 0;
		for (; i < m; i++) {
			string it = s.substr(0, i + 1);
			if (set_s.find(it) != set_s.end()) break;
		}
		for (; i < m; i++) {
			for (int j = i; j >= 0; j--) {
				string it = s.substr(j, i - j + 1);
				if (set_s.find(it) != set_s.end()) {
					if (j == 0 || dp[j - 1]) {
						dp[i] = true;
						break;
					}
				}
			}
		}
		return dp[m - 1];
	}
};
int main(){
	Solution s;
	vector<string>vv{ "leet", "code" };

	cout<<s.wordBreak("leetcode",vv);
	system("pause");
	return EXIT_SUCCESS;
}