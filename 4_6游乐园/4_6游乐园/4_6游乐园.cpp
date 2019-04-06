链接：https://www.nowcoder.com/questionTerminal/907b6331aecd480eb94a1d2ff2d5d50c
来源：牛客网

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	vector<int> p(n);
	for (int i = 0; i < n; ++i) cin >> p[i];
	sort(p.begin(), p.end());

	t = std::min(t, 10000);
	vector<int> a(t, 0);
	for (int i = 0; i < n - 1; ++i){
		for (int j = t - 1; j >= p[i]; --j){
			a[j] = std::max(a[j], p[i] + a[j - p[i]]);
		}
	}
	cout << (a[t - 1] + p[n - 1]) << endl;
	system("pause");
	return EXIT_SUCCESS;
}