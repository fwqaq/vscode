#include <stdio.h>
#include <stdlib.h>
int main(){

	/*
	//���Ͼ���
	��һ����ά����.
	�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
	�������������в���һ�������Ƿ���ڡ�
	ʱ�临�Ӷ�С��O(N); 
	*/
	int arr[3][3] = { 1, 2, 3, 
					  4, 5, 6, 
					  7, 8, 9 };
	int num = 2;
	int n = 0;
	for (int i = 0; i < 2; i++){
		if (arr[i][0]>=num&&arr[i + 1][0] < num){
			n = i;
			break;
		}
	}
	for (int i = 0; i < 3; i++){
		if (arr[n][i] == num){
			printf("���������\n");
			break;
		}
	}
	system("pause");
	return 0;
}