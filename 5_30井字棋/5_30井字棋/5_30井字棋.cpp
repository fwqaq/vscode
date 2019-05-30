#include <iostream>
#include <vector>
using namespace std;
class Board {
public:
	bool checkWon(vector<vector<int>> board) {
		// write code here
		for (int i = 0; i < 3; i++){
			if (board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1){
				return true;
			}
		}
		for (int j = 0; j < 3; j++){
			if (board[0][j] == 1 && board[1][j] == 1 && board[2][j] == 1){
				return true;
			}
		}
		if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1){
			return true;
		}
		if (board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 1){
			return true;
		}
		return false;
	}
};
int main(){
	vector<vector<int>>vv;
	vector<int>v1{ 1, 0, 1 };
	vector<int>v2{ 1, -1, -1 };
	vector<int>v3{ 1, -1, 0 };
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	Board b;
	cout << b.checkWon(vv);
	system("pause");
	return EXIT_SUCCESS;
}