#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		if (matrix.empty() || matrix[0].empty()) return{};
		vector<int> res;
		int m = matrix.size(), n = matrix[0].size();
		// 确定上下左右四条边的位置
		int up = 0, down = m - 1, left = 0, right = n - 1;
		while (true)
		{
			for (int i = left; i <= right; i++) res.push_back(matrix[up][i]);
			if (++up > down) break;
			for (int i = up; i <= down; i++) res.push_back(matrix[i][right]);
			if (--right < left) break;
			for (int i = right; i >= left; i--) res.push_back(matrix[down][i]);
			if (--down < up) break;
			for (int i = down; i >= up; i--) res.push_back(matrix[i][left]);
			if (++left > right) break;
		}
		return res;
	}
};
int main(){
	vector<vector<int>>vv;
	vector<int>v1{ 1, 2, 3 };
	vector<int>v2{ 4, 5, 6 };
	vector<int>v3{ 7, 8, 9 };
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	Solution s;
	vector<int>v = s.spiralOrder(vv);
	for (int i = 0; i < v.size(); i++){
		cout << v[i];
	}
	system("pause");
	return EXIT_SUCCESS;
}