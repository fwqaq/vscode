#include <iostream>
using namespace std;
//对char和int数组进行排序 从大到小，选择排序
template<class T>
void aSwap(T& a, T& b){
	T c = a;
	a = b;
	b = c;
}
template<class T>
void mySort(T arr[], int len){
	for (int i = 0; i < len; ++i){
		int max = i;
		for (int j = i + 1; j < len; j++){
			if (arr[max] < arr[j]){
				max = j;
			}
		}
		if (max != i){
			aSwap(arr[max], arr[i]);
		}
	}
}
//输出数组元素的模板
template<class T>
void printArray(T arr[], int len){
	for (int i = 0; i < len; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test(){
	char c_arr[] = "hello world";
	mySort(c_arr, sizeof(c_arr));
	printArray(c_arr, sizeof(c_arr));
}
void test1(){
	int arr[] = { 1, 5, 8, 76, 4, 9, 23, 4 };
	int len = sizeof(arr) / sizeof(int);
	mySort(arr, len);
	printArray(arr, len);
}
int main(){
	test();
	test1();
	system("pause");
	return EXIT_SUCCESS;
}