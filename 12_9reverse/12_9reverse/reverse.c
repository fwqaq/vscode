//5.递归和非递归分别实现strlen
#include <stdio.h>
#include <stdlib.h>
//int Strlen(char * string){
//	if (*string == '\0'){
//		return 0;
//	}
//	return Strlen(string + 1) + 1;

//}
int Strlen(char * string){
	int i = 0;
	while (*(string + i) != '\0'){
		i++;
	}
	return i;
}
int main(){

	printf("%d", Strlen("abcd"));
	system("pause");
	return 0;
}