#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

#define ll long long

ll gcd(ll a, ll b){
	return b == 0 ? a : gcd(b, a%b);
}

int main(){
	int n;
	while (~scanf("%d", &n)){
		ll res = 1;
		int a, b;
		scanf("%d%d", &a, &b);
		res *= (ll)a*b;
		for (int i = 1; i < n; i++){
			scanf("%d%d", &a, &b);
			ll tmp = (ll)a*b;
			res = gcd(res, tmp);
		}
		if (res == 1) puts("-1");
		else{
			int ans = 2;
			for (int num = 2; res != 1; num++){
				if (res%num == 0){
					ans = num;
					do{
						res /= num;
					} while (res%num == 0);
				}
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}