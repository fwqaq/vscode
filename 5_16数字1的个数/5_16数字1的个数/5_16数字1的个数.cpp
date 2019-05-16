#include <iostream>
using namespace std;
class Solution {
public:
	int countDigitOne(int n) {
		int ret = 0;
		for (long long i = 1; i < n; i *= 10){
			int a = n / i, b = n%i;
			ret += (a + 8) / 10 * i + (a % 10 == 1)*(b + 1);
		}
		return ret;
	}
};
int main(){
	int num = 0;
	cin >> num;
	Solution s;
	cout << s.countDigitOne(num) << endl;
	system("pause");
	return EXIT_SUCCESS;
}