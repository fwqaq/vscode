/*
试1  不等式  对指定的正整数m，试求满足不等式 
         输入正整数m（1<m<10000）,
	 输出正整数n所在的区间。 例如m=2，
	 输出正整数n的区间为：[4,8]  测试数据： 
	 （1）  m=1000 （2）  m=2012 
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
	 printf("n的区间是：");
		printf("[");
		printf("%d,",c);
		printf("%d",d);
		printf("]");
 } 
