//1.调整数组使奇数全部都位于偶数前面。
#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[] = { 1, 5, 7, 8, 9, 4, 6 };
	int count = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < count; i++ ){
		for (int j = i; j < count; j++){
			if (arr[j] % 2 != 0){
				int num = arr[j];
				arr[j] = arr[i];
				arr[i] = num;
			}
		}
		printf("%d", arr[i]);
	}


	system("pause");
	return 0;
}