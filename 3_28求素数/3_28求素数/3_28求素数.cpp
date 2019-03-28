#include <iostream>
#include <cmath>
using namespace std;
bool is_hui(int a){
	for (int i = 2; i <= sqrt(a); i++){
		if (a%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	int sum = 0;
	for (int i = a; i <= b; i++){
		if (is_hui(i)){
			sum++;
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}