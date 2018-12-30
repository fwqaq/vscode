#include <stdio.h>
#include <stdlib.h>
/*
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
*/
int main(){
	int arr[3][4] = { { 1, 2, 3 ,4 }, { 2, 3, 4 ,5 }, { 5, 6, 7 ,8 } };
	int num = 3;
	int left = 0;
	int top = 0;
	for (int i = 0; i < 3; i++){
		if (arr[i][0]>3){
			left = i - 1;
			break;
		}
	}
	for (int i = 0; i < 4; i++){
		if (arr[0][i]>3){
			top = i - 1;
			break;
		}
	}
	if (left >= 0 && left <= 3){
		for (int i = 0; i < 4; i++){
			if (arr[left][i] == num){
				printf("这个数字存在\n");
				break;
			}
		}
	}
	if (top >= 0 && top < 4){
		for (int i = 0; i < 3; i++){
			if (arr[top][i] == num){
				printf("这个数字存在\n");
				break;
			}
		}
	}
	system("pause");
	return 0;
}