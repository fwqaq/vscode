#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int rob(vector<int>& nums) {
		//nums的长度决定了我们能够偷取的最多数量的用户
		int len = nums.size();
		//偷第一个房子，都最后一个房子，第一个和最后一个都不偷
		int sum1 = 0;
		for (int i = 0; i < nums.size() - 1; i+=2){
			sum1 += nums[i];
		}
		int sum2 = 0;
		for (int i = nums.size() - 1; i>0; i -= 2){
			sum2 += nums[i];
		}
		//特殊情况，只取中间的数字
		int sum3 = 0;
		for (int i = 1; i < nums.size() - 1; i+=2){
			sum3 += nums[i];
		}
		//取出三个数字的最大值
		int max1 = 0;
		max1 = sum1>sum2 ? sum1 : sum2;
		max1 = sum3 > max1 ? sum3 : max1;
		return max1;
	}
};
int main(){
	Solution s;
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	cout << s.rob(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}