#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_sushu(int num){
	if (num<10){
		return true;
	}
	vector<int>v;
	while (num > 0){
		v.push_back(num % 10);
		num /= 10;
	}
	int len = v.size();
	for (int i = 0, j = len - 1; i < j; i++, j--){
		if (v[i] != v[j]){
			return false;
		}
	}
	return true;
}
bool is_hw(int num){
	if (num == 3 || num == 5 || num == 7 ){
		return true;
	}
	if (num == 1){
		return false;
	}
	int i = 2;
	for (i = 2; i <= sqrt(num); i++){
		if (num%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int right;
	int left;
	cin >> right >> left;
	int count = 0;
	for (int i = right; i <= left; i++){
		if (is_sushu(i)&&is_hw(i)){
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	return EXIT_SUCCESS;
}