#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int m, n;
	while (cin >> m >> n){
		vector<int>v;
		for (int i = 0; i < m + n; i++){
			int num = 0;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < m + n; i++){
			if (i == m + n - 1){
				cout << v[i] << endl;
				break;
			}
			cout << v[i] << " ";
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}