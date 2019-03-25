#include <iostream>
using namespace std;
int main(){
	int arr[] = { 2, 1, 5, 3, 6, 4, 8, 9, 7 };
	int arr1[9] = { 0 };
	arr1[0] = 1;
	for (int i = 1; i < 9; i++){
		int max = 0;
		for (int j = 0; j < i; j++){//找到那个最大的下标
			if (arr[j] < arr[i]){
				if (max < arr1[j]){
					max = arr1[j];
				}
			}
			arr1[i] = max + 1;
		}
	}
	int max = arr1[0];
	for (int i = 1; i < 9; i++){
		if (max < arr1[i]){
			max = arr1[i];
		}
	}
	cout << max << endl;
	system("pause");
	return EXIT_SUCCESS;
}