#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
	����ĩ����������ʦҪ��ͬ ѧ�ǵķ������մӸߵ�������С�ߵİ���ֻ�� 5��ͬѧ���� 5��ͬѧ�ֱ��� 5�֡�3�֡� 5�֡�2�ֺ� 8�֣�'
	���������ǲҲ��̶ã������� 10�֣������������������дӴ�С���� ������� 8 5 5 3 2
	*/
	int arr[11] = { 0 };
	int score = 0;
	for (int i = 0; i < 5; i++){
		scanf("%d", &score);
		++arr[score];
	}
	for (int i = 10; i>0; i--){
		for (int num = arr[i]; num > 0; --num){
			printf("%d", i);
		}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}