#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	string largestNumber(vector<int>& nums) {
		vector<string>s;
		for (auto e : nums){
			s.push_back(to_string(e));
		}
		sort(s.begin(), s.end());
		string str = "";
		int flag = 0;
		for (int i = s.size()-1; i > 0; i--){
			if (s[i][0] > s[i - 1][0]||s[i].size() == s[i-1].size()){
				str += s[i];
			}
			else{
				char ch = s[i][0];
				int n = s[i - 1].size();
				if (s[i][n] >= ch){
					str += s[i];
				}
				else{
					str += s[i - 1];
	/*				if ((i - 1) == 0){
						flag = 1;
					}*/
					s[i - 1] = s[i];
				}
			}
		}
		cout << flag << endl;
		if (flag == 0){
			str += s[0];
		}
		return str;
	}
};
int main(){
	Solution s;
	vector<int>v{ 10, 2 };
	vector<int>v1{ 3, 30, 34, 5, 9 };
	cout << s.largestNumber(v) << endl;
	cout << s.largestNumber(v1) << endl;
	system("pause");
	return EXIT_SUCCESS;
}