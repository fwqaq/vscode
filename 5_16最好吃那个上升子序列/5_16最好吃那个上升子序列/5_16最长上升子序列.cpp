#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		if (nums.size() == 0){
			return 0;
		}
		int ans = 1;
		vector<int> dp(nums.size(), 1);
		for (int i = 0; i < nums.size(); i++){
			for (int j = 0; j < i; j++){
				if (nums[j] < nums[i]){
					dp[i] = max1(dp[i], dp[j] + 1);
				}
				ans = max1(dp[i], ans);
			}
		}
		return ans;
	}
	int max1(int a, int b){
		return a>b ? a : b;
	}
};
int main(){
	vector<int>v{ 10, 9, 2, 5, 3, 7, 101, 18 };
	Solution s;
	cout << s.lengthOfLIS(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}