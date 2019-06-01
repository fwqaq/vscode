#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int  uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
		vector<vector<int>> path = obstacleGrid;
		for (int i = 0; i < path.size(); i++)
		for (int j = 0; j < path[0].size(); j++)
			path[i][j] = 0;
		int t = 0;
		while (t < path.size() && obstacleGrid[t][0] == 0)
		{
			path[t][0] = 1;
			t++;
		}
		t = 0;
		while (t < path[0].size() && obstacleGrid[0][t] == 0)
		{
			path[0][t] = 1;
			t++;
		}
		for (int i = 1; i < path.size(); i++)
		for (int j = 1; j < path[0].size(); j++)
		if (obstacleGrid[i][j] == 0)
			path[i][j] = (long long)path[i - 1][j] + path[i][j - 1];
		return path[path.size() - 1][path[0].size() - 1];
	}
};
int main(){

	Solution s;
	vector<int>v1{ 0, 0, 0 };
	vector<int>v2{ 0, 1, 0 };
	vector<int>v3{ 0, 0, 0 };
	vector<int>v4{ 0, 0, 0 };
	vector<vector<int>>vv{ v1, v2, v3, v4 };
	cout << s.uniquePathsWithObstacles(vv);
	system("pause");
	return EXIT_SUCCESS;
}

