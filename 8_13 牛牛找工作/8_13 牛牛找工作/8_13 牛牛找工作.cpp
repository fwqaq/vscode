#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100000 + 5;
struct node
{
	int level, val;
	bool operator<(const node &r)const
	{
		return level < r.level;
	}
}d[maxn];
struct query
{
	int id, level;
	bool operator <(const query &r)const
	{
		return level < r.level;
	}
}qu[maxn];
int res[maxn];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d%d", &d[i].level, &d[i].val);
	sort(d + 1, d + n + 1);
	for (int i = 1; i <= m; i++) scanf("%d", &qu[i].level), qu[i].id = i;
	sort(qu + 1, qu + m + 1);
	int maxx = 0, now = 1;
	for (int i = 1; i <= m; i++)
	{
		while (d[now].level <= qu[i].level&&now <= n)
		{
			maxx = max(maxx, d[now].val);
			now++;
		}
		res[qu[i].id] = maxx;
	}
	for (int i = 1; i <= m; i++) printf("%d\n", res[i]);
}