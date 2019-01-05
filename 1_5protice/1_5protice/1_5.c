#include <stdio.h>
#include <stdlib.h>
void xuan(char *p,int n,int num){
	for (int i = 0; i < n; i++){
		char ch = p[0];
		for (int j = 0; j < num-1; j++){
			p[j] = p[j + 1];
		}
		p[num-1] = ch;
	}
}
int main(){
	/*
	.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB 
	*/
	char arr[] = "ABCD";
	int n = 1;//旋转的字符数目
	int num = sizeof(arr)-1;
	xuan(arr,n,num);
	printf("%s", arr);
	system("pause");
	return 0;
}