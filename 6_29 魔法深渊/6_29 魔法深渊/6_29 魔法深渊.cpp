#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<long long> v;
	v.resize(1001, 0);
	int arr[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	v[0] = 1;
	for (int i = 1; i <= 1000; i++){
		for (int j = 0; j < 10&&i>=arr[j];++j){
			v[i] += v[i - arr[j]];
			v[i] %= (1000000000 + 3);
		}
	}
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		cout << v[num] << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}