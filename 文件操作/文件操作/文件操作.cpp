#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void)
{
	string str;
	ofstream outFlie("../outText.txt");
	ofstream filego("./here", ios::binary);
	cout << "������Ҫд��outText�е�����:";
	cin >> str;
	outFlie << str;
	cout << "�ɹ���\"" << str << "\"д�뵽�ļ���!\n";
	outFlie.close();

	outFlie.open("../outText.txt", ios::app);
	cout << "������Ҫ׷�ӵ����֣�";
	cin >> str;
	outFlie << str;
	cout << "�ɹ���\"" << str << "\"д�뵽�ļ���!\n";
	outFlie.close();

	system("pause");
	return 0;
}