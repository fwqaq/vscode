#include <iostream>
using namespace std;
int n, m, p, q, min = 999999999;
int a[51][51], book[51][51];
void dfs(int x, int y, int step){
	int next[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
	int tx, ty, k;
	if (x == p&&y == q){//�ж��Ƿ���ȣ���Ⱦ�ֱ���ж��Ƿ�С��min
		if (step < min){
			min = step;
		}
		return;
	}
	for (k = 0; k <= 3; k++){//���Ĵβ�ͬ�ķ�����и�ֵ
		tx = x + next[k][0];
		ty = y + next[k][1];
		if (tx<1 || tx>n || ty<1 || ty>n){//Խ�紦��
			continue;
		}
		if (a[tx][ty] == 0 && book[tx][ty] == 0){//�����ϰ����û���߹�
			book[tx][ty] = 1;
			dfs(tx, ty, step + 1);
			book[tx][ty] = 0;//���л��գ�
		}
	}
	return;
}
int main(){
	int i, j, startx, starty;
	cin >> n >> m;//�����к���
	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	cin >> startx >> starty >> p >> q;//�������������ص�����
	book[startx][starty] = 1;//��ǵ�һ���㣬��ֹ�������ߡ�
	dfs(startx, starty, 0);
	cout << min << endl;
	system("pause");
	return EXIT_SUCCESS;
}