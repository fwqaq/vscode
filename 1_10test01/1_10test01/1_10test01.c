#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
	1.一个数组中只有两个数字是出现一次，
	其他所有数字都出现了两次。
	找出这两个数字，编程实现。 
	*/
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 6, 5, 4, 3, 2, 1 };
	int num = 0;
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){
		num ^= arr1[i];
	}
	int count = 0;
	while (1){
		if ((num & 1) == 1){
			break;
		}
		else{
			num = num >> 1;
			count++;
		}
	}
	int diff1 = 0;
	int diff2 = 0;
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){
		if (((arr1[i] >> count) & 1) == 1){
			diff1 ^= arr1[i];
		}
		else{
			diff2 ^= arr1[i];
		}
	}
	printf("diff1 = %d,diff2 = %d", diff1, diff2);
	system("pause");
	return 0;
}