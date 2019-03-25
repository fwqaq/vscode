#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int first = 0;
	int second = 0;
	int n_num = 0;
	for (int i = 1; i <= n; i++){
		if (i == 1){
			first = 1;
			if (n == 1){
				n_num = 1;
				break;
			}
			continue;
		}
		if (i == 2){
			second = 2;
			if (n == 2){
				n_num = 2;
				break;
			}
			continue;

		}
		n_num = first + second;
		first = second;
		second = n_num;
	}
	cout << n_num << endl;
	system("pause");
	return EXIT_SUCCESS;
}