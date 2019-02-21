//地址上内容的移动
#include <stdio.h>
#include <stdlib.h>
void* Memmove(void* dst, const void* src, size_t count){
	//此时需要考虑是否会将以前的内容所覆盖
	void* ret = dst;
	if (dst <= src || (char *)dst >= ((char *)src + count)){
		while (count--){
			*(char*)dst = *(char*)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--){
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return ret;
}
int main(){

	system("pause");
	return 0;
}