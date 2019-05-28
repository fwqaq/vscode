#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	void sortColors(vector<int>& nums) {
		vector<int>vv;
		vv.resize(nums.size());
		for (int i = 0; i < nums.size(); i++){
			vv[i] = -1;
		}
		int x = 0;
		int y = nums.size() - 1;
		for (int i = 0; i < nums.size(); i++){
			if (nums[i] == 0){
				vv[x++] = 0;
				continue;
			}
			if (nums[i] == 2){
				vv[y--] = 2;
			}
		}
		for (int i = 0; i < nums.size(); i++){
			if (vv[i] == -1){
				vv[i] = 1;
			}
		}
		nums = vv;
	}
};
int main(){


	system("pause");
	return EXIT_SUCCESS;
}