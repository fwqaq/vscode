#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
    ���ҳ�������֡���ʹ��λ���㣩 
	*/
	int arr[11] = {1,1,2,2,3,3,4,4,5,5,6};
	for (int i = 0; i < 11; i++){
		for (int j = i+1; j < 11; j++){
			if ((arr[i] ^ arr[j]) == 0){
				arr[i] = 0;
				arr[j] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 11; i++){
		if (arr[i] != 0){
			printf("%d", arr[i]);
			break;
		}
	}

	system("pause");
	return 0;
}