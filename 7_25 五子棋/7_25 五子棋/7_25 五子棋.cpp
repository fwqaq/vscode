// write your code here cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int getnum(int x, int y, char ch, vector<vector<char>>&v){
	int num = 0;
	//ºáÏò
	int a = x;
	while (a >= 0){
		if (v[a][y] == ch){
			num++;
			a--;
		}
		else{
			break;
		}
	}
	a = x;
	while (a < 20){
		if (v[a][y] == ch){
			num++;
			a++;
		}
		else{
			break;
		}
	}
	num -= 1;
	if (num >= 5){
		return num;
	}
	num = 0;
	//×ÝÏò
	a = y;
	while (a >= 0){
		if (v[x][a] == ch){
			num++;
			a--;
		}
		else break;
	}
	a = y;
	while (a < 20){
		if (v[x][a] == ch){
			num++;
			a++;
		}
		else break;
	}
	if (num >= 6){
		return num - 1;
	}
	num = 0;
	a = x;
	int b = y;
	while (a >= 0 && b >= 0){
		if (v[a][b] == ch){
			num++;
			a--;
			b--;
		}
		else break;
	}
	a = x; b = y;
	while (a < 20 && b < 20){
		if (v[a][b] == ch){
			num++;
			a++;
			b++;
		}
		else break;
	}
	if (num >= 6){
		return num - 1;
	}
	num = 0;
	a = x;
	b = y;
	while (a < 20 && b >= 0){
		if (v[a][b] == ch){
			num++;
			a++;
			b--;
		}
		else break;
	}
	a = x; b = y;
	while (a >= 0 && b < 20){
		if (v[a][b] == ch){
			num++;
			a--;
			b++;
		}
		else
		{
			break;
		}
	}
	if (num >= 6){
		return num - 1;
	}
	return 0;
}
int getString(vector<vector<char>>&v){
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			if (v[i][j] == '*' || v[i][j] == '+'){
				int num = getnum(i, j, v[i][j], v);
				if (num >= 5){
					return 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	int n = 10;
	while (n--){
		vector<vector<char>>v(20, vector<char>(20, 0));
		for (int i = 0; i < 20; i++){
			for (int j = 0; j < 20; j++){
				cin >> v[i][j];
			}
		}
		if (getString(v) == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}