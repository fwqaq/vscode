#include <iostream>
#include <vector>
using namespace std;
int main(){
	int c, x, res = 0;
	cin >> c >> x;
	vector<int>a(c, 0);
	for (int i = 0; i < c; i++){
		cin >> a[i];
	}
	long long ans = 0, sum = 0, j = 0;
	for (int i = 0; i < c; i++){
		sum += a[i];
		if (sum >= x){
			ans += (c - i);
			while (j <= i){
				sum -= a[j];
				j++;
				if (sum >= x){
					ans += (c - i);
				}
				else{
					break;
				}
			}
		}
	}
	cout << ans << endl;
	system("pause");
	return 0;
}