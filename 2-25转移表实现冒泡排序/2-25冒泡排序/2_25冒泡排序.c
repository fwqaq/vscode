#include <stdio.h>
#include <stdlib.h>
void Sort(int arr[], int num, int(*p)(int x,int y)){
	for (int i = 0; i < num - 1; i++){
		for (int j = 0; j < num - i - 1; j++){
			if (p(arr[j], arr[j+1])){
				int ret = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = ret;
			}
		}
	}
}
int da(int x, int y){
	if (x>y){
		return 1;
	}
	return 0;
}
int xiao(int x, int y){
	if (x > y){
		return 0;
	}
	return 1;
}
int main(){
	int arr[] = { 1, 5, 9, 8, 3, 8, 9, 6, 3 };
	int num = sizeof(arr) / sizeof(int);
	Sort(arr, num, da);//ÉıĞò
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	Sort(arr, num, xiao);//½µĞò
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}