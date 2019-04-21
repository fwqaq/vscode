#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void bubbleSort(int array[], int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - i - 1; j++){
			if (array[j] > array[j + 1]){
				Swap(array, j, j + 1);
			}
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
	bubbleSort(arr, size);
	printSort(arr, size);

	system("pause");
	return EXIT_SUCCESS;
}

