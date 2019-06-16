#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	vector<string> generateParenthesis(int n) {
		int l = 1;
		int r = 0;
		vector<string> ans;
		hui(ans, l, r, n, "(");
		return ans;
	}
	void hui(vector<string>& ans, int l, int r, int n, string s)
	{
		if (l == n&&r == n) { ans.push_back(s); return; }
		if (l >= r)
		{
			if (l < n) hui(ans, l + 1, r, n, s + '(');
			if (r < n) hui(ans, l, r + 1, n, s + ')');
		}
	}
}; 

int main(){
	Solution s;
	vector<string>v;
	v = s.generateParenthesis(6);
	for (auto e : v){
		cout << e << endl;
	}
	system("pause");
	return 0;
}