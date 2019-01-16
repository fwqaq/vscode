#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
void* Memcpy(void* dest, void* src, size_t count){
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	while (count != 0){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		count--;
 	}
	return ret;
}
int main(){
	//在内存中连续copy
	char str[] = "abcdefg";
	char str1[20];
	Memcpy(str1, str, 4);
	printf("%s", str1);
	system("pause");
	return 0;
}