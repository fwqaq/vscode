#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int num = 0;
	while (cin >> num){
		if (num == 0){
			cout << 0 << endl;
			continue;
		}
		int a = 0;
		int b = 1;
		while (b < num){
			b = a + b;
			a = b - a;
		}
		cout << std::min(b - num, num - a) << endl;
	}
	system("pause");
	return 0;
}