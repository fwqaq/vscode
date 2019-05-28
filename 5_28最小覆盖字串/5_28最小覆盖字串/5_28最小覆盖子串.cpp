#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string minWindow(string s, string t) {
		//�ҵ���һ������t���ַ������ִ�
		if (s.size() < t.size()) return "";

		int sFreq[64] = { 0 }, tFreq[64] = { 0 };  // frequency����
		for (int i = 0; i < t.size(); i++)
			tFreq[t[i] - 'A']++;

		int l = 0, r = -1, edge[2] = { -1, s.size() + 1 };  //edge�����ʾҪ��Ĵ������ұ߽�
		while (l <= s.size() - t.size()) {

			// < t.size()  ֱ�Ӵ����ұ߽����ƣ�ѭ��continue
			if (r - l + 1 < t.size()) {
				if (r + 1 < s.size()) {      // ����ע�⵽����Խ��
					sFreq[s[++r] - 'A']++; continue;
				}
				else break;
			}

			// >= t.size() ���жϵ�ǰ�����е��ַ��Ƿ����㡰��ĿҪ��
			int i = 0;
			while (i < 64) {
				if (sFreq[i] < tFreq[i]) break;
				i++;
			}
			if (i < 64) {
				// ����ע�⵽����Խ��
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