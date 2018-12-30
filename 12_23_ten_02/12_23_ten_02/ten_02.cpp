#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
	2.获取一个数二进制序列中所有的偶数位和奇数位，
	分别输出二进制序列。 
	*/
	int i;
	scanf("%d", &i);
	int odd = 0;
	int even = 0;
	while (i != 0){
		if ((i & 1 )== 0){
			++even;
		}
		else{
			++odd;
		}
		i /= 2;
	}
	printf("奇数个数=%d,偶数个数=%d\n", even, odd);
	system("pause");
	return 0;
}