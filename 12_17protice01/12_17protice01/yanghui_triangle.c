#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define max 10
int main(){

	/*
	3.����Ļ�ϴ�ӡ������ǡ�
			1
		   1 1
		  1 2 1
		 1 3 3 1 
	*/
	int n;
	printf("��������Ҫ��ӡ������ǵ�����,�������Ϊ10:");
	scanf("%d", &n);
	int arr[max] = {0};
	int arr1[max] = { 0 };
	for (int i = 1; i <= n; i++){
		arr[0] = 1;//�Ե�һ�������и�ֵ
		arr[i - 1] = 1;//�����һ�����ֽ��и�ֵ1
		for (int j = 1; j < i-1; j++){
			arr[j] = arr1[j - 1] + arr1[j];
		}
		//��arr�е�ֵ��ֵ��arr1��ȥ
		for (int i = 0; i < 10; i++){
			arr1[i] = arr[i];
		}
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{
			if (arr[i] == 0){
				break;
			}
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}