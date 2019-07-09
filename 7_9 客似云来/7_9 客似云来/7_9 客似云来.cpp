// write your code here cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<long long>v;
	v.resize(81);
	v[1] = 1;
	v[2] = 1;
	for (int i = 3; i <= 80; ++i){
		v[i] = v[i - 1] + v[i - 2];
	}
	int from = 0;
	int to = 0;
	while (cin >> from >> to){
		long long  ret = 0;
		for (int i = from; i <= to; i++){
			ret = ret + v[i];
		}
		cout << ret << endl;
	}

	system("pause");
	return 0;
}