#pragma  once
#include <iostream>
#include "weapon.h"
#include "Moster.h"
#include <string>
using namespace std;
class Moster;
class Hero{
public:
	Hero();
	string m_Name;
	int m_Apk;//¹¥»÷
	int m_Def;//·ÀÓù
	int m_hp;//ÑªÁ¿
	Weapon* weapon;
	void EquipWeapon(Weapon* weapon);
	void Attack(Moster* moster);
};