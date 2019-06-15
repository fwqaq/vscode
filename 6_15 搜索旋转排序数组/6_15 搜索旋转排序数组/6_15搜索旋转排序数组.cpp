#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int len(nums.size());
		if (nums.empty())
			return -1;
		if (nums[0] == target)
			return 0;
		if (nums[0] < target) {
			for (int i(0); i < len - 1; ++i) {
				if (nums[i] == target) {
					return i;
				}
				else if (nums[i] < nums[0]) {
					return -1;
				}
			}
		}
		if (nums[len - 1] >= target) {
			for (int i(len - 1); i > 0; --i) {
				if (nums[i] == target) {
					return i;
				}
				else if (nums[i] > nums[len - 1]) {
					return -1;
				}
			}
		}
		return -1;
	}
};
int main(){

	Solution s;
	vector<int>v{ 8, 9, 1, 2, 3, 5, 6 };
	cout << s.search(v, 5) << endl;
	system("pause");
	return 0;
}