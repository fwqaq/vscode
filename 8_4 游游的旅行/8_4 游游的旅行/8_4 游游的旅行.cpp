#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<int> > mp;
vector<vector<pair<double, double>>> dp;
vector<int> happy1, happy2, times;
int n;
pair<double, double> dfs(int start, int remain)
{
	if (dp[start][remain] != pair<double, double>(0, 0))
		return dp[start][remain];
	int cnt = 0;
	for (int to = 1; to <= n; to++)
	{
		if (mp[start][to] > 0 && remain - times[to] - mp[start][to] >= 0)
			cnt += 1;
	}
	pair<double, double> res(0, 0), ans(happy1[start], happy2[start]);
	for (int to = 1; to <= n; to++)
	{
		if (mp[start][to] > 0 && remain - times[to] - mp[start][to] >= 0)
		{
			res = dfs(to, remain - times[to] - mp[start][to]);
			ans.first += res.first / cnt;
			ans.second += res.second / cnt;
		}
	}
	dp[start][remain] = ans;
	return ans;
}

int main()
{
	int m, k, x, y, w;
	cin >> n >> m >> k;
	mp.resize(n + 1);
	dp.resize(n + 1);
	for (int i = 0; i < n + 1; i++)
	{
		mp[i].resize(n + 1);
		dp[i].resize(k);
	}
	happy1.resize(n + 1);
	happy2.resize(n + 1);
	times.resize(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> times[i] >> happy1[i] >> happy2[i];
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y >> w;
		mp[x][y] = w;
		mp[y][x] = w;
	}
	pair<double, double> now, ans(0.0, 0.0);
	for (int i = 1; i <= n; i++)
	{
		if (k - times[i] < 0)
			continue;
		now = dfs(i, k - times[i]);
		ans.first += now.first / n;
		ans.second += now.second / n;
	}
	printf("%.5f %.5f\n", ans.first, ans.second);
	return 0;
}