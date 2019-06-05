#include <iostream>
#include <cmath>
using namespace std;
bool is_true(int num){
	int sum = 1;
	for (int i = 2; i <= sqrt(num); i++){
		if (num%i == 0){
			if (i == sqrt(num))
				sum = sum + i;
			else
				sum = sum + i + num / i;
		}
	}
	if (sum == num){
		return true;
	}
	return false;
}
int main(){
	int num = 0;
	while (cin >> num){
		int ret = 0;
		for (int i = 2; i <= num; i++){
			if (is_true(i)){
				ret++;
			}
		}
		cout << ret << endl;
	}

	return 0;
}