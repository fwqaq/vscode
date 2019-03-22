#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int min = 100;
	int flag = 0;
	for (int i = 0; i <= n / 8 + 1; i++){
		for (int j = 0; j <= n / 6 + 1; j++){
			if (8 * i + 6 * j == n){
				if (min > i + j){
					min = i + j;
					flag = 1;
				}
			}
		}
	}
	if (flag){
		cout << min << endl;
	}
	else{
		cout << -1 << endl;
	}
	system("pause");
	return 0;
}