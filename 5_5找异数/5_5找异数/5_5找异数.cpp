#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	string str;
	cin >> str;
	vector<string>v;//�洢���ǵ��ַ���
	vector<int>vv;//�洢���ǵ���ֵ�Ĵ�С
	while (str!="END"){
		//��str�������
		v.push_back(str);
		int i = 0;
		for (; i < str.length(); i++){
			if (str[i] == '#'){
				break;
			}
		}
		int a = atoi(str.substr(0, i).c_str());//������
		int b = atoi(str.substr(i + 1, str.length() - i - 1).c_str());//��ֵ�Ĵ�С
		int sum = 0;
		i = 0;
		while (b>0){
			if (b >= 'A'&&b <= 'F'){
				b = 10 + b - 'A';
			}
			sum = sum + b % 10 * pow(a, i);
			i++;
			b /= 10;
		}
		vv.push_back(sum);
		cin >> str;
	}
	//�ҳ���������ֻ��һ�����±�
	vector<int>vvv;
	for (int i = 0; i < vv.size(); i++){
		int flag = 0;
		for (int j = i+1; j < vv.size(); j++){
			if (vv[i] == vv[j]){
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			vvv.push_back(i);
		}
	}
	for (int i = 0; i < vvv.size(); i++){
		cout << v[vvv[i]] << endl;
	}
	
	system("pause");
	return EXIT_SUCCESS;
}