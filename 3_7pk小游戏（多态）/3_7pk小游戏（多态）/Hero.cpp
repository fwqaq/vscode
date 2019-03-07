#include "Hero.h"
#include "Moster.h"

Hero::Hero()
{
	this->m_hp = 500;
	this->m_Apk = 50;
	this->m_Def = 50;
	this->m_Name = "法师";
	this->weapon = NULL;
}
//装备武器
void Hero::EquipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
	cout << this->m_Name << "装备了" << this->weapon->m_WeaponName << endl;
}
//攻击
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
		//计算xixue
		addHp = this->weapon->getSuckBlood();
		//计算定身
		is_Hold = this->weapon->getHold();
		//计算暴击
		is_Crit = this->weapon->getCrit();
	}
	if (is_Crit){
		damage = damage * 2;
		cout << this->m_Name << "的武器触发暴击怪物收到双倍伤害"
			<< "收到" << damage << "伤害" << endl;
	}
	if (is_Hold)
	{
		cout << "停止攻击一个回合" << endl;
	}
	if (addHp > 0){
		cout << "触发了吸血效果" <<"增加了血量"<< endl;
	}

	//设置怪物是否被定身
	moster->isHold = is_Hold;
	//计算真是伤害
	int trueDamage = (damage - moster->m_Def) > 0 ? (damage - moster->m_Def) : 1;
	//掉血
	moster->m_Hp = moster->m_Hp - trueDamage;
	//xixue
	this->m_hp = this->m_hp + addHp;
	cout << this->m_Name << "攻击了" << moster->m_Name << "造成了" << trueDamage <<"点伤害"<< endl;
}
