#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char* Strcpy(char* dest, const char* src){
	assert(dest != NULL);
	assert(src != NULL);
	char* str = dest;
	while (*src != '\0'){
		*str = *src;
		src++;
		str++;
	}
	*str = '\0';
	return dest;
}
int main(){
	char str[] = "abcdef";
	char str1[20];
	Strcpy(str1, str);
	printf("%s\n", str);
	printf("%s\n", str1);
	system("pause");
	return 0;
}