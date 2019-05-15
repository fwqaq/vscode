#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int>ret;
		//时间复杂度O(n)，空间复杂度为O(1);
		//大于等于我们的1/3,最多就只有两个数字
		int x = 0, y = 0;
		int cx = 0;
		int cy = 0;
		for (int num : nums){
			if ((cx == 0 || num == x) && num != y){
				++cx;
				x = num;//赋值
			}
			else if (cy == 0 || num == y){
				++cy;
				y = num;
			}
			else{
				--cx;
				--cy;
			}
		}//此时我们输出的就是我们最多的两个数字x,y
		int count1 = 0;
		int count2 = 0;
		for (int num : nums){
			if (num == x){
				count1++;
			}
			if (num == y){
				count2++;
			}
		}
		if (count1 > nums.size() / 3){
			ret.push_back(x);
		}
		if (count2 > nums.size() / 3){
			ret.push_back(y);
		}
		return ret;
	}
};
int main(){
	vector<int>v{ 1, 1, 1, 3, 3, 2, 2, 2};
	vector<int>vv;

	Solution s;
	vv = s.majorityElement(v);
	for (int i = 0; i < vv.size(); i++){
		cout << vv[i] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}