#include <stdio.h>
#include <stdlib.h>
int factor(int n,int k){
	if (k == 1){
		return n;
	}
	return n*factor(n, k - 1);
}
int main(){
	//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
	printf("%d", factor(4, 3));
	system("pause");
	return 0;
}