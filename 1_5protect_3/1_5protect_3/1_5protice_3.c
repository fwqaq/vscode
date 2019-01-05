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
	判断一个字符串是否为另外一个字符串旋转之后的字符串。
	例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
	*/
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int length = strlen(s1);
	printf("%d",is_undiff(s1, s2,length));
	system("pause");
	return 0;
}