#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
	int N, M, K;
	vector<vector<int>>v(21, vector<int>(21, 0));
	vector<vector<double>>vv(21, vector<double>(21, 0));
	while (cin >> N >> M >> K){
		int x = 0;
		int y = 0;
		for (int i = 0; i < K; i++){
			cin >> x >> y;
			v[x][y] = 1;
		}
		for (int i = 1; i <= N; i++){
			for (int j = 1; j <= M; j++){
				if (i == 1 && j == 1){
					vv[1][1] = 1;
				}
				else if (v[i][j]){
					vv[i][j] = 0;
					continue;
				}
				else if (i == N&&j == M){
					vv[i][j] = vv[i - 1][j] + vv[i][j - 1];

				}
				else if (i == N){
					vv[i][j] = vv[i - 1][j] * 0.5 + vv[i][j - 1];
				}
				else if (j == M){
					vv[i][j] = vv[i - 1][j] + vv[i][j - 1] * 0.5;
				}
				else if (i == 1){
					vv[i][j] = vv[i][j - 1] * 0.5;
				}
				else if (j == 1){
					vv[i][j] = v[i - 1][j] * 0.5;
				}
				else {
					vv[i][j] = vv[i][j - 1] * 0.5 + vv[i - 1][j] * 0.5;
				}
			}
		}
		cout.setf(ios::fixed);
		cout << setprecision(2) << vv[N][M] << endl;
	}

	

	system("pause");
	return EXIT_SUCCESS;
}