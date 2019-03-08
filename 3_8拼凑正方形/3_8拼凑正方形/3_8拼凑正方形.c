#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int arr[4] = { 0 };
	int size = 0;
	int sum = 0;
	for (int i = 0; i < 4; ++i){
		scanf("%d", &size);
		arr[i] = size;
		sum = sum + size;
	}
	int num = 0;
	if (sum % 4 == 0){
		for (int i = 0; i < 4; ++i){
			num += abs(arr[i] - sum / 4);
		}
	}
	else{
		int x = sum % 4 - 1;
		for (int i = 0; i < 4; ++i){
			num += abs(arr[i]- x);
		}
	}
	printf("%d", num);
	system("pause");
	return EXIT_SUCCESS;
}