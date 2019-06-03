#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
		bool exist(vector<vector<char>>& board, string word) {
			if (word.size() == 0) return true;
			if (board.size() == 0 || board[0].size() == 0) return false;
			vector<bool> x(board[0].size(), false);
			vector<vector<bool>> table(board.size(), x);
			for (int i = 0; i < board.size(); ++i){
				for (int j = 0; j < board[0].size(); ++j){
					if (board[i][j] == word[0]){
						if (func(board, word, i, j, 0, table)) return true;
					}
				}
			}
			return false;
		}
		bool func(vector<vector<char>>& board, string word, int i, int j, int k, vector<vector<bool>> table){
			if (k >= word.size()){
				return true;
			}
			int m = board.size(), n = board[0].size();
			if (i < 0 || j < 0 || i >= m || j >= n || table[i][j] || board[i][j] != word[k]) return false;
			table[i][j] = true;
			bool res = func(board, word, i - 1, j, k + 1, table) ||
				func(board, word, i + 1, j, k + 1, table) ||
				func(board, word, i, j - 1, k + 1, table) ||
				func(board, word, i, j + 1, k + 1, table);
			table[i][j] = false;
			return res;
		}
};
int mian(){
	Solution s;
	vector<vector<char>>vv;
	vector<char>ch1{ 'a', 'b', 'c', 'd' };
	vector<char>ch2{ 'e', 'f', 'g', 'h' };
	vector<char>ch3{ 'i', 'j', 'k', 'l' };
	vector<char>ch4{ 'm', 'n', 'o', 'p' };
	vv.push_back(ch1);
	vv.push_back(ch2);
	vv.push_back(ch3);
	vv.push_back(ch4);
	cout << s.exist(vv, "abfj") << endl;
	system("pause");
	return 0;
}