#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int n = nums.size();

		int a = 1, b = 1;
		int maxVal = INT_MIN;

		for (int i = 0; i < n; ++i) {
			int aa = a * nums[i];
			int bb = b * nums[i];

			a = min(nums[i], min(aa, bb));
			b = max(nums[i], max(aa, bb));

			maxVal = max(maxVal, b);
		}
		return maxVal;
	}
};
int main(){
	Solution s;
	vector<int>v{ 0, -1, 4, -4, 5, -2, -1, -1, -2, -3, 0, -3, 0, 1, -1, -4,
				  4, 6, 2, 3, 0, -5, 2, 1, -4, -2, -1, 3, -4, -6, 0, 2, 2, 
			     -1, -5, 1, 1, 5, -6, 2, 1, -3, -6, -6, -3, 4, 0, -2, 0, 2 };
	cout << s.maxProduct(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}