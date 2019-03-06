#include <iostream>
#include <assert.h>
using namespace std;
int MinIn(int* arr, int m_min, int m_max);
int Min(int arr[], int size){
	assert(arr != NULL);
	assert(size > 0);
	int m_max = size - 1;
	int m_min = 0;
	int mid_num = m_min;
	while (arr[m_min] >= arr[m_max]){
		if (m_max - m_min == 1){
			mid_num = m_max;
			break;
		}
		mid_num = (m_min + m_max) / 2;
		if (arr[m_min] == arr[m_max] &&
			arr[mid_num] == arr[m_min]){
			return MinIn(arr, m_min, m_max);
		}
		if (arr[mid_num] >= arr[m_min]){
			m_min = mid_num;
		}
		else if (arr[mid_num] <= arr[m_max]){
			m_max = mid_num;
		}
	}
	return mid_num;
}
//��ʱ���ǲ����ж��ڰ������䣬��Ҫʹ��ȫ�������ķ�ʽȥ������С��ֵ
int MinIn(int* arr, int m_min, int m_max){
	int result = arr[m_min];
	for (int i = m_min + 1; i <= m_max; i++){
		if (arr[i] < result){
			result = arr[i];
		}
	}
	return result;
}
int main(){
	//��Ŀ����һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת
	//����һ���������е���ת���ҵ���С����ת����
	//��ʱ����ֻ��Ҫ�ҵ���С���ֵ��±�
	int arr[] = { 5, 6, 7, 1, 2, 3};
	int size = sizeof(arr) / sizeof(int);
	cout << Min(arr, size) << endl;
	system("pause");
	return EXIT_SUCCESS;
}