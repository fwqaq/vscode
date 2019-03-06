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
//此时我们不能判断在按个区间，需要使用全部遍历的方式去查找最小的值
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
	//题目：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转
	//输入一个递增序列的旋转，找到最小的旋转数字
	//此时我们只需要找到最小数字的下标
	int arr[] = { 5, 6, 7, 1, 2, 3};
	int size = sizeof(arr) / sizeof(int);
	cout << Min(arr, size) << endl;
	system("pause");
	return EXIT_SUCCESS;
}