#include <iostream>
using namespace std;
int main(){
	int n = 0;
	while (cin >> n){
		//n��λ�õĵط�
		int sum = n / 5;
		if (n % 5 != 0){
			sum += 1;
		}
		cout << sum << endl;
	}

	return 0;
}