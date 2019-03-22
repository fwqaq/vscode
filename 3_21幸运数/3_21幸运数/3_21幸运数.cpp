#include <iostream>

using namespace std;
int sum = 0;
int a;
int b;
void DSF(int i){
	if (i > 1000000000||i>b){
		return;
	}
	else{
		if (i >= a){
			sum++;
		}
		DSF(i * 10 + 6);
		DSF(i * 10 + 8);
	}
}
int main(){
	//
	cin >> a >> b;
	if (a >= 1 && b <= 1000000000){
		DSF(6);
		DSF(8);
		cout << sum << endl;
	}
	else{
		cout << -1 << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}