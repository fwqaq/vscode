#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
class Bonus {
public:
	int getMost(vector<vector<int>> board) {
		// write code here
		int**p = new int*[6];
		for (int i = 0; i < 6; i++){
			p[i] = new int[6]{0};
		}
		for (int i = 0; i < 6; i++){
			if (i == 0){
				p[0][i] = board[0][i];
			}
			p[0][i] = p[0][i - 1] + board[0][i];
		}
		for (int i = 1; i < 6; i++){
			p[i][0] = p[i - 1][0] + board[i][0];
		}
		for (int i = 1; i < 6; i++){
			for (int j = 1; j < 6; j++){
				p[i][j] = max(p[i - 1][j] + board[i][j], p[i][j - 1] + board[i][j]);
			}
		}
		return p[5][5];
	}
};