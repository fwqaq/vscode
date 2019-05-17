#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		if (matrix.empty()){
			return false;
		}
		int heng = matrix.size() - 1;
		int zong = matrix[0].size() - 1;
		int i = 0; int j = zong;
		while (i <= heng&&j >= 0){
			if (matrix[i][j] == target){
				return true;
			}
			if (matrix[i][j] > target){
				j--;
			}
			if (matrix[i][j] < target){
				i++;
			}
		}
		return false;
	}
};
int main(){
	vector<vector<int>>vv;
	vector<int>v1{ -10,-9,-5 };
	//vector<int>v2{ 2, 5, 8, 12, 19 };
	//vector<int>v3{ 3, 6, 9, 16, 22 };
	//vector<int>v4{ 10, 13, 14, 17, 24 };
	//vector<int>v5{ 18, 21, 23, 26, 30 };
	//vector<int>v6{ 19, 26, 45, 89, 90 };
	vv.push_back(v1);
	//vv.push_back(v2);
	//vv.push_back(v3);
	//vv.push_back(v4);
	//vv.push_back(v5);
	//vv.push_back(v6);
	Solution s;;
	cout << s.searchMatrix(vv, -10) << endl;
	system("pause");
	return EXIT_SUCCESS;
}