/*
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
#include <stdio.h>
#include <stdlib.h>
void ex(int *pi, int *pj){
	int p;
	p = *pi;
	*pi = *pj;
	*pj = p;
}
void change(int arr[], int number){
	for (int i = 0; i < number; i++){
		for (int j = i; j < number; j++){
			if (arr[j] % 2 != 0){//����������
				ex(&arr[i], &arr[j]);
			}
		}
	}
}

int main(){
	int arr[] = { 2, 5, 6, 7, 8, 4, 9, 5 };
	int count = sizeof(arr) / sizeof(arr[0]);
	change(arr, count);
	for (int i = 0; i < count; i++){
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}