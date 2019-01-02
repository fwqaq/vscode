//冒泡法排序。    
	
#include <stdio.h>
 void paixu(int a[],int n);
int main(void)
{
	int n,i; 
	int a[n];
	printf ("请输入一个n值=");
	scanf ("%d",&n);
	int b;
	for (b=0;b<n;b++)
	scanf ("%d",&a[b]);
paixu(a,n);
	for (i=0;i<n;i++)
	printf ("%2d",a[i]);
	
 } 
 void paixu(int a[],int n)
 {
 	
 		int i,j;
	for (i=1;i<n;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			if (a[j]<a[j-1])
			{int t;
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			}
		}
		
	} 
 	
 }
