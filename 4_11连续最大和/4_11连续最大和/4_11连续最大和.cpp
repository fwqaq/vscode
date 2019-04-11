#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	int *arr = new int[n];
	arr[0] = v[0];
	for (int i = 1; i < n; i++){
		if (arr[i - 1] < 0){
			arr[i] = v[i];
			continue;
		}
		arr[i] = v[i] + arr[i - 1];
	}
	int max = 0;
	for (int i = 0; i < n; i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}