#include <iostream>
#include <cmath>
using namespace std;
bool is_Shushu(int num){
	for (int i = 2; i <= sqrt(num); i++){
		if (num%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 2; i <= n; i++){
		if (is_Shushu(i)){
			sum++;
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}