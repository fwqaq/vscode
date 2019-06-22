#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> ret;
		ret.push_back({});
		int size = nums.size();
		int subsize = pow(2, size);
		int hash = 1;
		while (hash < subsize){
			vector<int> temp;
			for (int k = 0; k < size; k++) {
				int a = 1 << k;
				if (a&hash) {
					temp.push_back(nums[k]);
				}
			}
			ret.push_back(temp);
			hash++;
		}
		return ret;
	}
};
int main(){
	vector<vector<int>>vv;
	vector<int>v{ 4, 5, 6, 9 };
	Solution s;
	vv = s.subsets(v);
	for (int i = 0; i < vv.size(); i++){
		for (int j = 0; j < vv[i].size(); j++){
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}