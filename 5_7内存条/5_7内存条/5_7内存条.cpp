#include <iostream>
#include <string>
using namespace std;
int main(){
	int L = 0, R = 0, W = 0;//5 3 4
	//������������Ļ�����ʣ�������С��4��д�������� �����ݵ�����С��3������������
	cin >> L >> R >> W;
	string str = "OK";
	for (int i = 0; i <= L; i++){
	//i���������ڴ����е�����
		if (i < R&&L - i < W){
			str = "DEADLOCK";
		}
	}
	cout << str << endl;

	system("pause");
	return EXIT_SUCCESS;
}