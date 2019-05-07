#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	cin >> n;//面包的总数量
	int* p = new int[n + 1];
	for (int i = 1; i <= n; i++){
		cin >> p[i];
	}
	int sum = 0;
	int m = 0;//买的面包种类数
	cin >> m;
	for (int i = 0; i < m; i++){
		int x = 0;//面包的种类
		int y = 0;//面包的数量
		cin >> x >> y;
		sum = sum + y*p[x];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}