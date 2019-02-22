//模拟实现strncmp函数
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Strncmp(const char* str1, const char* str2, size_t num){
	assert(str1 != NULL);
	assert(str2 != NULL);
	int ret = 0;
	while (!(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str2&&num){
		str1++;
		str2++;
		num--;
	}
	if (ret > 0){
		ret = 1;
	}
	else if (ret < 0){
		ret = -1;
	}
	return ret;
}
int main(){

	char* p = "cbc";
	char* p2 = "cbcd";
	printf("%d\n", Strncmp(p, p2, 4));
	system("pause");
	return 0;
}