#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	cin >> n;//�����������
	int* p = new int[n + 1];
	for (int i = 1; i <= n; i++){
		cin >> p[i];
	}
	int sum = 0;
	int m = 0;//������������
	cin >> m;
	for (int i = 0; i < m; i++){
		int x = 0;//���������
		int y = 0;//���������
		cin >> x >> y;
		sum = sum + y*p[x];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}