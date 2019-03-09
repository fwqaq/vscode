//.��������n��ȡ���ɸ�1��n����������͵�������m��������������ϵĸ��������統n = 6��m = 8ʱ����������ϣ�[2, 6], [3, 5], [1, 2, 5], [1, 3, 4]���޶�n��mС��120

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int dp[122][122];
int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d%d", &n, &m);
	memset(dp, 0, sizeof(dp));
	//��ʼ��dp
	dp[0][0] = 1;
	for (int k = 1; k <= m; ++k)
		dp[0][k] = 0;
	for (int k = 1; k <= n; ++k)
		dp[k][0] = 1;
	//dp[i][j]��ʾ����1,2,...,i-1,iȡ���ɸ�������͵�������j����ϵĸ���
	for (int j = 1; j <= m; ++j)
	for (int i = 1; i <= n; ++i)
	if ((j - i) >= 0)
		dp[i][j] = dp[i - 1][j] + dp[i - 1][j - i];
	else
		dp[i][j] = dp[i - 1][j];
	cout << dp[n][m] << endl;
	return 0;
}
