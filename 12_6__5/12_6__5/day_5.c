#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int init(){
	int start = 0;
	printf("=======================\n");
	printf("��ʼ��Ϸ 1�� ������Ϸ 0\n");
	printf("=======================\n");
	printf("���������ѡ��");
	scanf("%d", &start);
	if (start == 1){
		return rand() % 100 + 1;
	}
	else{
		return 0;
	}
}
int main(){
	//1,��ɲ�������Ϸ��
	int rand;
	srand((unsigned int)time(0));
	if (rand = init()){
		int num = 0;
		while (1){
			printf("��������µ����֣�");
			scanf("%d", &num);
			if (num > rand){
				printf("���˴���");
			}
			else if (num < rand){
				printf("С��С��");
			}
			else{
				printf("��ϲ�㣬�¶���");
				break;
			}
		}
	}
//	д����������������������в�����Ҫ�����֣�	�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
	int arr[] = { 4, 5, 7, 8, 12, 16, 18, 45 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int check = 12;
	for (; left <= right;){
		int num = (left + right) / 2;
		if (arr[num] == check){
			printf("�Ѿ��ҵ��ˣ��±���%d", num);
			break;
		}
		else if (check > arr[num]){
			left = num + 1;
		}
		else{
			right = num - 1;
		}
	}
	system("pause");
	return 0;
}