#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	vector<int>data(n, 0);
	vector<vector<int>>vv(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++){
		cin >> data[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int k = 0; k < n; k++){
			vv[k][k] = data[k];
			for (int k = 1; k < n; k++){
				for (int j = 0; j < n; j++){
					vv[j][(k + j) % n] = std::max(-1 * vv[(j + 1) % n][(k + j) % n] + data[j], -1 * vv[j][(k + j - 1) % n] + data[(k + j) % n]);

				}
			}
		}
	}
	for (int i = 0; i < n; ++i){
		ans = std::max(vv[i][(i + n - 1) % n], ans);
	}
	cout << ans << endl;

	return 0;
}