#include <iostream>
#include <string>
#include "Knife.h"
using namespace std;

Knife::Knife()
{
	this->m_BaseDamage = 10;
	this->m_WeaponName = "С��";
}

int Knife::getBaseDamage()
{
	return this->m_BaseDamage;
}

int Knife::getSuckBlood()
{
	return 0;
}

bool Knife::getHold()
{
	return false;
}

bool Knife::getCrit()
{
	return false;
}
