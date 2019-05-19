#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>v;
		int a = 0;
		int b = 0;
		for (int i = 0; i < nums.size(); i++){
			int x = target - nums[i];
			a = i;
			for (int j = i + 1; j < nums.size(); j++){
				if (nums[j] == x){
					b = j;
					v.push_back(a);
					v.push_back(b);
					return v;
				}
			}
		}
		return v;
	}
};
int main(){

	Solution s;
	vector<int>v{ 2, 7, 11, 15 };
	vector<int>vv = s.twoSum(v, 9);
	for (auto a : vv){
		cout << a << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}