#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		int res = 0;
		for (int fast = 0; res != fast || fast == 0;){
			res = nums[res];
			fast = nums[nums[fast]];
		}
		for (int i = 0; res != i; i = nums[i]){
			res = nums[res];
		}
		return res;
	}
};
int main(){
	Solution s;
	vector<int>v{ 1, 3, 4, 2, 2 };
	cout << s.findDuplicate(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}