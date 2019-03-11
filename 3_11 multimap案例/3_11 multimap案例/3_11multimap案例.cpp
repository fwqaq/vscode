#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <string>
class Person{
public:
	Person(string name,int age,string num,int money){
		this->m_Name = name;
		this->m_Age = age;
		this->m_Num = num;
		this->m_Money = money;
	}
	string m_Name;
	int m_Age;
	string m_Num;
	int m_Money;
};
void create_Person(vector<Person>& v){
	//创建五个员工并且将员工加入到vector中
	for (int i = 0; i < 5; i++){
		string name;
		int age;
		string num;
		int money;
		cout << "请输入员工的详细信息:" << endl;
		cout << "姓名："; cin >> name;
		cout << "年龄"; cin >> age;
		cout << "电话号码"; cin >> num;
		cout << "月薪"; cin >> money;
		Person p(name, age, num, money);
		v.push_back(p);
	}
}

void person_GroupBy(vector<Person>& v, multimap<int, Person>& m)
{
	cout << "请对该员工进行部门分配(1 销售部门, 2 研发部门, 3 财务部门):" << endl;
	int num;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++){
		cout << "员工详细信息:" << endl;
		cout << "姓名：" << it->m_Name << "  " << "年龄" << it->m_Age << "  " << "电话号码" << it->m_Num << "  " << "月薪" << it->m_Money << endl;
		cout << "请输入你需要将员工分配的部门的操作";
		cin >> num;
		m.insert(pair<int, Person>(num, *it));
		m.insert(pair<int, Person>(4, *it));//此时4代表的是全部员工，在我们打印的时候有时候会打印出全部员工
	}
}

//打印员工
void print_Person(multimap<int, Person>& m){
	cout << "请输入你需要打印员工的部门(1 销售部门, 2 研发部门, 3 财务部门，4 所有员工):" << endl;
	int num = 0;
	cin >> num;
	if (num == 1){
		cout << "销售部门员工信息表" << endl;
	}
	for (multimap<int, Person>::iterator it = m.begin(); it != m.end(); it++){
		if (num == (*it).first){
			Person p = (*it).second;
			cout << "员工详细信息:" << endl;
			cout << "姓名：" << p.m_Name << "  " << "年龄" << p.m_Age << "  " << "电话号码" << p.m_Num << "  " << "月薪" << p.m_Money << endl;
		}
	}
}

int main(){
	//公司今天招聘了5个员工，5名员工进入公司之后，需要指派员工在那个部门工作
	//人员信息有: 姓名 年龄 电话 工资等组成
	//通过Multimap进行信息的插入 保存 显示
	//分部门显示员工信息 显示全部员工信息
	vector<Person> v;
	multimap<int, Person> m;
	//创建五个员工并且加入到vector中
	create_Person(v);
	//将员工按照部门进行分类
	person_GroupBy(v, m);
	//打印员工
	print_Person(m);
	system("pause");
	return EXIT_SUCCESS;
}