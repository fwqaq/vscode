#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Strcmp(const char* str1, const char* str2){
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 != '\0' || *str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1 > *str2){
			return 1;
		}
		else if (*str1 == *str2){
			++str1;
			++str2;
		}
	}
	if (*str1 == '\0'&&*str2 == '\0'){
		return 0;
	}
	else if (*str1 != '\0'){
		return 1;
	}
	else 
		return -1;
}
int main(){
	printf("%d", Strcmp("abc", "abcd"));
	system("pause");
	return 0;
}