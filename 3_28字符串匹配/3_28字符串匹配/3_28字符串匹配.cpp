#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	//���������ַ���
	//�����������, ��һ��һ���ַ���A, �ַ���A����length(1 �� length �� 50), A��ÿ���ַ�����'0'����'1'��
	//	�ڶ���һ���ַ���B, �ַ���B����length(1 �� length �� 50), B�е��ַ�����'0', '1'��'?'��
	string A;
	string B;
	cin >> A;
	cin >> B;
	set<string>se;
	int A_len = A.length();
	int B_len = B.length();
	for (int i = 0; i < A_len - B_len + 1; i++){
		int flag = 1;
		for (int j = 0; j < B_len; j++){
			if (!(B[j] == A[i + j] || B[j] == '?')){
				flag = 0;
				break;
			}
		}
		if (flag){
			string s = A.substr(i, B_len);
			se.insert(s);
		}
	}
	cout << se.size() << endl;
	system("pause");
	return EXIT_SUCCESS;
}