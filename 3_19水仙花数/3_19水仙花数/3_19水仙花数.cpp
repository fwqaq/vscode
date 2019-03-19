#include <iostream>
#include <cmath>
using namespace std;
bool is_sxh(int i){
	int sum = 0;
	int x = i;
	while (i){
		sum += pow(i % 10, 3);
		i /= 10;
	}
	return (x == sum);
}
int main(){
	int m;
	int n;
	while (cin >> m >> n){
		int flag = 0;
		for (int i = m; i <= n; i++){
			if (is_sxh(i)){
				cout << i << " ";
				flag = 1;
			}
		}
		if (flag == 0){
			cout << "no";
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}