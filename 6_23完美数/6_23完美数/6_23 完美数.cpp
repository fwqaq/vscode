#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
	bool checkPerfectNumber(int num) {
		if (num == 1){
			return false;
		}
		int sum = 0;
		int i = 2;
		for (; i <sqrt(num); i++) {
			if (num % i == 0) {
				sum += i;
				sum += num / i;
			}
		}
		if (i * i == num){
			sum += i;
		}
		sum += 1;
		return sum == num ? true : false;
	}
};
int main(){
	Solution s;
	cout << s.checkPerfectNumber(28) << endl;
	system("pause");
	return EXIT_SUCCESS;
}