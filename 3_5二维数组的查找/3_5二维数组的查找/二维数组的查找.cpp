#include <iostream>
using namespace std;
bool Find(int* matrix,int row, int col, int number){
	//����һ����ֵbool����
	bool found = false;//��ʼ��Ϊû�ҵ�
	if (matrix != NULL&&row > 0 && col > 0){
		int r = 0;
		int c = col - 1;
		while (r<row&&c>0){
			if (matrix[r*col+c] == number){//��ʱ��Ϊ��ά�����ǰ��������ڴ�洢��
				found = true;
				break;
			}
			else if (matrix[r*col + c] > number){
				++c;
			}
			else if (matrix[r*col + c] < number){
				--r;
			}
		}
	}
	return found;
}
int main(){
	int arr[2][2] = { 1, 2, 3, 5 };
	cout << Find(*arr, 2, 2, 2) << endl;
	system("pause");
	return EXIT_SUCCESS;
}