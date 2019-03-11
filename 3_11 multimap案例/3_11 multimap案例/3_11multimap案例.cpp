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
	//�������Ա�����ҽ�Ա�����뵽vector��
	for (int i = 0; i < 5; i++){
		string name;
		int age;
		string num;
		int money;
		cout << "������Ա������ϸ��Ϣ:" << endl;
		cout << "������"; cin >> name;
		cout << "����"; cin >> age;
		cout << "�绰����"; cin >> num;
		cout << "��н"; cin >> money;
		Person p(name, age, num, money);
		v.push_back(p);
	}
}

void person_GroupBy(vector<Person>& v, multimap<int, Person>& m)
{
	cout << "��Ը�Ա�����в��ŷ���(1 ���۲���, 2 �з�����, 3 ������):" << endl;
	int num;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++){
		cout << "Ա����ϸ��Ϣ:" << endl;
		cout << "������" << it->m_Name << "  " << "����" << it->m_Age << "  " << "�绰����" << it->m_Num << "  " << "��н" << it->m_Money << endl;
		cout << "����������Ҫ��Ա������Ĳ��ŵĲ���";
		cin >> num;
		m.insert(pair<int, Person>(num, *it));
		m.insert(pair<int, Person>(4, *it));//��ʱ4�������ȫ��Ա���������Ǵ�ӡ��ʱ����ʱ����ӡ��ȫ��Ա��
	}
}

//��ӡԱ��
void print_Person(multimap<int, Person>& m){
	cout << "����������Ҫ��ӡԱ���Ĳ���(1 ���۲���, 2 �з�����, 3 �����ţ�4 ����Ա��):" << endl;
	int num = 0;
	cin >> num;
	if (num == 1){
		cout << "���۲���Ա����Ϣ��" << endl;
	}
	for (multimap<int, Person>::iterator it = m.begin(); it != m.end(); it++){
		if (num == (*it).first){
			Person p = (*it).second;
			cout << "Ա����ϸ��Ϣ:" << endl;
			cout << "������" << p.m_Name << "  " << "����" << p.m_Age << "  " << "�绰����" << p.m_Num << "  " << "��н" << p.m_Money << endl;
		}
	}
}

int main(){
	//��˾������Ƹ��5��Ա����5��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
	//��Ա��Ϣ��: ���� ���� �绰 ���ʵ����
	//ͨ��Multimap������Ϣ�Ĳ��� ���� ��ʾ
	//�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ
	vector<Person> v;
	multimap<int, Person> m;
	//�������Ա�����Ҽ��뵽vector��
	create_Person(v);
	//��Ա�����ղ��Ž��з���
	person_GroupBy(v, m);
	//��ӡԱ��
	print_Person(m);
	system("pause");
	return EXIT_SUCCESS;
}