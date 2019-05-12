#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>
using namespace std;
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		//最接近的数字
		int size = nums.size();
		if (size < 3){
			return 0;
		}
		sort(nums.begin(), nums.end());
		int nearest = 0;
		int distance = 99999;
		int remember = nums[0];
		for (int i = 0; i < size - 2; i++){
			if (i > 0){
				if (nums[i] == remember){
					continue;
				}
				else{
					remember = nums[i];
				}
			}
			int left = i + 1;
			int right = size - 1;
			while (left<right){
				int sum = nums[i] + nums[left] + nums[right];
				if (sum == target){
					return sum;
				}
				else if (sum>target){
					if (sum - target < distance){
						nearest = sum;
						distance = sum - target;
					}
					right--;
				}
				else if (sum < target){
					if (target - sum < distance){
						nearest = sum;
						distance = target - sum;
					}
					left++;
				}
			}
		}
		return nearest;
		
	}
};
int main(){
	vector<int>v;
	v.push_back(-1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-4);
	Solution s;
	cout << s.threeSumClosest(v, 1) << endl;
	system("pause");
	return EXIT_SUCCESS;
}