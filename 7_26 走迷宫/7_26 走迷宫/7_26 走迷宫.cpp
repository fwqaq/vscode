#include<iostream>
#include<queue>
using namespace std;
char map[11][11];
char mark[11][11];
#define n 10
#define m 10
struct node {
	int x, y;
	int t;
};
int mynext[4][2]{
	{ 1, 0 },
	{ -1, 0 },
	{ 0, 1 },
	{0, -1}
};
queue<node> Q;
int BFS(int x, int y) {
	while (!Q.empty()) {
		node now = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = now.x + mynext[i][0];
			int ny = now.y + mynext[i][1];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || map[nx][ny] == '#' || mark[nx][ny] == '1') { continue; }
			mark[nx][ny] = '1';
			node tmp;
			tmp.x = nx; tmp.y = ny;
			tmp.t = now.t + 1;
			Q.push(tmp);
			if (nx == 9 && ny == 8) { return tmp.t; }
		}
	}
	return -1;
}
int main() {
	node first;
	while (cin >> map[0][0]) {
		while (!Q.empty()) Q.pop();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++){
				if (i == 0 && j == 0) continue;
				cin >> map[i][j];
				mark[i][j] = '0';
			}
		}
		first.x = 0;
		first.y = 1;
		first.t = 0;
		Q.push(first);
		cout << BFS(first.x, first.y) << endl;
	}
	system("pause");
	return 0;
}