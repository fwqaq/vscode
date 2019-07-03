#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

#define rep(i,l,r) for(int i=l;i<r;++i)
#define per(i,l,r) for(int i=(r)-1;i>=(l);--i)

typedef pair<string, int>psi;

int Palindrome(string s){
	if (s.size() < 2)return s.size();
	vector<vector<bool>>dp(s.size(), vector<bool>(s.size(), 0));
	int res = 0;
	int x, y;
	for (int i = s.size() - 1; i >= 0; --i){
		for (int j = i; j < s.size(); ++j){
			dp[i][j] = (s[i] == s[j]) && ((j - i <= 2 || dp[i + 1][j - 1]));
			if (dp[i][j])
				res++;
		}
	}
	return res;
}

int main()
{
	string s; cin >> s;
	int res = Palindrome(s);
	cout << res;
	system("pause");
	return 0;
}