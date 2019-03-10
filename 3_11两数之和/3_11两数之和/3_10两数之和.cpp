/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
*/
#include <iostream>
using namespace std;
#include <vector>

int main(){
	int arr[] = { 2, 7, 11, 15 };
	int num = 9;
	for (int i = 0; i < 3; i++){
		for (int j = i+1; j < 4; j++){
			if (num == arr[i] + arr[j]){
				cout << "第一个索引" << i << endl;
				cout << "第二个索引" << j << endl;
				break;
			}
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}