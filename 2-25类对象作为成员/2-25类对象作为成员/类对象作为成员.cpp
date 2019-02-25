#include <iostream>
#include <string>
using namespace std;
class Phone{
public:
	Phone(){
		cout << "Phone无参构造方法" << endl;
	}
	Phone(string name){
		m_PhoneName = name;
	}
	~Phone(){
		cout << "Phone析构函数调用" << endl;
	}
	string m_PhoneName;
};
class Game{
public:
	Game(){
		cout << "游戏构造方法" << endl;
	}
	Game(string name){
		m_GameName = name;
	}
	~Game(){
		cout << "游戏析构函数调用" << endl;
	}
	string m_GameName;
};
class Person{
public:
	Person(){
		cout << "person无参构造" << endl;
	}
	~Person(){
		cout << "Person析构函数调用" << endl;
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