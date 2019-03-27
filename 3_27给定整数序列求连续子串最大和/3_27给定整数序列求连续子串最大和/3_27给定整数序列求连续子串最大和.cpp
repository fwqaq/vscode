#include <iostream>
using namespace std;
int main(){
	//输入一个无序的数组，算出子序列的最大值
	int arr[] = { -23, 17, -7, 11, -2, 1, -34 };
	int arr1[7] = { 0 };
	arr1[0] = arr[0];
	for (int i = 1; i < 7; i++){
		if (arr[i]>arr[i] + arr1[i - 1]){
			arr1[i] = arr[i];
		}
		else{
			arr1[i] = arr[i] + arr1[i - 1];
		}
	}
	int max = arr1[0];
	for (int i = 1; i < 7; i++){
		if (max < arr1[i]){
			max = arr1[i];
		}
	}
	cout << max << endl;
	system("pause");
	return EXIT_SUCCESS;
}