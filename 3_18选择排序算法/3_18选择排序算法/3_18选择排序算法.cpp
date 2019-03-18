#include <iostream>
using namespace std;
void swap(int& a, int& b){
	int c = a;
	a = b;
	b = c;
}
void select_Sort(int a[], int size){
	for (int i = 0; i < size; i++){
		int min = i;
		for (int j = i + 1; j < size; j++){
			if (a[j] < a[min]){
				min = j;//找到最小的下标
			}
		}
		//找到下标进行交换
		swap(a[min], a[i]);
	}
}
int main(){
	int a[] = { 2, 6, 8, 9, 5, 4 };
	int num = sizeof(a) / sizeof(a[0]);
	select_Sort(a, num);
	for (int i = 0; i < num; i++){
		cout << a[i] << " " << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}