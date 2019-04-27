#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	int i;    // 对岸的实时距离
	int temp;
	int step = 0;
	vector<int> weight;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> temp;
		weight.push_back(temp);
	}
	weight.push_back(-1);    // 将对岸当成是最后一个桩
	while (i != 0)
	{
		int rt = 0;
		for (int j = 0; j < i; j++)
		{
			if (weight[j] >= i - j)
			{
				i -= (i - j);
				step++;
				rt++;
				break;
			}
		}
		if (!rt)
		{
			cout << -1;
			return 0;
		}
	}
	cout << step;
	system("pause");
	return 0;
}