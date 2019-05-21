#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0){
			return 0;
		}
		int flag = 0;
		int start = 0;
		for (int i = 0; i < nums.size()-1; i++){
			int num = 1;
			int aa = nums[i];
			if (i < nums.size() - 1 && nums[i] == nums[i + 1]){
				while (i < nums.size() - 1 && nums[i] == nums[i + 1]){
					num++;
					if (i + 1 == nums.size() - 1){
						flag = 1;
					}
					i++;
				}
			}
			if (num >= 2){
				nums[start++] = aa;
				nums[start++] = aa;// 1  1  1  1
			}
			else{
				nums[start++] = aa;
			}
		}
		if (flag == 0){
			nums[start++] = nums[nums.size() - 1];
		}
		return start;
	}
};
int main(){
	vector<int>v{ 0, 0, 1, 1, 1, 1, 2, 3, 3 };
	Solution s;
	cout << s.removeDuplicates(v) << endl;

	system("pause");
	return EXIT_SUCCESS;
}