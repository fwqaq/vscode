#include "MyArray.h"

//默认构造
MyArray::MyArray()
{
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];

}

//有参构造 参数数组容量
MyArray::MyArray(int capacity)
{
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];

}

//拷贝构造
MyArray::MyArray(const MyArray& array)
{
	this->pAddress = new int[array.m_Capacity];
	this->m_Size = array.m_Size;
	this->m_Capacity = array.m_Capacity;
	for (int i = 0; i < array.m_Size; i++){
		this->pAddress[i] = array.pAddress[i];
	}
}

//析构
MyArray::~MyArray()
{
	if (this->pAddress != NULL){
		delete[] this->pAddress;
		this->pAddress = NULL;
	}
}

//尾插法
void MyArray::push_Back(int val)
{
	//没有进行范围的越界判定
	this->pAddress[this->m_Size] = val;
	++this->m_Size;
}

//根据索引得到值
int MyArray::getData(int index)
{
	//此时判断index是否越界
	if (index<0 || index>(this->m_Size)){
		return 0;
	}
	else{
		return this->pAddress[index];
	}
}

//根据索引设置值
void MyArray::setData(int index,int val)
{
	//此时判断index是否越界
	if (index<0 || index>(this->m_Size)){
		return;
	}
	else{
		this->pAddress[index] = val;
	}
}
