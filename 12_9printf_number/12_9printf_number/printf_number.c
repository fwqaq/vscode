#include <stdio.h>
#include <stdlib.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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
