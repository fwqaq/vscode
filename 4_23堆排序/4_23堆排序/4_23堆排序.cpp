#include <iostream>
using namespace std;
typedef int HPDataType;
void Heapify(int array[], int size, int index) {//���µ����㷨
	while (2 * index + 1 < size) {
		int minIdx = 2 * index + 1;
		int rightIdx = 2 * index + 2;
		if (rightIdx < size && array[rightIdx] < array[minIdx]) {
			minIdx = rightIdx;
		}
		if (array[minIdx] >= array[index]) {
			break;
		}

		int t = array[minIdx];
		array[minIdx] = array[index];
		array[index] = t;

		index = minIdx;
	}
}
void CreateHeap(int array[], int size) {
	for (int i = size / 2 - 1; i >= 0; i--) {
		Heapify(array, size, i);
	}
}
int main(){
	//����С�ѣ��Ϳ��Եõ�����,����ѾͿ��Եõ����ǵ�����ֻ���������µ�����ʱ��һ��
	int array[] = { 5, 6, 8, 9, 6, 4, 9, 6, 2, 1, 3 };
	int size = sizeof(array) / sizeof(array[0]);
	CreateHeap(array, sizeof(array) / sizeof(array[0]));
	for (int i = size - 1; i >=0; i--){
		int temp = array[i];
		array[i] = array[0];
		array[0] = temp;
		Heapify(array, i, 0);
	}
	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	//�������ϵ����㷨
	system("pause");
	return EXIT_SUCCESS;
}