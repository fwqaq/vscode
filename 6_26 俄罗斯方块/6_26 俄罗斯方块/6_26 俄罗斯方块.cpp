#include <iostream>
#include <vector>
using namespace std;
int main(){

	int n = 0;
	int m = 0;
	while (cin >> n >> m){
		//n是行数，m是个数
		vector<int>v;
		v.resize(n);
		for (int i = 0; i < n; i++){
			v[i] = 0;
		}
		for (int i = 0; i < m; i++){
			int num = 0;
			cin >> num;
			v[num - 1]++;
		}
		int min1 = v[0];
		for (int i = 0; i < n; i++){
			if (v[i] < min1){
				min1 = v[i];
			}
		}
		cout << min1 << endl;
	}

	system("pause");
	return 0;
}