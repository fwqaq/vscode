#include <stdio.h>
#include <stdlib.h>
int is_undiff(char *s1, char *s2, int len){
	for (int i = 0; i < len; i++){
		char ch = s1[0];
		for (int j = 0; j < len - 2; j++){
			s1[j] = s1[j + 1];
		}
		s1[len - 1] = ch;
		if (!strcmp(s1, s2)){
			return 1;
		}
	}
	return 0;
}
int main(){

	/*
	�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
	���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 
	*/
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int length = strlen(s1);
	printf("%d",is_undiff(s1, s2,length));
	system("pause");
	return 0;
}