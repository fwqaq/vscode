//�������򷨡� 
#include <stdio.h>
void fast(int a[],int i,int j)
{
	int m,n,k,x;
	m=i;
	n=j;
	k=a[(i+j)/2];//ѡȡһ��ֵ�� 
	do{
		while(a[m]<k&&m<j) m++; //�ж��ұߴ�С ��λ�� 
		while(a[n]>k&&n>i) n--; //�ж���ߴ�С ��λ�� 
		if(m<=n){
			x=a[m];
			a[m]=a[n];
			a[n]=x; //����ֵ 
			m++;
			n--; 
		} //if������ұߵĽ���ѡ��/ 
	}while(m<=n);
	if(m<j) fast(a,m,j);
	if(n>i) fast(a,i,n);//���������ﵽĿ�ģ�	
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
