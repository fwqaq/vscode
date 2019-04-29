#include <iostream>
#include <vector>
using namespace std;
int min_num = 100000007;
void get_min_num(int** pp, int x, int y,int M,int N,int sum,vector<int>v){
	if (x >= M || y >= N){
		return;
	}
	v.push_back(pp[x][y]);
	if (x == M - 1 && y == N - 1){
		int min = v[0];
		for (int i = 1; i < v.size(); i++){
			v[i] = v[i] + v[i - 1];
			if (v[i] < min){
				min = v[i];
			}
		}
		if (min<=0){
			min = (-min) + 1;
			if (min < min_num){
				min_num = min;
			}
		}
	}
	get_min_num(pp, x + 1, y, M, N,sum,v);
	get_min_num(pp, x, y + 1, M, N,sum,v);
}
int main(){
	int M;//行数
	int N;//列数
	cin >> M >> N;
	int **pp = new int*[M];
	for (int i = 0; i < M; i++){
		pp[i] = new int[N];
	}
	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			cin >> pp[i][j];
		}
	}
	vector<int>v;
	get_min_num(pp, 0, 0,M,N,0,v);
	cout << min_num << endl;
	delete[]pp;
	system("pause");
	return EXIT_SUCCESS;
}