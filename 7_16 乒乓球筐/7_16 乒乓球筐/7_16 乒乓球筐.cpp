#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2){
		vector<int>v1;
		vector<int>v2;
		v1.resize(26, 0);
		v2.resize(26, 0);

		//��str2�еĶ�������str1�е�
		for (int i = 0; i < str1.size(); i++){
			v1[str1[i] - 'A']++;
		}
		for (int i = 0; i < str2.size(); i++){
			v2[str2[i] - 'A']++;
		}
		//�ж���v2�е��ǲ��Ƕ�С�ڵ���
		int flag = 1;
		for (int i = 0; i < 26; i++){
			if (v2[i]>v1[i]){
				flag = 0;
				break;
			}
		}
		flag == 1 ? cout << "Yes" << endl : cout << "No" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}