/*
��1  ����ʽ  ��ָ����������m���������㲻��ʽ 
         ����������m��1<m<10000��,
	 ���������n���ڵ����䡣 ����m=2��
	 ���������n������Ϊ��[4,8]  �������ݣ� 
	 ��1��  m=1000 ��2��  m=2012 
	 */
#include <stdio.h>
#include <math.h>
int main()
{
	double total=0;
	int a=1,c,d;
	int m;
	scanf("%d",&m); 
   for(; ;a++)
   {
    total=total+pow(a,0.5)/(2*a-1);
		if(total>m)
	      {
		    c=a;
		    break;
	       }
		}
  for(a=a+1; ;a++)
   {
    total=total+pow(a,0.5)/(2*a-1);
		if(total>m+1)
	      {
		    d=a-1;
			break;
			}
		}
	 printf("n�������ǣ�");
		printf("[");
		printf("%d,",c);
		printf("%d",d);
		printf("]");
 } 
