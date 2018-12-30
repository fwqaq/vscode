#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ave(int x, int y){
	return x + (y - x) / 2;
}
int main(){
	/*
	2.不使用（a+b）/2这种方式，求两个数的平均值。 
	*/
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d",ave(a, b));
	system("pause");
	return 0;
}