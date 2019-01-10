#include <stdio.h>
#include <stdlib.h>
int main(){

	/*
	2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
	给20元，可以多少汽水。
	编程实现。
	*/
	int count = 20;
	int null_count = 20;
	int num = 0;
	while (null_count>1){
		num = num + count;//数量等于钱的数量
		null_count = count + null_count % 2;//空瓶的数量等于
		count = null_count/2;
	}
	printf("%d", num);
	system("pause");
	return 0;
}