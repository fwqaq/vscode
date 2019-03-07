#include "Hero.h"
#include "Moster.h"

Hero::Hero()
{
	this->m_hp = 500;
	this->m_Apk = 50;
	this->m_Def = 50;
	this->m_Name = "��ʦ";
	this->weapon = NULL;
}
//װ������
void Hero::EquipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
	cout << this->m_Name << "װ����" << this->weapon->m_WeaponName << endl;
}
//����
void Hero::Attack(Moster* moster)
{
	int damage = 0;
	int addHp = 0;
	bool is_Hold = false;
	bool is_Crit = false;
	if (this->weapon == NULL){
		damage = this->m_Apk;
	}
	else{
		damage = this->m_Apk + this->weapon->getBaseDamage();
		//����xixue
		addHp = this->weapon->getSuckBlood();
		//���㶨��
		is_Hold = this->weapon->getHold();
		//���㱩��
		is_Crit = this->weapon->getCrit();
	}
	if (is_Crit){
		damage = damage * 2;
		cout << this->m_Name << "�������������������յ�˫���˺�"
			<< "�յ�" << damage << "�˺�" << endl;
	}
	if (is_Hold)
	{
		cout << "ֹͣ����һ���غ�" << endl;
	}
	if (addHp > 0){
		cout << "��������ѪЧ��" <<"������Ѫ��"<< endl;
	}

	//���ù����Ƿ񱻶���
	moster->isHold = is_Hold;
	//���������˺�
	int trueDamage = (damage - moster->m_Def) > 0 ? (damage - moster->m_Def) : 1;
	//��Ѫ
	moster->m_Hp = moster->m_Hp - trueDamage;
	//xixue
	this->m_hp = this->m_hp + addHp;
	cout << this->m_Name << "������" << moster->m_Name << "�����" << trueDamage <<"���˺�"<< endl;
}
