#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	int n, sum;
	cin >> n >> sum;
	vector<long> tmp(sum + 1, 0), input(n + 1, 0);
	tmp[0] = 1, input[0] = 0;
	vector<vector<long> >dp(n + 1, tmp);
	for (int i = 1; i <= n; i++) cin >> input[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (j - input[i] >= 0) dp[i][j] = dp[i - 1][j] + dp[i - 1][j - input[i]]; //这个就如解析力写的一样
			else dp[i][j] = dp[i - 1][j]; //否则直接继承该列上一行值
		}
	}
	cout << dp[n][sum] << endl;  //输出最后一个
	system("pause");
	return 0;
}