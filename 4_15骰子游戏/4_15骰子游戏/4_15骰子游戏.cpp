#include<iostream>
#include<random>
using namespace std;
typedef long long ll;
ll dp[30][150];///ע������һ��Ҫ��long long ��������
ll gcd(ll x, ll y)
{
	if (x%y == 0) return y;
	else return (gcd(y, x%y));
}
int main()
{
	int n, x;
	while (cin >> n >> x){
		if (x == n){ ///����Ϊ1�����
			cout << 1 << endl;
			continue;
		}
		else if (x<n || x>n * 6){///����Ϊ0�����
			cout << 0 << endl;
			continue;
		}
		else{
			///��ʼ��
			for (int i = 0; i <= n; i++){
				for (int j = 0; j <= 6 * i; j++){
					dp[i][j] = 0;
				}
			}
			for (int i = 1; i <= n; i++){ ///n��ɸ�ӣ�ѭ��n��
				for (int j = i; j <= 6 * i; j++){
					if (i == 1 || i == j || j == 6 * i){
						dp[i][j] = 1;
					}
					else{
						for (int k = 1; k <= 6; k++){
							if (j - k >= i - 1)///i-1��ɸ�ӵĽ����Χһ���Ǵ��ڵ���i-1��
								dp[i][j] += dp[i - 1][j - k];
						}
					}
				}
			}
		}
		ll sum = 0;
		ll p = 0;
		for (int i = n; i <= 6 * n; i++){
			if (i >= x){
				p += dp[n][i];
			}
			sum += dp[n][i];
		}
		ll c = gcd(p, sum);
		p /= c;
		sum /= c;
		cout << p << "/" << sum << endl;
	}
	system("pause");
	return 0;
}