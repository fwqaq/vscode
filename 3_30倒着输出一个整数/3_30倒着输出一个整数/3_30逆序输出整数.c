#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int flag = 0;
void print_num(int num){
	if (num < 0){
		printf("-");
		num = -num;
	}
	if (num == 0){
		return;
	}
	if ((num % 10) == 0&&flag == 0)
	{}
	else{ 
		printf("%d", (num % 10));
		flag = 1;
	};
	print_num(num / 10);
}
int main(){
	int num = 0;
	scanf("%d", &num);
	print_num(num);
	system("pause");
	return 0;
}