#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int max1 = 0;
		int num = 0;
		nums.push_back(0);
		for (int i = 0; i < nums.size(); i++){
			if (nums[i] == 1){
				num++;
			}
			if (nums[i] != 1){
				if (num>max1){
					max1 = num;
					num = 0;
				}
			}
		}
		return max1;
	}
};
int main(){
	Solution s;
	vector<int>v{ 1, 0, 1, 0, 1, 1, 2, 0, 1, 1, 1, 1 };
	cout << s.findMaxConsecutiveOnes(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}