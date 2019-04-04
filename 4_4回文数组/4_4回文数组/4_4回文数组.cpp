#include<iostream>
#include<algorithm>
using namespace std;
int A[1000];
int dp[1000][1000];
int main(){
	int n;
	cin >> n;
	for (int i = 0, j = n - 1; i < n; i++, j--){
		cin >> A[i];
		dp[i][i] = A[i];
	}
	for (int i = n - 2; i >= 0; i--){
		for (int j = i + 1; j < n; j++){
			if (A[i] == A[j])
				dp[i][j] = dp[i + 1][j - 1] + 2 * A[i];
			else
				dp[i][j] = min(dp[i + 1][j] + 2 * A[i], dp[i][j - 1] + 2 * A[j]);
		}
	}
	cout << dp[0][n - 1] << endl;
	return 0;
}