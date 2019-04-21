#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void combindArray(int array[], int left, int right, int mid){
	//将[left,mid) 和数组[mid,right)进行合并
	int* p = new int[right - left];
	int i = 0;
	int start = left;
	int end = right;
	int port = mid;
	while (left < mid&&port < right){
		if (array[left] < array[port]){
			p[i++] = array[left++];
		}
		else{
			p[i++] = array[port++];
		}
	}
	while (left < mid){
		p[i++] = array[left++];
	}
	while (port < right){
		p[i++] = array[port++];
	}
	i = 0;
	while (start < end){
		array[start++] = p[i++];
	}
	delete[]p;
}
//1.平均切割区间
//2.分治处理左右两个小区间，直到size ==0 或者size ==1
//3.合并左右两个有序数组
void MergeSortInner(int array[], int left, int right){//此时我们的区间是[left,right)
	if (left == right){
		return;//size=0;
	}
	if (left + 1 == right){
		return;
	}
	int mid = (left + right) / 2;
	MergeSortInner(array, left, mid);
	MergeSortInner(array, mid, right);
	//合并两个区间的元素
	combindArray(array, left, right, mid);
}
//归并排序就是将两个有序的区间进行合并，采用分治算法
void MergeSort(int array[], int size){
	MergeSortInner(array, 0, size);
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
	MergeSort(arr, size);
	printSort(arr, size);

	system("pause");
	return EXIT_SUCCESS;
}

