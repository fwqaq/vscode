/*
����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�
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
				cout << "��һ������" << i << endl;
				cout << "�ڶ�������" << j << endl;
				break;
			}
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}