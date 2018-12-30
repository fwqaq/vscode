#include<stdio.h>
#include <stdlib.h>
//递归和非递归分别实现求n的阶乘 
//int factor(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n*factor(n - 1);
//}
int factor(int n){
	int sum = 1;
	for (int i = 1;i <= n; i++){
		sum = sum*i;
	}
	return sum;
}
int main(){
	printf("%d", factor(5));
	system("pause");
	return 0;
}