#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//3.��д����ģ��������������ĳ�����
	//����������������룬������ȷ����ʾ����¼�ɹ���, �������
	//	�����������룬����������Ρ����ξ�������ʾ�˳�����
	for (int i = 0; i < 3; i++){
		char arr[20];
		printf("������������룺");
		scanf("%s", arr);
		if (!strcmp(arr, "123456")){
			printf("������ɹ�");
		break;
		}
		else{
			printf("�Ƿ�����");
		}
	}
	//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
	char  ch;
	scanf("%c", &ch);
	if (ch >= 'a'&&ch <= 'z'){
		printf("%c", ch - 32);
	}
	else if (ch <= 'Z'&& ch >= 'A'){
		printf("%c", ch + 32);
	}
	system("pause");
	return 0;
}