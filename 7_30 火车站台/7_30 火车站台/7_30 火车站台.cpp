#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100000 + 2;


int main(int argc, char const *argv[])
{
	int n, from, to;
	int arr[MAX] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		scanf("%d %d", &to, &from);
		arr[from - 1]++;
		arr[to - 1]--;
	}
	int res = 0;
	int sum = 0;
	for (int i = MAX - 1; i >= 0; i--){
		//起点和终点
		sum += arr[i];
		if (sum > res){
			res = sum;
		}
	}
	cout << res << endl;

	system("pause");
	return EXIT_SUCCESS;
}
