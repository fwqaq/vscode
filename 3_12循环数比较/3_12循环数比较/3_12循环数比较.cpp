#include <iostream>
#include <string>
using namespace std;

int main(){
	/*
	������������������x��k,���Ƕ���repeat(x, k)Ϊ��x�ظ�дk���γɵ���,����repeat(1234, 3) = 123412341234,repeat(20,2) = 2020.
	ţţ���ڸ���4������x1, k1, x2, k2, ����v1 = (x1, k1), v2 = (x2, k2),�������Ƚ�v1��v2�Ĵ�С��
	*/
	string x1;
	int k1;
	string x2;
	int k2;
	cin >> x1;
	cin >> k1;
	cin >> x2;
	cin >> k2;
	string str1;
	string str2;
	for (int i = 0; i < k1; i++){
		str1 += x1;
	}
	for (int i = 0; i < k2; i++){
		str2 += x2;
	}

	int num = str1.length() - str2.length();
	int num2 = str1.compare(str2);
	if (num == 0){
		if (num2 == 0){
			cout << "Equal" << endl;
		}
		if (num2>0){
			cout << "Greater" << endl;
		}
		if (num2<0){
			cout << "Less" << endl;
		}
	}
	if (num>0){
		cout << "Greater" << endl;
	}
	if (num < 0){
		cout << "Less" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}