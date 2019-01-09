#include <stdio.h>
struct xscj{
	char name[10];
	int num;
	int gao;
	int ying;
	int jsj;
	double ave;
}; typedef struct xscj T;
int main ()
{   
   int n;
   T max;
   T a[n];
   printf ("输入一个小于50的数="); 
   scanf("%d",&n);
   int i,j;
     for (i=0;i<n;i++){
   scanf("%s%d%d%d%d",a[i].name,&a[i].num,&a[i].gao,&a[i].ying,&a[i].jsj);	
  	 }
 for(i=0;i<n;i++)
  {
    a[i].ave=(a[i].gao+a[i].jsj+a[i].ying)/3.0;}

   for (i=1;i<n;i++)
 {  
    for (j=1;j<n-i;j++)
    
		if(a[j].ave<a[j-1].ave)
        
          {
		   max=a[j];
           a[j]=a[j-1];
           a[j-1]=max;
           
           }
	}
           
for (i=0;i<n;i++)
printf("%s\t%d\t%d\t%d\t%d\t%f\n",a[i].name,a[i].num,a[i].gao,a[i].ying,a[i].jsj,a[i].ave);
return 0;
   
}
