#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		//只能向下或者向右走
		int a = grid.size();
		int b = grid[0].size();
		int** pp = new int*[a];
		for (int i = 0; i < a; i++){
			pp[i] = new int[b];
			memset(pp[i], 0, sizeof(int)*b);
		}
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				if (i == 0&&j == 0){
					pp[0][0] = grid[0][0];
					continue;
				}
				if (i == 0){
					pp[0][j] = grid[0][j] + pp[0][j - 1];
					continue;
				}
				if (j == 0){
					pp[i][0] = grid[i][0] + pp[i - 1][0];
					continue;
				}
				int min1 = pp[i - 1][j] < pp[i][j - 1] ? pp[i - 1][j] : pp[i][j - 1];
				pp[i][j] = min1 + grid[i][j];
			}
		}
		return pp[a - 1][b - 1];
	}
};
int main(){

	vector<vector<int>>vv;
	vector<int>v1{ 1, 3, 1 };
	vector<int>v2{ 1, 5, 1 };
	vector<int>v3{ 4, 2, 1 };
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	Solution s;
	cout << s.minPathSum(vv);
	system("pause");
	return EXIT_SUCCESS;
}