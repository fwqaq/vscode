#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> nums;
bool isPrime(int x){
	if (x == 1) return false;
	for (int i = 2; i*i <= x; i++){
		if (x%i == 0) return false;
	}
	return true;
}
void init(){
	for (int i = 1; i <= 10000; i++){
		if (isPrime(i)){
			int tmp = i;
			while (tmp <= 10000){
				nums.push_back(tmp);
				tmp *= i;
			}
		}
	}
	sort(nums.begin(), nums.end());
}
int count(int n){
	if (n <= 1) return 0;
	int l = 0, r = nums.size() - 1;
	while (l<r){
		int m = (l + r + 1) / 2;
		if (nums[m] == n) return m + 1;
		else if (nums[m]>n) r = m - 1;
		else l = m;
	}
	return l + 1;
}
int main(){
	int n;
	cin >> n;
	init();
	cout << count(n) << endl;
	return 0;
}