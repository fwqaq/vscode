#include <stdio.h>
#include <stdlib.h>
int main(){

	/*
	//杨氏矩阵
	有一个二维数组.
	数组的每行从左到右是递增的，每列从上到下是递增的.
	在这样的数组中查找一个数字是否存在。
	时间复杂度小于O(N); 
	*/
	int arr[3][3] = { 1, 2, 3, 
					  4, 5, 6, 
					  7, 8, 9 };
	int num = 2;
	int n = 0;
	for (int i = 0; i < 2; i++){
		if (arr[i][0]>=num&&arr[i + 1][0] < num){
			n = i;
			break;
		}
	}
	for (int i = 0; i < 3; i++){
		if (arr[n][i] == num){
			printf("这个数存在\n");
			break;
		}
	}
	system("pause");
	return 0;
}