#include <iostream>
using namespace std;

int F(int m, int n)
{
	if (m == 0 || n == 1)
		return 1;
	else if (m < n)
		return F(m, m);
	else
		return F(m, n - 1) + F(m - n, n);
}
int main(){

	int x, m, n;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> m >> n;
		cout << F(m, n) << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}