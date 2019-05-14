#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int min1 = 100000007;
		for (int i = 0; i < nums.size(); i++){
			int sum = 0;
			int size = 0;
			for (int j = i; j >= 0; j--){
				sum = sum + nums[j];
				if (sum >= s){
					size = i - j + 1;
					break;
				}
			}
			if (sum >= s){
				if (size < min1){
					min1 = size;
				}
			}
		}
		return min1;
	}
};
int main(){
	Solution s;
	vector<int>v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);

	cout << s.minSubArrayLen(7, v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}