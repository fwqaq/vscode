#include <iostream>
#include <string>
using namespace std;
class Phone{
public:
	Phone(){
		cout << "Phone�޲ι��췽��" << endl;
	}
	Phone(string name){
		m_PhoneName = name;
	}
	~Phone(){
		cout << "Phone������������" << endl;
	}
	string m_PhoneName;
};
class Game{
public:
	Game(){
		cout << "��Ϸ���췽��" << endl;
	}
	Game(string name){
		m_GameName = name;
	}
	~Game(){
		cout << "��Ϸ������������" << endl;
	}
	string m_GameName;
};
class Person{
public:
	Person(){
		cout << "person�޲ι���" << endl;
	}
	~Person(){
		cout << "Person������������" << endl;
	}
	string m_Name;
	Phone m_Phone;
	Game m_Game;
};
void test(){
	Person p;
}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}