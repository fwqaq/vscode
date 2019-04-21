#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void selectSort(int array[], int size){
	for (int i = 0; i < size; i++){
		int min = i;
		for (int j = i; j < size; j++){
			if (array[j] < array[min]){
				min = j;
			}
		}
		Swap(array, min, i);
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
	selectSort(arr, size);
	printSort(arr, size);

	system("pause");
	return EXIT_SUCCESS;
}

