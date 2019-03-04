#pragma  once
#include <iostream>
using namespace std;


class MyString{
	friend ostream& operator<<(ostream& cout, const MyString& str);
	friend istream& operator>>(istream& cin,MyString& str);
public:
	MyString(const char* str);
	MyString(const MyString& str);
	//对=运算符进行重载
	MyString& operator=(const MyString* str);
	MyString& operator=(const MyString& str);

	//对+进行重载
	MyString operator+(const MyString* str);
	MyString operator+(const MyString& str);

	//对==进行重组
	bool operator==(const char* str);

	~MyString();
private:
	char* pString;//执行堆区的指针
	int m_Size;//字符串的大小
};