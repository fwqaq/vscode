#pragma  once
#include <iostream>
using namespace std;


class MyString{
	friend ostream& operator<<(ostream& cout, const MyString& str);
	friend istream& operator>>(istream& cin,MyString& str);
public:
	MyString(const char* str);
	MyString(const MyString& str);
	//��=�������������
	MyString& operator=(const MyString* str);
	MyString& operator=(const MyString& str);

	//��+��������
	MyString operator+(const MyString* str);
	MyString operator+(const MyString& str);

	//��==��������
	bool operator==(const char* str);

	~MyString();
private:
	char* pString;//ִ�ж�����ָ��
	int m_Size;//�ַ����Ĵ�С
};