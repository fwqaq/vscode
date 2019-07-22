#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;
#define maxn 20+1
int m, n;
int sum = 0;
char map[maxn][maxn];
char visit[maxn][maxn];
const int load[4][2] = { { 0, -1 }, { -1, 0 }, { 1, 0 }, { 0, 1 } };

void dfs(int i, int j)
{
	if (i < 0 || i >= m || j<0 || j >= n) return;
	if (visit[i][j]>0 || map[i][j] == '#') return;
	sum++;
	visit[i][j] = 1;
	for (int n = 0; n < 4; n++)
	{
		dfs(i + load[n][0], j + load[n][1]);
	}
}
int main()
{

	while ((cin >> m >> n) && m &&n)
	{
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];
		memset(visit, 0, sizeof(visit));
		sum = 0;
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		if (map[i][j] == '@') dfs(i, j);
		cout << sum << endl;

	}
	return 0;
}
