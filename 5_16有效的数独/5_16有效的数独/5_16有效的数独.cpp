#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		int **pp = new int*[9];
		for (int i = 0; i < 9; i++){
			pp[i] = new int[9];
		}
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++){
				pp[i][j] = 0;
			}
		}
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++){
				if (board[i][j] == '.'){
					continue;
				}
				int b = board[i][j] - '0';
				if (pp[i][b - 1] == 0){
					pp[i][b - 1] = 1;
				}
				else{
					delete[]pp;
					return false;
				}
			}
		}
		//¼ì²âÐ¡·½¸ñ
		if (is_diff(board, 0, 0) && is_diff(board, 0, 3) && is_diff(board, 0, 6)
			&& is_diff(board, 3, 0) && is_diff(board, 3, 3) && is_diff(board, 3, 6)
			&& is_diff(board, 6, 0) && is_diff(board, 6, 3) && is_diff(board, 6, 6)){
			delete[]pp;
			return true;
		}
		delete[]pp;
		return false;
	}
	bool is_diff(vector<vector<char>>& borad,int x,int y){
		int* p = new int[9];
		for (int i = 0; i < 9; i++){
			p[i] = 0;
		}
		for (int i = x; i < x + 3; i++){
			for (int j = y; j < y + 3; j++){
				if (borad[i][j] == '.'){
					continue;
				}
				int b = borad[i][j] - '0';
				if (p[b] == 0){
					p[b] = 1;
				}
				else{
					delete[]p;
					return false;
				}
			}
		}
		delete[]p;
		return true;
	}
};
int main(){
	vector<vector<char>>vv;
	for (int i = 0; i < 9; i++){
		vector<char>v;
		for (int j = 0; j < 9; j++){
			char ch;
			cin >> ch;
			v.push_back(ch);
		}
		vv.push_back(v);
	}
	Solution s;
	cout<<s.isValidSudoku(vv);
	system("pause");
	return EXIT_SUCCESS;
}