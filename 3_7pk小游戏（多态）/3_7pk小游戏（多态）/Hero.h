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
	int m_Apk;//����
	int m_Def;//����
	int m_hp;//Ѫ��
	Weapon* weapon;
	void EquipWeapon(Weapon* weapon);
	void Attack(Moster* moster);
};