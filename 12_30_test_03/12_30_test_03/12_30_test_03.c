#include <stdio.h>
#include <stdlib.h>
/*
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
*/
int main(){
	int arr[3][4] = { { 1, 2, 3 ,4 }, { 2, 3, 4 ,5 }, { 5, 6, 7 ,8 } };
	int num = 3;
	int left = 0;
	int top = 0;
	for (int i = 0; i < 3; i++){
		if (arr[i][0]>3){
			left = i - 1;
			break;
		}
	}
	for (int i = 0; i < 4; i++){
		if (arr[0][i]>3){
			top = i - 1;
			break;
		}
	}
	if (left >= 0 && left <= 3){
		for (int i = 0; i < 4; i++){
			if (arr[left][i] == num){
				printf("������ִ���\n");
				break;
			}
		}
	}
	if (top >= 0 && top < 4){
		for (int i = 0; i < 3; i++){
			if (arr[top][i] == num){
				printf("������ִ���\n");
				break;
			}
		}
	}
	system("pause");
	return 0;
}