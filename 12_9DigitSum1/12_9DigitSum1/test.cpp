#include <stdio.h>
#include <stdlib.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n){
	if (n < 9){
		return n;
	}
	return  n % 10+DigitSum(n/10);
}
int main(){
	printf("%d",DigitSum(1234));
	system("pause");
	return 0;
}