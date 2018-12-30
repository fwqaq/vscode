/*
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
#include <stdio.h>
#include <stdlib.h>
void ex(int *pi, int *pj){
	int p;
	p = *pi;
	*pi = *pj;
	*pj = p;
}
void change(int arr[], int number){
	for (int i = 0; i < number; i++){
		for (int j = i; j < number; j++){
			if (arr[j] % 2 != 0){//是奇数的是
				ex(&arr[i], &arr[j]);
			}
		}
	}
}

int main(){
	int arr[] = { 2, 5, 6, 7, 8, 4, 9, 5 };
	int count = sizeof(arr) / sizeof(arr[0]);
	change(arr, count);
	for (int i = 0; i < count; i++){
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}