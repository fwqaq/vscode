#include <stdio.h>
#include <stdlib.h>
void reverse(char * arr, int count){
	int i = 0;
	while (i < count){
		char ch = arr[i];
		arr[i] = arr[count];
		arr[count] = ch;
		i++;
		count--;
	}
}
int main(){
	/*
	��һ���ַ����������Ϊ:"student a am i",
	���㽫��������ݸ�Ϊ"i am a student".  
	*/
	char arr[] = "student a am i";
	reverse(arr, sizeof(arr)-2);
	char* end = arr;
	char* start = arr;
	for (int i = 0; i < sizeof(arr); i++){
		if (arr[i] == ' '||arr[i] == '\0'){
			end = &arr[i];
			reverse(start, end - start - 1);
			start = end+1;
		}
	}
	
	printf("%s", arr);
	system("pause");
	return 0;
}