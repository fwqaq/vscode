#include <iostream>
using namespace std;
class Solution {
public:
	int arr[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
	void DFS(vector<vector<char>>&grid, int row, int col, int x, int y){
		grid[x][y] = '0';
		for (int i = 0; i < 4; i++){
			int newx = x + arr[i][0];
			int newy = y + arr[i][1];
			if (newx < 0 || newx >= row || newy < 0 || newy >= col){
				continue;
			}
			if (grid[newx][newy] == '1'){
				DFS(grid, row, col, newx, newy);
			}
		}
	}
	int numIslands(vector<vector<char>>& grid) {
		if (grid.empty()){
			return 0;
		}
		int row = grid.size();
		int col = grid[0].size();
		int sum = 0;
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if (grid[i][j] == '1'){
					sum++;
					DFS(grid, row, col, i, j);
				}
			}
		}
		return sum;
	}
};