#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void put(int n){
	for (int i = 1; i <= n; i++){
		printf("*");
	}
}
int sxh(int n){
	if (n ==int( pow(n / 100*1.0, 3) + pow(n / 10 % 10*1.0, 3) + pow(n % 10*1.0, 3))){
		return 1;
	}
	return 0;
}
int nums(int x, int y){
	int sum = x;
	int before = 0;
	for (int i = 1; i < y; i++){
		sum = sum * 10 + x;
	}
	return sum;
}
int main(){
	 /* *
		***
		*****
		*******
		*********
		***********
		*************
		***********
		*********
		*******
		*****
		***
		*  *///��ӡ������ͼ��
	for (int i = 1; i <= 13; i+=2)
	{
		put(i);
		printf("\n");
	}
	for (int i = 13-2; i >= 1; i-=2){
		put(i);
		printf("\n");
	}


	//���0��999֮������С�ˮ�ɻ������������
	//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
	for (int i = 0; i < 1000; i++){
		if (sxh(i)){
			printf("%d\n", i);
		}
	}

	//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
	//���磺2 + 22 + 222 + 2222 + 22222
	int sum = 0;
	for (int i = 1; i <= 5; i++){
		sum = sum+ nums(2, i);
		
	}

	system("pause");
	return 0;
}