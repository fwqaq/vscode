#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string minWindow(string s, string t) {
		//找到第一个包含t中字符串的字串
		if (s.size() < t.size()) return "";

		int sFreq[64] = { 0 }, tFreq[64] = { 0 };  // frequency数组
		for (int i = 0; i < t.size(); i++)
			tFreq[t[i] - 'A']++;

		int l = 0, r = -1, edge[2] = { -1, s.size() + 1 };  //edge数组表示要求的串的左右边界
		while (l <= s.size() - t.size()) {

			// < t.size()  直接窗口右边界右移，循环continue
			if (r - l + 1 < t.size()) {
				if (r + 1 < s.size()) {      // 这里注意到数组越界
					sFreq[s[++r] - 'A']++; continue;
				}
				else break;
			}

			// >= t.size() 先判断当前窗口中的字符是否满足“题目要求”
			int i = 0;
			while (i < 64) {
				if (sFreq[i] < tFreq[i]) break;
				i++;
			}
			if (i < 64) {
				// 这里注意到数组越界
				if (r + 1 < s.size()) sFreq[s[++r] - 'A']++;
				else sFreq[s[l++] - 'A']--;
			}
			else {
				if (r - l + 1 == t.size())
					return string(s.begin() + l, s.begin() + r + 1);
				else {
					if (r - l < edge[1] - edge[0]) {
						edge[0] = l;
						edge[1] = r;
					}
					sFreq[s[l++] - 'A']--;
				}
			}
		}
		return edge[0] == -1 ? "" : string(s.begin() + edge[0], s.begin() + edge[1] + 1);
	}
};
int main(){
	Solution s;
	cout << s.minWindow("ADOBECODEBANC", "ABCD") << endl;
		
	system("pause");
	return EXIT_SUCCESS;

}