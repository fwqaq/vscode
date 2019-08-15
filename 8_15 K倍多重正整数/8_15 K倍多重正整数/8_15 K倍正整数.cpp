#include<map>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	map<int, int> data;
	int n, k;
	cin >> n >> k;
	int i = n;
	while (i--)
	{
		int a;
		cin >> a;
		data[a]++;
	}
	if (k == 1)
	{
		cout << data.size() << endl;
		return 0;
	}
	for (auto &it : data)
	{
		if (it.second<1) continue;
		if (data.find(it.first*k) == data.end())  continue;
		int t_min = min(it.second, data[it.first*k]);
		n -= t_min;
		it.second -= t_min;
		data[it.first*k] -= t_min;
	}
	cout << n << endl;
}
