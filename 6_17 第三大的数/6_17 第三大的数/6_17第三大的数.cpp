#include <iostream>
#include <vector>
#include <set>
#include <list>
using namespace std;
class Solution {
public:
	int thirdMax(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++){
			s.insert(nums[i]);
		}
		vector<int>v;
		for (auto e : s){
			v.push_back(e);
		}
		if (v.size() < 3){
			return v[v.size() - 1];
		}
		return v[v.size() - 3];
	}
	set<int>s;
};
int main(){
	Solution s;
	vector<int>v{ 3, 2, 1 };
	cout << s.thirdMax(v) << endl;;

	system("pause");
	return EXIT_SUCCESS;
}