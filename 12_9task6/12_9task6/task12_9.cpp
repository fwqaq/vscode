#include <stdio.h>
#include <stdlib.h>
int fblq(int n){
	int right = 1;
	int left = 1;
	int sum = 0;
	for (int i = 3; i <= n; i++){
		sum = right + left;
		right = left;
		left = sum;
	}
	return sum;
}
int main(){
	//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
	printf("%d", fblq(5));
	system("pause");
	return 0;
}