#include <iostream>
#include <string>
#include "DragonSword.h"
using namespace std;

DragonSword::DragonSword()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "屠龙宝刀";
	this->suckRate = 20;
	this->holdRate = 30;
	this->critRate = 35;
}

int DragonSword::getBaseDamage()
{
	return this->m_BaseDamage;
}

int DragonSword::getSuckBlood()
{
	if (isTrigger(suckRate)){
		return this->m_BaseDamage / 2;//按照武器基础伤害的一半进行吸血
	}
	return 0;
}

bool DragonSword::getHold()
{
	if (isTrigger(holdRate)){
		return true;
	}
	return false;
}

bool DragonSword::getCrit()
{
	if (isTrigger(critRate)){
		return true;
	}
	return false;
}
//判断是否触发一些行为
bool DragonSword::isTrigger(int rate)
{
	//通过isTrigger判断是否触发
	//随机一个0——100数字
	int num = rand() % 100 + 1;
	if (num < rate){
		return true;
	}
	else{
		return false;
	}
}

