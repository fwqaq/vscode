#include <iostream>
using namespace std;
class Animal{
public:
	int m_Age;
};
class Tuo :virtual public Animal{

};
class Sheep :virtual public Animal{

};
class SheepTuo :public Tuo, public Sheep{

};
//菱形继承的解决方案  利用虚继承 在public前面加上virtual  
void test(){

	SheepTuo st;
	st.Sheep::m_Age = 10;
	st.Tuo::m_Age = 20;
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age<< endl;
}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}