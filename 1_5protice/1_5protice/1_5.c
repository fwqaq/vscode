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
	.ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB 
	*/
	char arr[] = "ABCD";
	int n = 1;//��ת���ַ���Ŀ
	int num = sizeof(arr)-1;
	xuan(arr,n,num);
	printf("%s", arr);
	system("pause");
	return 0;
}