#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	//����һ���ַ�����������[0-9]��Сд��ĸ[a-z]��Ҫ�����ִ�С������ĸ��a��z���򣬲�����������������ĸ����
	
	multiset<char>s1;//�����ֽ�������
	multiset<char>s2;//����ĸ��������
	string name;
	cin >> name;
	for (int i = 0; i < name.length(); i++){
		if (name[i] >= '0' && name[i] <= '9'){
			s1.insert(name[i]);
		}
		else{
			s2.insert(name[i]);
		}
	}
	for (multiset<char>::iterator it = s2.begin(); it != s2.end(); it++){
		cout << *it;
	}
	for (multiset<char>::iterator it = s1.begin(); it != s1.end(); it++){
		cout << *it;
	}
	system("pause");
	return 0;
}