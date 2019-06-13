#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2){
		if (str1.empty() && str2.empty()){
			return -1;
		}
		int lenA = str1.size();
		int lenB = str2.size();
		int **pp = new int*[lenA + 1];
		for (int i = 0; i <= lenA; i++){
			pp[i] = new int[lenB + 1];
		}
		//初始化二维数组的横轴和数轴
		for (int i = 0; i <= lenA; i++){
			pp[i][0] = i;
		}
		for (int i = 0; i <= lenB; i++){
			pp[0][i] = i;
		}
		for (int i = 1; i <= lenA; i++){
			for (int j = 1; j <= lenB; j++){
				int flag = 0;
				if (str1[i - 1] != str2[j - 1]){
					flag = 1;
				}
				pp[i][j] = min(pp[i - 1][j - 1] + flag, min(pp[i - 1][j] + 1, pp[i][j - 1] + 1));
			}
		}
		cout << pp[lenA][lenB] << endl;
	}
	return 0;
}