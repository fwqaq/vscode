#include <iostream>
using namespace std;
class Solution {
public:
	int arrangeCoins(int n) {
		int num = 0;
		int i = 1;
		while (1){
			if (n >= i){
				num++;
				n = n - i;
				i++;
			}
			else{
				break;
			}
		}
		return num;
	}
};

int main(){
	Solution s;
	cout << s.arrangeCoins(10) << endl;
	system("pause");
	return EXIT_SUCCESS;
}