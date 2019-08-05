#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long f(long x){
	if (x == 0)
		return 0;
	if (x == -1)
		return -1;
	long ans = 0;
	for (long n = 1;; n++){
		if (4 * n*(n + 1) >= x){
			ans = (4 * n + 6)*n / 2;        //偶数的个数;
			ans = ans - std::min((long)(4 * n*(n + 1) - x), (long)(4 * n + 1));
			break;
		}
	}
	return ans;
}
int main(){
	long a, b;
	cin >> a >> b;
	cout << f(b) - f(a - 1) << endl;
	return 0;
}