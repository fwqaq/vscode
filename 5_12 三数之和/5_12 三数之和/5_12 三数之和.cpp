#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int size = nums.size();
		vector<vector<int>> results;
		if (size < 3){
			return results;
		}
		sort(nums.begin(), nums.end());
		int remember = nums[0];
		for (int i = 0; i <size - 2; i++){
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

			if (nums[i] > 0 || nums[right] < 0){
				continue;
			}
			while (left < right){

				if (nums[i] + nums[left] + nums[right]>0){
					right--;
				}
				else if (nums[i] + nums[left] + nums[right] < 0){
					left++;
				}
				else if (nums[i] + nums[left] + nums[right] == 0){
					vector<int> result;
					result.push_back(nums[i]);
					result.push_back(nums[left]);
					result.push_back(nums[right]);
					results.push_back(result);
					left++;
					right--;
					while (nums[left] == nums[left - 1] && left < right){
						left++;
					}
					while (nums[right] == nums[right + 1] && left < right){
						right--;
					}
				}
			}
		}
		return results;
	}
};
int main(){
	Solution s;
	vector<int>v;
	v.push_back(-1);
	v.push_back(0);
	v.push_back(1);
	v.push_back(-1);
	v.push_back(2);
	v.push_back(-4);
	vector<vector<int>>vv = s.threeSum(v);
	for (int i = 0; i < vv.size(); i++){
		for (int j = 0; j < vv[i].size(); j++){
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}