#include <iostream>
using namespace std;
int main(){
	int a = 0;
	while (cin >> a){
		int p[32]{0};
		for (int i = 0; i < 32; i++){
			if (i == 0){
				p[0] = a & 1;
			}
			else {
				if (a & 1 == 1){
					p[i] = p[i - 1] + 1;
				}
			}
			a = a >> 1;
			if (a == 0){
				break;
			}
		}
		int max1 = p[0];
		for (int i = 0; i < 32; i++){
			if (max1 < p[i]){
				max1 = p[i];
			}
		}
		cout << max1 << endl;
	}

	return 0;
}