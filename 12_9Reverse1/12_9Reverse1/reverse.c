#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
void reverse_string(char * string)
{
	int len = strlen(string);
	if (len <= 1)
	{
		return;
	}
	else
	{
		char tmp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = tmp;
	}
}
int main(){
	char arr[] = "abcd";
	reverse_string(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}