#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
	2.��ȡһ�������������������е�ż��λ������λ��
	�ֱ�������������С� 
	*/
	int i;
	scanf("%d", &i);
	int odd = 0;
	int even = 0;
	while (i != 0){
		if ((i & 1 )== 0){
			++even;
		}
		else{
			++odd;
		}
		i /= 2;
	}
	printf("��������=%d,ż������=%d\n", even, odd);
	system("pause");
	return 0;
}