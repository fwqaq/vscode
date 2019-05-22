#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int>s;
		for (int i = 0; i < nums.size(); i++){
			s.insert(nums[i]);
		}
		if (s.size() == nums.size()){
			return false;
		}
		return true;

	}
};
int main(){
	vector<int>v{ 1, 2, 3, 4 };
	Solution s;
	cout << s.containsDuplicate(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}