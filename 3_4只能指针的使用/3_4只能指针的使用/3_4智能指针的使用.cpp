#include <iostream>
using namespace std;
class Person{
public:
	Person(int m_Age){
		this->m_Age = m_Age;
	}

	void showAge(){
		cout << this->m_Age << endl;
	}
	~Person(){
		cout << "Person������" << endl;
	}
public:
	int m_Age;
};
//����ָ����
class smartPoint{
public:
	smartPoint(Person* person){
		this->person = person;
	}
	~smartPoint(){
		if (person != NULL){
			delete(person);
			this->person = NULL;
		}
		cout << "smartPoint������" << endl;
	}
	//��->�������صĲ���
	Person* operator->(){
		return this->person;  //��ʱ���ص���һ��Person*    ����showAge()ʱӦ����person->->   ��ʱ�Ǳ����������Ż�
	}

	//��*�������صĲ���   ����ֵ��һ������
	Person& operator*(){  
		return *this->person;
	}
private:
	Person* person;
};
void test(){
	smartPoint sp(new Person(20));
	sp->showAge();
	(*sp).showAge();
}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}