/*
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
// ���� 1��λ��
}
*/
#include <stdio.h>
#include <stdlib.h>
int count_one_bits(unsigned int value)
{
	int i = 0;
	while (value != 0){
		i++;
		value /= 2;
	}
	return i;
}
int main(){
	printf("%d\n", count_one_bits(15));
	system("pause");
	return 0;
}