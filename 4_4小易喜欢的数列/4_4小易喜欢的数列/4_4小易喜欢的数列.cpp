#include <iostream>
using namespace std;
#define mod 1000000007;
int main(){

	int n;//n个数字
	int K;//都要小于等于K
	cin >> n >> K;
	int** pp = new int*[n+1];
	for (int i = 0; i <= n; i++){
		pp[i] = new int[K+1];
	}
	for (int i = 1; i <= K; i++){
		pp[0][i] = 1;
	}
	for (int i = 1; i <= n; i++){
		int sum = 0;
		for (int j = 1; j <= K; j++){
			 
		}
	}
	//pp[0][1] = 1;
	//for (int i = 1; i <= n; i++) {
	//	int sum = 0;
	//	for (int j = 1; j <= K; j++) {
	//		sum = (sum + pp[i - 1][j]) % mod;
	//	}
	//	for (int j = 1; j <= K; j++) {
	//		int invalid = 0;
	//		int p = 2;
	//		while (p*j <= K) {
	//			invalid = (invalid + pp[i - 1][p*j]) % mod;
	//			p++;
	//		}
	//		pp[i][j] = (sum - invalid + 1000000007) % mod
	//	}
	//}

	//int sum = 0;
	//for (int i = 1; i <= K; i++) {
	//	sum = (sum + pp[n][i]) % mod;
	//}
	////首先需要找出所有的组合
	//cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}