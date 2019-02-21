//从字符串中查找字符第一次出现的位置
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
const char* Strchr(const char* str,int character){
	assert(str != NULL);
	char* p = (char*)str;
	while (p != '\0'){
		if (*p == character){
			return p;
		}
		p++;
	}
	return NULL;
}
int main(){

	char* p = "abcdef";
	printf("%p\n", p);
	printf("%p\n",Strchr(p, 'b'));

	system("pause");
	return 0;
}