#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cin >> a >> b;
	int sum = 0;
	while (a != 0 || b != 0){
		if ((a & 1) != (b & 1)){
			sum++;
		}
		a = a >> 1;
		b = b >> 1;
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}