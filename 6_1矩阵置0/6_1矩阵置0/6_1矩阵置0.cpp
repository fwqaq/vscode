#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		//给出一个m*n的矩阵，找出相关行的0
		set<int> row_vec;
		set<int> col_vec;
		for (int i = 0; i < matrix.size(); i++){
			for (int j = 0; j < matrix[0].size(); j++){
				if (matrix[i][j] == 0){
					row_vec.insert(i);
					col_vec.insert(j);
				}
			}
		}
		for (auto row : row_vec){
			for (int j = 0; j < matrix[0].size(); j++){
				matrix[row][j] = 0;
			}
		}
		for (auto col : col_vec){
			for (int i = 0; i < matrix.size(); i++){
				matrix[i][col] = 0;
			}
		}
	}
};
int main(){
	Solution s;
	vector<vector<int>>vv;
	vector<int>v1{ 1, 1, 1 };
	vector<int>v2{ 1, 0, 1 };
	vector<int>v3{ 1, 1, 1 };
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	s.setZeroes(vv);
	for (int i = 0; i < vv.size(); i++){
		for (int j = 0; j < vv[0].size(); j++){
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}