#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
	vector<vector<int>> a(10, vector<int>(7, 0));
	vector<int> cnt(7, 0);
	vector<long> k(10);
	k[0] = 10;
	for (int i = 1; i < 10; ++i) k[i] = 10 * k[i - 1];
	int n, v;
	int x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d", &v);
		x = 0;
		while (v / k[x]) ++x;
		y = v % 7;
		++cnt[y];
		++a[x][y];
	}
	long res = (cnt[0] - 1)*cnt[0];
	for (int i = 1; i < 7; ++i){
		if (cnt[i] == 0) continue;
		for (x = 0; x < 10; ++x){
			for (y = 1; y < 7; ++y){
				if (a[x][y] == 0) continue;
				if (k[x] * i % 7 == 7 - y){
					if (i == y){
						res += (cnt[i] - 1) * a[x][y];
					}
					else res += cnt[i] * a[x][y];
				}
			}
		}
	}
	cout << res << endl;
	system("pause");
	return EXIT_SUCCESS;
}