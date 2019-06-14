#include <iostream>
#include <stack>
#include <vector>
using namespace std;
stack<vector<int>>sv;
int main(){
	//定义一个二维数组
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** p = new int*[n];
	int** pp = new int*[n];
	for (int i = 0; i < n; i++){
		p[i] = new int[m];
		pp[i] = new int[m];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			pp[i][j] = 0;
			cout << pp[i][j] << " ";
		}
		cout << endl;
	}
	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < m; j++){
	//		cin >> p[n][m];
	//	}
	//}

	system("pause");
	return 0;
}