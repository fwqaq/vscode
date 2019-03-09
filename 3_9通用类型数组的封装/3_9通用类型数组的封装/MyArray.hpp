#pragma  once
#include <iostream>
using namespace std;
template <class T>
class MyArray{
public:
	//����  explicit//��ֹ��ʽ����ת��
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
	//��ֵ����������
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
	//[]����
	T& operator[](int index){
		return this->pAddress[index];
	}
	//β�巨
	void push_Back(T val){
		this->pAddress[this->m_size] = val;
		this->m_size++;
	}

	//��ȡ��С
	int getSize(){
		return this->m_size;
	}
	//��ȡ����
	int getCapacity(){
		return this->m_Capacity;
	}
private:
	T* pAddress;//ָ�������ָ��
	int  m_Capacity;//����
	int m_size;//��С
};