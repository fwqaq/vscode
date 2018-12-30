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
	//1.递归和非递归分别实现求第n个斐波那契数。 
	printf("%d", fblq(5));
	system("pause");
	return 0;
}