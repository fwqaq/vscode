#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Strlen(const char* p){
	assert(p != NULL);
	int count = 0;
	while (p[count] != '\0'){
		count++;
	}
	return count;
}
int main(){
	char *p = "abcdef";
	printf("%d", Strlen(p));
	system("pause");
	return 0;
}