#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
		vector<vector<char>>vv;
		for (int i = 0; i < numRows; i++){
			//创建这么多的vector加入到vv里面
			vector<char>v;
			vv.push_back(v);
		}
		int flag = 0;
		for (int i = 0, j = 0; i < s.length(); i++){
			if (flag == 0){
				vv[j].push_back(s[i]);
				j++;
				if (j == numRows){
					//此时就是越界操作
					j = numRows - 1 - 1;
					flag = 1;
					continue;
				}
			}
			if (flag == 1){
				vv[j].push_back(s[i]);
				j--;
				if (j < 0){
					j = 1;
					flag = 0;
				}
			}
		}
		string str = "";
		for (int i = 0; i < vv.size(); i++){
			for (int j = 0; j < vv[i].size(); j++){
				str = str + vv[i][j];
			}
		}
		return str;
	}
};
int main(){
	Solution s;
	cout << s.convert("LEETCODEISHIRING", 3) << endl;
	system("pause");
	return EXIT_SUCCESS;
}