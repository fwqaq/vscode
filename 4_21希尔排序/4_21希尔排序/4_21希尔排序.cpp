#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void InsertSortGrap(int array[], int size, int grap){
	//对相隔grap的值进行插入排序
	for (int i = 0; i < size; i++){
		int key = array[i];
		int j = 0;
		for (j = i - grap; i >= 0 && array[j]>key; j -= grap){
			array[j + grap] = array[j];
		}
		array[j + grap] = key;
	}
}
void shellSort(int array[], int size){
	int grap = size;
	while (1){
		grap = grap / 3 + 1;
		InsertSortGrap(array, size, grap);
		if (grap == 1){
			break;//到1的时候我们就排序排好了
		}
	}
}
void printSort(int array[], int size){
	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
int main(){
	int arr[] = { 5, 6, 8, 9, 5, 4, 2, 3, 1, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	shellSort(arr, size);
	printSort(arr, size);

	system("pause");
	return EXIT_SUCCESS;
}

