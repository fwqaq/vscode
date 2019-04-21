#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
//hoare版本
int partition_hoare(int array[], int left, int right){
	int start = left;
	int end = right;
	int pivot = array[right];//此时为基准值
	while (start < end){
		while (start < end&&array[start] <= pivot){		//其实就是将我们right之前的数字进行一个大于小于pivot进行分类，然后再将我们的
			start++;									//begin指向的值与最后元素进行交换。begin指向的值就是第一个大于等于我们pivot的值
		}
		while (start < end&&array[end] >= pivot){
			end--;
		}
		Swap(array, start, end);
	}
	//到最后的时候start==end
	Swap(array, start, right);
	return start;
}
//挖坑法--找到我们区分两个区间的位置
int partition_wk(int array[], int left, int right){
	//先记录我们最后的值，找到第一个大于我们array[right]的值填到我们的right位置上，然后找到我们小于pivot的值填到前面的位置上
	int start = left;
	int end = right;
	int pivot = array[right];
	while (start < end){
		//先从前找到我们大于我们pivot的值
		while (start < end&&array[start] <= pivot){
			start++;
		}
		array[end] = array[start];
		while (start<end&&array[end] >= pivot){
			end--;
		}
		array[start] = array[end];
	}
	array[start] = pivot;
	return start;
}
//前后指针版本找到我们的区分两边元素的下表
int partition_ptr(int array[], int left, int right){
	int d = left;//d始终是大于我们pvoit的第一个值	
	int pvoit = array[right];
	for (int i = left; i < right; i++){
		if (array[i] < pvoit){
			//交换i和d的值
			Swap(array, i, d);
			d++;//
		}
	}
	//最后再让我们的d和最后一个值进行交换
	Swap(array, d, right);
	return d;
}
void quickSort1(int array[], int left, int right){//此时的区间是双闭区间[left,right]
	if (left == right){
		return;
	}
	if (left > right){
		return;
	}
	int mid = partition_ptr(array, left, right);//找到left到right区间中的一个值使得左边都是小于此数字的数字，右边都是大于此数字的值
	quickSort1(array, left, mid - 1);
	quickSort1(array, mid + 1, right);
}
void qucikSort(int array[], int size){
	quickSort1(array, 0, size - 1);
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
	qucikSort(arr, size);
	printSort(arr, size);

	system("pause");
	return EXIT_SUCCESS;
}

