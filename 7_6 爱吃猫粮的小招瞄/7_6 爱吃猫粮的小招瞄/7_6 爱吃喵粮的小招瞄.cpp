#include<iostream>
#include<vector>
#include<sstream>
#include <algorithm>
using namespace std;
int CanEatFull(int k, vector<int>&p, int h)
{
	int sum = 0;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] % k == 0) { sum += p[i] / k; }
		else { sum += p[i] / k + 1; }
	}
	if (sum > h) { return 0; }
	else
	{
		return 1;
	}
}

int GetMinSpeed(vector<int>&p, int h, int num_KMAX)
{
	int num_minSpeed = 1, num_maxSpeed = num_KMAX;
	if (!CanEatFull(num_KMAX, p, h)){ return -1; }
	while ((num_maxSpeed + num_minSpeed) / 2 != num_minSpeed) {
		if (CanEatFull((num_maxSpeed + num_minSpeed) / 2, p, h))
		{
			num_maxSpeed = (num_maxSpeed + num_minSpeed) / 2;
		}
		else
		{
			num_minSpeed = (num_maxSpeed + num_minSpeed) / 2;
		}
	}
	return num_maxSpeed;
}
int main()
{
	vector<int>p;

	int num_Kmax = 0;
	int h, x;
	string line;
	getline(cin, line);
	stringstream ss(line);
	while (ss >> x)
	{
		p.push_back(x);
		num_Kmax = std::max(num_Kmax, x);
	}
	cin >> h;
	cout << GetMinSpeed(p, h, num_Kmax) << endl;

	system("pause");
	return EXIT_SUCCESS;
}