#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ave(int x, int y){
	return x + (y - x) / 2;
}
int main(){
	/*
	2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
	*/
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d",ave(a, b));
	system("pause");
	return 0;
}