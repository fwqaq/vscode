#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1 = "1A2C3D4B56";
	string str2 = "B1D23CA45B6A"; 
	int arr[10][12] = { 0 };
	//先设置第一行
	if (str1[0] == str2[0])
		arr[0][0] = 1;
	int max = 0;
	for (int i = 0; i < str1.length(); i++){
		for (int j = 0; j < str2.length(); j++){
			 max = 0;
			if (arr[i - 1][j]>max&&i - 1 >= 0){
				//找到三个方向中的最大值，选择最大值进行赋值。
				max = arr[i - 1][j];
			}
			if (arr[i][j - 1]>max&&j - 1 >= 0)
				max = arr[i][j - 1];
			if (arr[i - 1][j - 1] > max&&i - 1 >= 0 && j - 1 >= 0){
				max = arr[i - 1][j - 1];
			}
			if (str2[j] == str1[i]){
				arr[i][j] = max + 1;
			}
			else{
				arr[i][j] = max;
			}
		}
	}
	cout << max << endl;
	system("pause");
	return EXIT_SUCCESS;
}