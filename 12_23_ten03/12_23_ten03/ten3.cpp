#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void print_num(int i){
	if (i <= 0){
		return;
	}
	print_num(i / 10);
	printf("%d\n", i % 10);
}
int main(){

	//3. 输出一个整数的每一位。
	int i;
	scanf("%d", &i);
	print_num(i);
	system("pause");
	return 0;
}