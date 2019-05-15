#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string>s;
		if (nums.empty()){
			return s;
		}
		if (nums.size() == 1){
			s.push_back(to_string(nums[0]));
			return s;
		}
		int post = 0;
		for (int i = 0; i < nums.size() - 1; i++){
			int start = nums[i];
			int end = nums[i];
			while (i < (nums.size() - 1)&&(nums[i] + 1) == nums[i + 1]){
				post = i + 1;
				end++;
				i++;
			}
			string str = "";
			if (start == end){
				str = to_string(start);
			}
			else{
				str = to_string(start);
				str += "->";
				str += to_string(end);
			}
			s.push_back(str);
		}
		//需要判断最后一个数字
		if (post != nums.size()-1){
			s.push_back(to_string(nums[nums.size() - 1]));
		}
		return s;
	}
};
int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(7);
	//v.push_back(8);
	Solution s;
	vector<string>str;
	str = s.summaryRanges(v);
	for (int i = 0; i < str.size(); i++){
		cout << str[i] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}