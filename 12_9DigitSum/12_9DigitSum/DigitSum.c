//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n){
	if (n > 9){
		DigitSum(n / 10);
	}
	return DigitSum(n % 10);
}
int main(){
	DigitSum(1245);
	system("pause");
	return 0;
}