#include <stdio.h>
#include <stdlib.h>
int main(){

	/*
	2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
	��20Ԫ�����Զ�����ˮ��
	���ʵ�֡�
	*/
	int count = 20;
	int null_count = 20;
	int num = 0;
	while (null_count>1){
		num = num + count;//��������Ǯ������
		null_count = count + null_count % 2;//��ƿ����������
		count = null_count/2;
	}
	printf("%d", num);
	system("pause");
	return 0;
}