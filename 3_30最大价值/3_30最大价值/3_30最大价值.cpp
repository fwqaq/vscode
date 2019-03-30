#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int W = 12;//总重量
	int N;//总的数量
	cin >> W;
	int w[] = { 4, 7, 3, 5, 4, 2 };//每一个的重量
	int v[] = { 4, 7, 3, 5, 4, 1 };//每一个的价值
	int arr[6][12] = { 0 };
	for (int i = 0; i < W; i++){
		for (int j = 0; j < 6; j++){
			if (j == 0 && w[j]>i){
				arr[i][0] == v[0];
			}
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}