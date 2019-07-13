#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int FindK(vector<vector<int>>vec, int k)
{
	if (vec.size() < 1 || k < 1)
		return -1;
	vector<int>tmp;
	for (int i = 0; i < vec.size(); i++)
	for (int j = 0; j < vec[i].size(); j++)
		tmp.push_back(vec[i][j]);
	sort(tmp.begin(), tmp.end());
	return tmp[k - 1];
}

int main(void)
{
	int k; int n;
	cin >> k >> n;
	vector<int>vec; vector <vector<int>>tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;
			vec.push_back(tmp);
		}
		tmp.push_back(vec);
		vec.clear();
	}
	int ans = FindK(tmp, k);
	cout << ans << endl;

	system("pause");
	return EXIT_SUCCESS;
}
