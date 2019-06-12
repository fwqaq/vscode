#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b)
{
	if (a%b == 0)
		return b;
	return gcd(b, a%b);
}
int main(){
	int m, n;
	while (cin >> m >> n){
		vector<int>v;
		for (int i = 0; i < m; i++){
			int num = 0;
			cin >> num;
			v.push_back(num);
		}
		for (int i = 0; i < v.size(); i++){
			if (n >= v[i]){
				n = n + v[i];
			}
			else{
				n += gcd(n, v[i]);
			}
		}
		cout << n << endl;
	}
	system("pause");
	return 0;
}