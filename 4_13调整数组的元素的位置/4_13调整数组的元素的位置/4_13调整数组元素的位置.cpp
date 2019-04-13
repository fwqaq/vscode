#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		//找到第一个偶数的下标
		int fir = 0;
		for (int i = 0; i < array.size(); i++){
			if (array[i] % 2 == 0){
				fir = i;
				break;
			}
		}
		for (int i = fir; i<array.size(); i++){
			if (array[i] % 2 != 0){
				//此时需要我们将奇数移动到我们的fir上去
				int ret = array[i];
				int j = 0;
				for (j = i; j > fir; j--){
					array[j] = array[j - 1];
				}
				array[j] = ret;
				fir++;
			}
		}
	}
};