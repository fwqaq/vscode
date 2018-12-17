#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define max 10
int main(){

	/*
	3.在屏幕上打印杨辉三角。
			1
		   1 1
		  1 2 1
		 1 3 3 1 
	*/
	int n;
	printf("输入你需要打印杨辉三角的行数,最大行数为10:");
	scanf("%d", &n);
	int arr[max] = {0};
	int arr1[max] = { 0 };
	for (int i = 1; i <= n; i++){
		arr[0] = 1;//对第一个数进行赋值
		arr[i - 1] = 1;//对最后一个数字进行赋值1
		for (int j = 1; j < i-1; j++){
			arr[j] = arr1[j - 1] + arr1[j];
		}
		//将arr中的值赋值在arr1中去
		for (int i = 0; i < 10; i++){
			arr1[i] = arr[i];
		}
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{
			if (arr[i] == 0){
				break;
			}
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}