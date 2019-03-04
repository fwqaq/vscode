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
		cout << "Person析构了" << endl;
	}
public:
	int m_Age;
};
//智能指针类
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
		cout << "smartPoint析构了" << endl;
	}
	//对->进行重载的操作
	Person* operator->(){
		return this->person;  //此时返回的是一个Person*    调用showAge()时应该是person->->   此时是编译器进行优化
	}

	//对*进行重载的操作   返回值是一个本体
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