#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
long long getN(int n){
	long long sum = 1;
	for (int i = 2; i <= n; i++){
		sum = sum*i;
	}
	return sum ;
}
int main(){
	//假设有n个人，总的方法就是n!种方法
	

	//错排公式
	vector<long long>v;
	v.resize(21);
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	for (int i = 3; i <= 20; i++){
		v[i] = (i - 1)*(v[i - 1] + v[i - 2]);
	}
	long long count = 0;
	while (cin >> count){
		long long sum;
		sum = getN(count);
		double ret = 0;
		ret = v[count] * 1.0 / sum;
		cout << fixed << setprecision(2) << ret*100<<"%" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}