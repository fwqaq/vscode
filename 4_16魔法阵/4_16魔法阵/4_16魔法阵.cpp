#include<iostream>
#include<string>
#include<cmath>
#include<set>
using namespace std;

int main()
{
	int m;
	cin >> m;
	set<double> s;
	for (int i = 0; i < m; i++)
	{
		string x, y;
		cin >> x >> y;
		for (int j = 0; j < 4; j++)
		for (int k = 0; k < 4; k++)
		if (j != k)
			s.insert(pow(x[j] - x[k], 2) + pow(y[j] - y[k], 2));
		if (s.size() < 3)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		s.clear();
	}
	system("pause");
	return 0;
}