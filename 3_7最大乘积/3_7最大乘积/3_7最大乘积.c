#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
����һ���������飬����������������0��Ҫ������ҳ�3�����ĳ˻���ʹ�ó˻����
Ҫ��ʱ�临�Ӷȣ�O(n)���ռ临�Ӷȣ�O(1)
*/
int main(){
	//�ҵ������е���������ֵ
	long m1 = 0, m2 = 0, m3 = 0, n1 = 0, n2 = 0,n3 = 0, ni = 0,ma,mi1 = 0,mi2 = 0;
	scanf("%d", &ni);
	for (int i = 0; i < ni; i++){
		scanf("%ld", &ma);
		if (ma>m1){
			n1 = m1;
			n2 = m2;
			m1 = ma;
			m2 = n1;
			m3 = n2;
			continue;
		}
		 if (ma > m2){
			n1 = m2;
			m2 = ma;
			m3 = n1;
			continue;
		}
		 if (ma>m3){
			m3 = ma;
			continue;
		}
		 if (ma < mi1){
			 n1 = mi1;
			 mi1 = ma;
			 mi2 = n1;
			 continue;
		 }
		 if (ma < mi2){
			 mi2 = ma;
			 continue;
		 }
	}
	long sum = m1*m2*m3 - m1*mi1*mi2>0 ? m1*m2*m3 : m1*mi2*mi1;
	printf("%ld", sum);
	system("pause");
	return EXIT_SUCCESS;
}