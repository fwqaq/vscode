#include<iostream>
using namespace std;
bool Is_ugly(int a)
{
	while (a % 2 == 0){ a /= 2; }
	while (a % 3 == 0){ a /= 3; }
	while (a % 5 == 0){ a /= 5; }
	return a == 1;
}
int main()
{
	int N; cin >> N;
	int count = 0, num = 1;
	for (; count < N; num++){
		if (Is_ugly(num)){ count++; }
	}
	cout << num - 1;
	return 0;
}