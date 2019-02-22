//模拟实现strncat函数 在目的函数的末尾追加
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
char* Strncat(char* destination, const char* source, size_t num){
	assert(destination != NULL);
	assert(source != NULL);
	char* ret = destination;
	while (*destination){
		destination++;
	}
	while (num&&*source != '\0'){
		*destination++ = *source++;
		num--;
	}
	*destination = '\0';
	return ret;
}
int main(){
	char str1[20];
	char str2[20];
	strcpy(str1, "To be ");
	strcpy(str2, "or not to be");
	Strncat(str1, str2, 6);
	puts(str1);
	system("pause");
	return 0;
}