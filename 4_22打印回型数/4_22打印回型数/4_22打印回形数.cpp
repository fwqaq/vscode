#include <iostream>
using namespace std;
int main(){
	int kuan = 0;
	int gao = 0;
	cin >> kuan >> gao;
	int** p = new int*[gao];
	for (int i = 0; i < gao; i++){
		p[i] = new int[kuan];
	}
	for (int i = 0; i < gao; i++){
		for (int j = 0; j < kuan; j++){
			p[i][j] = -1;
		}
	}
	//先从左到右打印
	//从上到下打印
	//从右到左打印
	//从下到上打印
	int i = 0, j = -1, now = 0;
	int count = 0;
	while (count < gao*kuan){
		while (j + 1 < kuan&&p[i][j + 1] == -1 && count < gao*kuan){
			p[i][++j] = now; count++;
		}
		now++;
		while (i + 1 < gao&&p[i + 1][j] == -1 && count < gao*kuan){
			p[++i][j] = now; count++;
		}
		now++;
		while (j - 1 >= 0 && p[i][j - 1] == -1 && count < gao*kuan){
			p[i][--j] = now; count++;
		}
		now++;
		while (i - 1 >= 0 && p[i - 1][j] == -1 && count < gao*kuan){
			p[--i][j] = now; count++;
		}
		now++;
	}
	for (int i = 0; i < gao; i++){
		for (int j = 0; j < kuan; j++){
			cout << p[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}