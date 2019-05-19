#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
			if (s.empty() || s.size() <= numRows || numRows == 1)
				return s;
			string res = "";
			vector<string>  result(numRows, res);
			 int  arrsize = numRows * 2 - 2;
			 int * arr = new int[arrsize];
			int i;
			int j = 0;
			for (i = 0; i < numRows; ++i)
				result[i] = "";
			for (i = 0; i < numRows; ++i)
				arr[i] = i;
			for (i = numRows; i < arrsize; ++i)
				arr[i] = arrsize - i;
			j = 0;
			for (i = 0; i < s.size(); ++i){
				j %= (arrsize);
				result[arr[j]] += s[i];
				j++;
			}
			for (i = 0; i < numRows; ++i){
				res.append(result[i]);
				cout << result[i] << endl;
			}

			return res;
	}
};
int main(){
	Solution s;
	cout << s.convert("LEETCODEISHIRING", 3);
	system("pause");
	return EXIT_SUCCESS;
}