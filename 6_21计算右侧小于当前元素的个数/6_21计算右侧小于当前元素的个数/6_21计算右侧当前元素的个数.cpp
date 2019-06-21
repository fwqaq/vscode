#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> countSmaller(vector<int>& nums) {
		vector<int>v;
		for (int i = 0; i < nums.size()-1; i++){
			int num = 0;
			for (int j = i + 1; j < nums.size(); j++){
				if (nums[j]>nums[i]){
					num++;
				}
			}
			v.push_back(num);
		}
		v.push_back(0);
		return v;
	}
};
int main(){
	Solution s;
	vector<int>v{ 4, 5, 6, 7, 1, 2, 3, 6, 9 };
	vector<int>vv = s.countSmaller(v);
	for (auto e : vv){
		cout << e << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}