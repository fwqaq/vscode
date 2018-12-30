#include <stdio.h>
#include <stdlib.h>
int sum(int a[], int n){
	if (n <= 0)return a[0];
	else return a[n] + sum(a, n - 1);
}
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	printf("%d", sum(a, 4));
	system("pause");
	return 0;
}
