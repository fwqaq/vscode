#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int len(int num){
	int i = 0;
	while (num > 0){
		i++;
		num /= 10;
	}
	return i;
}
int main(){
	int arr[10001] = { 0 };
	for (int i = 1; i <= 10; i++){
		int num = 0;
		cin >> num;
		arr[i] = 1;
	}
	vector<int>v;
	for (int i = 1; i < 10001; i++){
		if (arr[i] != 1){
			v.push_back(i);
		}
		if (v.size() == 3){
			break;
		}
	}
	int le = 0;
	long long aaa = 0;
	for (int i = 2; i >= 0; i--){
		aaa = aaa*pow(10, le) + v[i];
		le += len(v[i]);
	}
	system("pause");
	return EXIT_SUCCESS;
}