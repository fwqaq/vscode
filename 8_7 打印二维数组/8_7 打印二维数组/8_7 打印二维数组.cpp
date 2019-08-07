#include <iostream>
#include <vector>
using namespace std;
int main(){

	int a = 0;
	int b = 0;
	while (cin >> a >> b){
		vector<vector<int>>v(a, vector<int>(b, 0));
		int count = 1;
		for (int i = 0; i < b; i++){
			int x = 0;
			int y = i;
			while (x < a&&y >= 0){
				v[x][y] = count;
				count++;
				x++;
				y--;
			}
		}
		for (int j = 0; j < a; j++){
			int x = j;
			int y = b - 1;
			while (x < a&&y >= 0){
				v[x][y] = count;
				count++;
				x++;
				y--;
			}
		}

		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}


	}

	system("pause");
	return 0;
}