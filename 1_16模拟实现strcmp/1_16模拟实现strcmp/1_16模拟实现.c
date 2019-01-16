#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
int Strcmp(const char* str1,const char* str2){
	assert(str1 != NULL);
	assert(str2 != NULL);
	int ret = 0;
	while (*str1||*str2){
		if (*str1 == *str2){
			str1++;
			str2++;
			continue;
		}
		if (*str1 > *str2){
			return 1;
		}
		else{
			return - 1;
		}
	}
	return 0;
}

int main(){
	char str[] = "abcde";
	char str1[] = "abcd";
	printf("%d\n",Strcmp(str, str1));
	printf("%d\n", strcmp(str, str1));
	system("pause");
	return 0;
}