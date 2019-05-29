#include <iostream>
using namespace std;
class Solution {
public:
	bool isHappy(int n) {
		if (n == 1) return true;
		int happynum = n;
		int count = 0;
		while (happynum != 1 && count < 10){   //当循环10次后还没有变为1，就返回false，不然无限循环会超时
			int temp = 0;
			while (happynum != 0){
				temp += (happynum % 10)*(happynum % 10);
				happynum = happynum / 10;
			}
			happynum = temp;
			count++;
			if (happynum == 1) return true;
		}
		return false;
	}
};
int main(){

	Solution s;
	cout << s.isHappy(19) << endl;
	system("pause");
	return EXIT_SUCCESS;
}