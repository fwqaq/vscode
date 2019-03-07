#include "Moster.h"

Moster::Moster()
{
	this->m_Hp = 300;
	this->m_Atk = 70;
	this->isHold = false;
	this->m_Def = 40;
	this->m_Name = "西蓝花";

}

void Moster::Attack(Hero* hero)
{
	if (this->isHold){
		cout << "怪物" << this->m_Name << "被定身了" << endl;
	}
	int damage = (this->m_Atk - hero->m_Def) > 0 ? (this->m_Atk - hero->m_Def) : 1;
	hero->m_hp -= damage;
	cout << this->m_Name << "攻击了" << hero->m_Name << "造成了" << damage << "点伤害" << endl;


}
