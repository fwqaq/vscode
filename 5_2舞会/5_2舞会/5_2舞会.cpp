#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1001][1001] = { 0 };

int main()
{
	int n(0), m(0);
	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		int admire(0);
		cin >> admire;
		for (int j = 0; j < admire; ++j)
		{
			int id(0);
			cin >> id;
			a[i][id] = 1;
		}
	}
	for (int i = 1; i <= m; ++i)
	{
		int admire(0);
		cin >> admire;
		for (int j = 0; j < admire; ++j)
		{
			int id(0);
			cin >> id;
			if (a[id][i] == 1);
			else a[id][i] = 1;
		}
	}
	int maxM(0);
	for (int i = 1; i <= n; ++i)
	{
		int sum(0);
		for (int j = 1; j <= m; ++j)
			sum += a[i][j];
		maxM = max(maxM, sum);
	}
	int maxF(0);
	for (int i = 1; i <= m; ++i)
	{
		int sum(0);
		for (int j = 1; j <= n; ++j)
			sum += a[j][i];
		maxF = max(maxF, sum);
	}
	cout << max(maxF, maxM) << endl;
	return 0;
}