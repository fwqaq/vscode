#include <iostream>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		int sum = 0;
		for (int i = 2; i <= num; i++){
			int n = i;
			int flag1 = 0;
			int flag2 = 1;
			while (n){
				int x = n % 10;
				if (x == 2 || x == 5 || x == 6 || x == 9){
					flag1 = 1;
				}
				if (x==3||x==4||x==7){
					flag2 = 0;
					break;
				}
				n /= 10;
			}
			if (flag1 == 1 && flag2 == 1){
				sum++;
			}
		}
		cout << sum << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}