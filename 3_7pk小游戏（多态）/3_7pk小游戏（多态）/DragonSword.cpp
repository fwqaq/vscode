#include <iostream>
#include <string>
#include "DragonSword.h"
using namespace std;

DragonSword::DragonSword()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "��������";
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
		return this->m_BaseDamage / 2;//�������������˺���һ�������Ѫ
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
//�ж��Ƿ񴥷�һЩ��Ϊ
bool DragonSword::isTrigger(int rate)
{
	//ͨ��isTrigger�ж��Ƿ񴥷�
	//���һ��0����100����
	int num = rand() % 100 + 1;
	if (num < rate){
		return true;
	}
	else{
		return false;
	}
}

