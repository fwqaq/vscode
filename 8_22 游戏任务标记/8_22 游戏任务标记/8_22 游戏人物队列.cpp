#include <iostream>
using namespace std;
unsigned int arr[32] = { 0 };
int main()
{
	int m, n = 0;
	while (cin >> m >> n){
		if (m > 1024 || n > 1024 || m < 0 || n < 0){
			cout << -1 << endl;
			continue;
		}
		int i = (m - 1) / 32;
		int j = (n - 1) / 32;
		arr[i] |= (1 << (m - 1) % 32);
		int tmp = arr[j] & (1 << (n - 1) % 32);
		if (tmp != 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}