#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		if (nums.size() < 1)
			return false;
		if (k == 0)
			return false;
		int j = 0;
		unordered_set<int> record;
		while (j < nums.size()){
			if (record.find(nums[j]) != record.end())
				return true;
			record.insert(nums[j]);
			if (record.size() == k + 1)
				record.erase(nums[j - k]);
			j++;
		}
		return false;
	}
};
int main(){
	vector<int>v{ 99, 99 };
	int k = 2;
	Solution s;
	cout << s.containsNearbyDuplicate(v, k) << endl;
	system("pause");
	return EXIT_SUCCESS;
}