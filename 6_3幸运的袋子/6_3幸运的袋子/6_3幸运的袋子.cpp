#include <iostream>
#include <algorithm>
using namespace std;
int n, a[1007];
int DFS(int step, int sum, int mul)
{
	int r = 0;
	for (int i = step + 1; i<n; i++) {
		int S = sum + a[i];
		int M = mul*a[i];
		if (S > M)
			r += 1 + DFS(i, S, M);
		else if (a[i] == 1)
			r += DFS(i, S, M);
		else
			break;
		while (i < n - 1 && a[i] == a[i + 1])
			i++;
		//直接跳过相同的元素
	}
	return r;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << DFS(0, 1, 1) << endl;
	return 0;
}