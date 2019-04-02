#include <iostream>
using namespace std;
int n, m, p, q, min = 999999999;
int a[51][51], book[51][51];
void dfs(int x, int y, int step){
	int next[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
	int tx, ty, k;
	if (x == p&&y == q){//判断是否相等，相等就直接判断是否小于min
		if (step < min){
			min = step;
		}
		return;
	}
	for (k = 0; k <= 3; k++){//给四次不同的方向进行赋值
		tx = x + next[k][0];
		ty = y + next[k][1];
		if (tx<1 || tx>n || ty<1 || ty>n){//越界处理
			continue;
		}
		if (a[tx][ty] == 0 && book[tx][ty] == 0){//不是障碍物和没有走过
			book[tx][ty] = 1;
			dfs(tx, ty, step + 1);
			book[tx][ty] = 0;//进行回收，
		}
	}
	return;
}
int main(){
	int i, j, startx, starty;
	cin >> n >> m;//读入行和列
	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	cin >> startx >> starty >> p >> q;//读入起点坐标和重点坐标
	book[startx][starty] = 1;//标记第一个点，防止往后面走。
	dfs(startx, starty, 0);
	cout << min << endl;
	system("pause");
	return EXIT_SUCCESS;
}