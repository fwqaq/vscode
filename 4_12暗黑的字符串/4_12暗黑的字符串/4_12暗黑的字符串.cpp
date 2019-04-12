#include <iostream>
using namespace std;
int main(){
	int num;
	while (cin >> num){
		int *p = new int[num];
		if (num == 1){
			cout << 3 << endl;
			continue;
		}if (num == 2){
			cout << 9 << endl;
			continue;
		}
		p[0] = 3;
		p[1] = 9;
		for (int i = 2; i < num; i++){
			p[i] = 2*p[i - 1] + p[i - 2];
		}
		cout << p[num-1] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}