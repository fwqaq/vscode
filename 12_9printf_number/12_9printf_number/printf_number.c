#include <stdio.h>
#include <stdlib.h>
//递归方式实现打印一个整数的每一位 
void Print_num(int n){
	if (n > 9){
		Print_num(n / 10);
	}
	printf("%d", n % 10);
}
int main(){
	Print_num(1234);
	system("pause");
	return 0;
}
