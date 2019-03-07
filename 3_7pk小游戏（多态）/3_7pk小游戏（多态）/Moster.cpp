#include "Moster.h"

Moster::Moster()
{
	this->m_Hp = 300;
	this->m_Atk = 70;
	this->isHold = false;
	this->m_Def = 40;
	this->m_Name = "������";

}

void Moster::Attack(Hero* hero)
{
	if (this->isHold){
		cout << "����" << this->m_Name << "��������" << endl;
	}
	int damage = (this->m_Atk - hero->m_Def) > 0 ? (this->m_Atk - hero->m_Def) : 1;
	hero->m_hp -= damage;
	cout << this->m_Name << "������" << hero->m_Name << "�����" << damage << "���˺�" << endl;


}
