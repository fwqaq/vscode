
/*
unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
unsigned int reverse_bit(unsigned int value){
	int n = 0;
	while (value != 0){
		int count = value & 1;
		value /= 2;
		n = n * 2 + count;
	}
	return n;
}
int main(){
	unsigned int num;
	scanf("%d",&num);
	printf("%d\n",reverse_bit(num));
	system("pause");
	return 0;
}