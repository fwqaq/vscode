#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int low = -90, high = 90;
	while ((high - low) >= 5){
		int mid = (low + high) / 2;
		if (mid <= n){
			low = mid;
			cout << 1;
		}
		else{
			high = mid;
			cout << 0;
		}
	}
	return 0;
}