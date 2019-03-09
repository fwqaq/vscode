//.给定整数n，取若干个1到n的整数可求和等于整数m，编程求出所有组合的个数。比如当n = 6，m = 8时，有四种组合：[2, 6], [3, 5], [1, 2, 5], [1, 3, 4]。限定n和m小于120

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int dp[122][122];
int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d%d", &n, &m);
	memset(dp, 0, sizeof(dp));
	//初始化dp
	dp[0][0] = 1;
	for (int k = 1; k <= m; ++k)
		dp[0][k] = 0;
	for (int k = 1; k <= n; ++k)
		dp[k][0] = 1;
	//dp[i][j]表示：从1,2,...,i-1,i取若干个整数求和等于整数j的组合的个数
	for (int j = 1; j <= m; ++j)
	for (int i = 1; i <= n; ++i)
	if ((j - i) >= 0)
		dp[i][j] = dp[i - 1][j] + dp[i - 1][j - i];
	else
		dp[i][j] = dp[i - 1][j];
	cout << dp[n][m] << endl;
	return 0;
}
