#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int N = 0;
	int M = 0;
	while (cin >> N >> M){
		vector<int>v(M + 1, -1);
		v[N] = 0;
		for (int i = N; i <= M; i++){
			if (v[i] == -1){
				continue;
			}
			//ÕÒ³öÔ¼Êý
			vector<int>xv;
			for (int j = 2; j <= (int)sqrt(i); j++){
				if (i%j == 0){
					if (j*j == i)
						xv.push_back(j);
					else {
						xv.push_back(j);
						xv.push_back(i / j);
					}
				}
			}
			for (int z = 0; z < xv.size(); z++){
				if (i + xv[z] > M){
					continue;
				}
				if (v[i + xv[z]] == -1){
					v[i + xv[z]] = v[i] + 1;
				}
				else{
					v[i + xv[z]] = v[i] + 1 > v[i + xv[z]] ? v[i + xv[z]]:v[i] + 1;
				}
			}

		}
		cout << v[M] << endl;
	}
	return 0;
}