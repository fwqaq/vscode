//模拟实现strncpy函数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
char* Strncpy(char* destion, const char* source, size_t num){
	assert(destion != NULL);
	assert(source != NULL);
	char* ret = destion;
	while (num){
		if (source != '\0'){
			*destion++ = *source++;
		}
		else{
			*destion++ = '\0';
		}
		num--;
	}
	return ret;
}
int main(){
	char* p = "abcdef";
	char ch[20];
	printf("%s\n",Strncpy(ch, p, 2));
	printf("%s\n", strncpy(ch, p, 2));
	system("pause");
	return 0;
}