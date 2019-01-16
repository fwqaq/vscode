#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Strlen(const char * str){
	assert(str != NULL);
	int count = 0;
	char *p = str;
	while (*p != '\0'){
		count++;
		p++;
	}
	return count;
}
int main(){
	char str[] = "";
	printf("%d\n",Strlen(str));
	system("pause");
	return 0;
}