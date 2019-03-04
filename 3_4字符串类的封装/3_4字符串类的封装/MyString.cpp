#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <string>

ostream& operator<<(ostream& cout,const MyString& str){//左移运算符的重载
	cout << str.pString;
	return cout;
}
istream& operator>>(istream& cin, MyString& str){
	//先清空原有的数据
	if (str.pString != NULL){
		delete[] str.pString;
	}
	char buf[1024];
	cin >> buf;
	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);
	//让用户输入字符串
	return cin;
}
MyString::MyString(const char* str)
{
	cout << "有参构造" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);

}

MyString::MyString(const MyString& str)
{
	cout << "拷贝构造" << endl;
	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;
}

MyString& MyString::operator=(const MyString* str)
{
	//1.对本体进行清空操作
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
	//对本体进行清空
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
	//1.计算出新的长度
	int newSize = this->m_Size + strlen(str->pString) + 1;
	//2.定义一个新的指针去指向这个
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	//3.拼接字符串
	strcat(temp, this->pString);
	strcat(temp, str->pString);
	MyString newString(temp);
	delete[] temp;
	return newString;
}

MyString MyString::operator+(const MyString& str)
{
	//1.计算出新的长度
	int newSize = this->m_Size + strlen(str.pString) + 1;
	//2.定义一个新的指针去指向这个
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	//3.拼接字符串
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
	cout << "析构函数执行" << endl;
}
