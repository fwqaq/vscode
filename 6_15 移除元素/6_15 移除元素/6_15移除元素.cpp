#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int n = nums.size();
		int res = 0;
		for (int i = 0; i < n - res; i++)
		{
			if (nums[i] == val){
				for (int j = i; j < n - 1; j++) nums[j] = nums[j + 1];
				res++;
				i--;
			}
			else continue;
		}
		return n - res;
	}
};
int main(){
	Solution s;
	vector<int>v{ 4, 5, 6, 9, 3, 2 };
	cout<<s.removeElement(v, 2);

	system("pause");
	return 0;
}