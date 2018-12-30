#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void put(int n){
	for (int i = 1; i <= n; i++){
		printf("*");
	}
}
int sxh(int n){
	if (n ==int( pow(n / 100*1.0, 3) + pow(n / 10 % 10*1.0, 3) + pow(n % 10*1.0, 3))){
		return 1;
	}
	return 0;
}
int nums(int x, int y){
	int sum = x;
	int before = 0;
	for (int i = 1; i < y; i++){
		sum = sum * 10 + x;
	}
	return sum;
}
int main(){
	 /* *
		***
		*****
		*******
		*********
		***********
		*************
		***********
		*********
		*******
		*****
		***
		*  *///打印出上面图案
	for (int i = 1; i <= 13; i+=2)
	{
		put(i);
		printf("\n");
	}
	for (int i = 13-2; i >= 1; i-=2){
		put(i);
		printf("\n");
	}


	//求出0～999之间的所有“水仙花数”并输出。
	//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
	for (int i = 0; i < 1000; i++){
		if (sxh(i)){
			printf("%d\n", i);
		}
	}

	//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
	//例如：2 + 22 + 222 + 2222 + 22222
	int sum = 0;
	for (int i = 1; i <= 5; i++){
		sum = sum+ nums(2, i);
		
	}

	system("pause");
	return 0;
}