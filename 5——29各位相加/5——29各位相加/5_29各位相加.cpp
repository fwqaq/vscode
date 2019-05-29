#include <iostream>
using namespace std;
class Solution {
public:
	int addDigits(int num) {
		while (num / 10 != 0){
			int temp = 0;
			while (num){
				temp = temp + num % 10;
				num /= 10;
			}
			num = temp;
		}
		return num;
	}
};
int main(){

	Solution s;
	cout<<s.addDigits(10);
	system("pause");
	return EXIT_SUCCESS;
}