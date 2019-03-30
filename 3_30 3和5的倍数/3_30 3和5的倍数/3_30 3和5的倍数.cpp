#include <iostream>
using namespace std;
int main(){
	int a;
	int sum = 0;
	cin >> a;
	for (int i = 1; i < a; i++){
		if (i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}