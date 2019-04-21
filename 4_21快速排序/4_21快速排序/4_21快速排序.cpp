#include <iostream>
using namespace std;
void Swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
//hoare�汾
int partition_hoare(int array[], int left, int right){
	int start = left;
	int end = right;
	int pivot = array[right];//��ʱΪ��׼ֵ
	while (start < end){
		while (start < end&&array[start] <= pivot){		//��ʵ���ǽ�����right֮ǰ�����ֽ���һ������С��pivot���з��࣬Ȼ���ٽ����ǵ�
			start++;									//beginָ���ֵ�����Ԫ�ؽ��н�����beginָ���ֵ���ǵ�һ�����ڵ�������pivot��ֵ
		}
		while (start < end&&array[end] >= pivot){
			end--;
		}
		Swap(array, start, end);
	}
	//������ʱ��start==end
	Swap(array, start, right);
	return start;
}
//�ڿӷ�--�ҵ������������������λ��
int partition_wk(int array[], int left, int right){
	//�ȼ�¼��������ֵ���ҵ���һ����������array[right]��ֵ����ǵ�rightλ���ϣ�Ȼ���ҵ�����С��pivot��ֵ�ǰ���λ����
	int start = left;
	int end = right;
	int pivot = array[right];
	while (start < end){
		//�ȴ�ǰ�ҵ����Ǵ�������pivot��ֵ
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
//ǰ��ָ��汾�ҵ����ǵ���������Ԫ�ص��±�
int partition_ptr(int array[], int left, int right){
	int d = left;//dʼ���Ǵ�������pvoit�ĵ�һ��ֵ	
	int pvoit = array[right];
	for (int i = left; i < right; i++){
		if (array[i] < pvoit){
			//����i��d��ֵ
			Swap(array, i, d);
			d++;//
		}
	}
	//����������ǵ�d�����һ��ֵ���н���
	Swap(array, d, right);
	return d;
}
void quickSort1(int array[], int left, int right){//��ʱ��������˫������[left,right]
	if (left == right){
		return;
	}
	if (left > right){
		return;
	}
	int mid = partition_ptr(array, left, right);//�ҵ�left��right�����е�һ��ֵʹ����߶���С�ڴ����ֵ����֣��ұ߶��Ǵ��ڴ����ֵ�ֵ
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

