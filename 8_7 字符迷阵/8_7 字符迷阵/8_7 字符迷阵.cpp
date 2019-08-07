#include <iostream>
#include <string>
#include <vector>
using namespace std;
int getnum(vector<vector<char>>&v, string &str, int x, int y){
	int row = v.size();
	int col = v[0].size();
	int z = 0;
	while (x < row&&y < col&&z < str.size()){
		if (v[x++][y] != str[z++]){
			return 0;
		}
	}
	if (z == str.size()){
		return 1;
	}
	return 0;
}
int getnum1(vector<vector<char>>&v, string &str, int x, int y){
	int row = v.size();
	int col = v[0].size();
	int z = 0;
	while (x < row&&y < col&&z < str.size()){
		if (v[x][y++] != str[z++]){
			return 0;
		}
	}
	if (z == str.size()){
		return 1;
	}
	return 0;
}
int getnum2(vector<vector<char>>&v, string &str, int x, int y){
	int row = v.size();
	int col = v[0].size();
	int z = 0;
	while (x < row&&y < col&&z < str.size()){
		if (v[x++][y++] != str[z++]){
			return 0;
		}
	}
	if (z == str.size()){
		return 1;
	}
	return 0;
}
int main(){
	int num = 0;
	cin >> num;
	while (num--){
		int a = 0;
		int b = 0;
		cin >> a >> b;
		vector<vector<char>>v(a, vector<char>(b));
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				cin >> v[i][j];
			}
		}
		string str;
		cin >> str;
		int ret = 0;
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				if (str[0] == v[i][j])
					ret = ret + getnum(v, str, i, j) + getnum1(v, str, i, j) + getnum2(v, str, i, j);
			}
		}
		cout << ret << endl;
	}


	system("pause");
	return 0;
}