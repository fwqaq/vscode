#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
char* Strstr(const char* str1, const char*  str2){
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* big = (char*)str1;
	char* xiao = (char*)str2;
	char* cp = big;
	if (*xiao == '\0'){
		return NULL;
	}
	while (*big != 'NULL'){
		cp = big;
		xiao = (char*)str2;
		while (*cp != '\0'&&xiao != '\0' && (*cp == *xiao)){
			cp++;
			xiao++;
		}
		if (*xiao == '\0'){
			return big;
		}
		big++;
	}
	return NULL;
}
int main(){
	//如果是则返回指向当前的地址，否则就返回NULL
	char str[] = "abcdefg";
	char str1[] = "def";
	printf("%p\n", str);
	printf("%p\n", Strstr(str, str1));
	printf("%p\n", strstr(str, str1));
	system("pause");
	return 0;
}