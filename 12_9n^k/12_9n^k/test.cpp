#include <stdio.h>
#include <stdlib.h>
int factor(int n,int k){
	if (k == 1){
		return n;
	}
	return n*factor(n, k - 1);
}
int main(){
	//2.编写一个函数实现n^k，使用递归实现
	printf("%d", factor(4, 3));
	system("pause");
	return 0;
}