#include <iostream>
#include <vector>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		vector<int>v1;
		vector<int>v2;
		v1.resize(num);
		v2.resize(num, 1);
		for (int i = 0; i < num; i++){
			cin >> v1[i];
		}
		for (int i = 1; i<num; i++){
			if (v1[i]>v1[i - 1]){
				v2[i] = v2[i - 1] + 1;
			}
		}
		for (int i = num - 2; i >= 0; i--){
			if (v1[i]>v1[i + 1] && v2[i] <= v2[i + 1]){
				v2[i] = v2[i + 1] + 1;
			}
		}
		int sum = 0;
		for (int i = 0; i < num; i++){
			sum += v2[i];
		}
		cout << sum << endl;
	}

	return 0;
}