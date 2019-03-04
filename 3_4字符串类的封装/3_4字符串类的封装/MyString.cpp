#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <string>

ostream& operator<<(ostream& cout,const MyString& str){//���������������
	cout << str.pString;
	return cout;
}
istream& operator>>(istream& cin, MyString& str){
	//�����ԭ�е�����
	if (str.pString != NULL){
		delete[] str.pString;
	}
	char buf[1024];
	cin >> buf;
	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);
	//���û������ַ���
	return cin;
}
MyString::MyString(const char* str)
{
	cout << "�вι���" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);

}

MyString::MyString(const MyString& str)
{
	cout << "��������" << endl;
	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;
}

MyString& MyString::operator=(const MyString* str)
{
	//1.�Ա��������ղ���
	if (this != NULL){
		delete this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(str->pString) + 1];
	strcpy(this->pString, str->pString);
	this->m_Size = str->m_Size;

	return *this;
}

MyString& MyString::operator=(const MyString& str)
{
	//�Ա���������
	if (this != NULL){
		delete this->pString;
		this->pString = NULL;
	}
	this->pString = new char[str.m_Size + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;

	return *this;
}

MyString MyString::operator+(const MyString* str)
{
	//1.������µĳ���
	int newSize = this->m_Size + strlen(str->pString) + 1;
	//2.����һ���µ�ָ��ȥָ�����
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	//3.ƴ���ַ���
	strcat(temp, this->pString);
	strcat(temp, str->pString);
	MyString newString(temp);
	delete[] temp;
	return newString;
}

MyString MyString::operator+(const MyString& str)
{
	//1.������µĳ���
	int newSize = this->m_Size + strlen(str.pString) + 1;
	//2.����һ���µ�ָ��ȥָ�����
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	//3.ƴ���ַ���
	strcat(temp, this->pString);
	strcat(temp, str.pString);
	MyString newString(temp);
	delete[] temp;
	return newString;

}

bool MyString::operator==(const char* str)
{
	if (strcmp(this->pString, str) == 0 && this->m_Size - strlen(str) == 0){
		return true;
	}
	return false;

}

MyString::~MyString()
{
	if (this->pString != NULL){
		delete[] this->pString;
		this->pString = NULL;
	}
	cout << "��������ִ��" << endl;
}
