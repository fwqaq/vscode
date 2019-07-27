#include <iostream>
using namespace std;
class Solution {
public:
	int arr[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
	int orangesRotting(vector<vector<int>>& grid) {
		if (grid.empty()){
			return 0;
		}
		queue<pair<int, int>>q;
		int row = grid.size();
		int col = grid[0].size();
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if (grid[i][j] == 2){
					q.push(make_pair(i, j));
				}
			}
		}
		int ret = 0;
		while (!q.empty()){
			int flag = 0;
			int sz = q.size();//此时坏掉的水果
			//感染
			for (int i = 0; i < sz; i++){
				pair<int, int>pa = q.front();
				q.pop();
				int x = pa.first;
				int y = pa.second;
				//判断是个方向是不是含有1
				for (int k = 0; k < 4; k++){
					int newx = x + arr[k][0];
					int newy = y + arr[k][1];
					if (newx < 0 || newx >= row || newy < 0 || newy >= col){
						continue;
					}
					if (grid[newx][newy] == 1){
						grid[newx][newy] = 2;
						q.push(make_pair(newx, newy));
						flag = 1;
					}
				}
			}
			if (flag == 1){
				ret++;
			}
		}
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if (grid[i][j] == 1){
					return -1;
				}
			}
		}
		return ret;
	},
};