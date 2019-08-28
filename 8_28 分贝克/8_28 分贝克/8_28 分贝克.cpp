#include <iostream>
using namespace std;
// 计算妞妞是否能拿到一半的贝壳
bool m_get_more_shell(long long n, long long m, long long msum, long long nsum){
	if (m > n){
		return msum + n >= nsum;
	}
	msum += m;
	nsum += (n - m) / 10;
	long long left_shells = (n - m) - (n - m) / 10;
	return m_get_more_shell(left_shells, m, msum, nsum);
}
int main(){
	long long n;
	while (cin >> n){
		long long left = 0;
		long long right = (n + 1) / 2;
		while (left != right - 1){ // m取left个正好拿不到一半，m取right个正好能拿到一半
			long long mid = (left + right) / 2;
			if (m_get_more_shell(n, mid, 0, 0)){
				right = mid;
			}
			else{
				left = mid;
			}
		}
		cout << right << endl;
	}
	return 0;
}
