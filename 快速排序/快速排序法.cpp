//快速排序法。 
#include <stdio.h>
void fast(int a[],int i,int j)
{
	int m,n,k,x;
	m=i;
	n=j;
	k=a[(i+j)/2];//选取一个值。 
	do{
		while(a[m]<k&&m<j) m++; //判断右边大小 的位置 
		while(a[n]>k&&n>i) n--; //判断左边大小 的位置 
		if(m<=n){
			x=a[m];
			a[m]=a[n];
			a[n]=x; //交换值 
			m++;
			n--; 
		} //if里对左右边的进行选择/ 
	}while(m<=n);
	if(m<j) fast(a,m,j);
	if(n>i) fast(a,i,n);//（多次排序达到目的）	
}
int main()
{
	int i,j,n;
	int b[5];
	for (i=0;i<5;i++){
	scanf ("%d",&b[i]);}
	fast(b,0,4);
	for (j=0;j<5;j++)
	printf ("%5d",b[j]);
	return 0;
} 
