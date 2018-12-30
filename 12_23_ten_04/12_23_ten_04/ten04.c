#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int diff_bit(int m,int n){
	int count = 0;
	while (m!=0||n!=0){
		if ((m & 1) != (n & 1)){
			count++;
		}
		m /= 2; 
		n /= 2;
		printf("%d %d\n", m, n);
	}
	return count;
}
int main(){

	/*
	4.编程实现：
	两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
	输入例子:
	1999 2299
	输出例子:7 
	*/
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n",diff_bit(m, n));
	system("pause");
	return 0;
}