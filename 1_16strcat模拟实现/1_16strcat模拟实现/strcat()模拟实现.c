#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char* Strcat(char* dest, const char* src){
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*ret != '\0'){
		ret++;
	}
	while ((*ret++ = *src++)){
		;
	}
	return dest;
}
int main(){
	char *str = "abcd";
	char str2[20] = "abc";
	Strcat(str2, str);
	printf("%s\n", str2);
	system("pause");
	return 0;
}