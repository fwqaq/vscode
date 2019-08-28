#include<iostream>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		int *num = new int(n);
		int sum = 0;
		for (int i = 0; i < n; i++){
			cin >> num[i];
			sum += num[i] - 1;
		}
		cout << sum << endl;
	}
	return 0;
}