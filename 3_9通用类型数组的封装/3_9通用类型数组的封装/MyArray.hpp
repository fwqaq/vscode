#pragma  once
#include <iostream>
using namespace std;
template <class T>
class MyArray{
public:
	//构造  explicit//防止隐式类型转换
	explicit MyArray(int ccapacity){
		this->m_Capacity = ccapacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray& array){
		this->m_Capacity = array.m_Capacity;
		this->m_size = array.m_size;
		this->pAddress = new[this->m_Capacity];
		for (int i = 0; i < m_size; i++){
			this->pAddress[i] = arr[i];
		}
	}
	~MyArray(){
		if (this->pAddress != NULL){
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	//赋值操作符重载
	MyArray& operator=(MyArray& array){
		if (this->pAddress != NULL){
			detele[] this->pAddress;
			this->pAddress = NULL;
		}
		this->m_Capacity = array.m_Capacity;
		this->m_size = array.m_size;
		this->pAddress = new[this->m_Capacity];
		for (int i = 0; i < m_size; i++){
			this->pAddress[i] = arr[i];
		}
	}
	//[]重载
	T& operator[](int index){
		return this->pAddress[index];
	}
	//尾插法
	void push_Back(T val){
		this->pAddress[this->m_size] = val;
		this->m_size++;
	}

	//获取大小
	int getSize(){
		return this->m_size;
	}
	//获取容量
	int getCapacity(){
		return this->m_Capacity;
	}
private:
	T* pAddress;//指向堆区的指针
	int  m_Capacity;//容量
	int m_size;//大小
};