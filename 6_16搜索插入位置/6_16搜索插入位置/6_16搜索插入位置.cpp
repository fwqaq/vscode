#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target)
	{
		if (nums.size() == 0) return 0;
		int left = 0;
		int right = nums.size() - 1;
		while (left <= right)
		{
			int mid = left + ((right - left) >> 1);
			if (nums[mid] >= target)
				right = mid - 1;
			else
				left = mid + 1;
		}
		return right + 1;
	}
};

int main(){
	Solution s;
	vector<int>v{ 4, 5, 6, 9 };

	cout << s.searchInsert(v, 7) << endl;;
	system("pause");
	return 0;
}