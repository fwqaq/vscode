#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<long long>v;
	v.resize(91);
	v[1] = 1;
	v[2] = 2;
	for (int i = 3; i <= 90; i++){
		v[i] = v[i - 1] + v[i - 2];
	}
	int num = 0;
	while (cin >> num){
		cout << v[num] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}