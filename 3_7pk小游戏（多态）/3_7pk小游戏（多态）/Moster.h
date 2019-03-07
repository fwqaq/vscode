#pragma  once
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
class Hero;
class Moster{
public:
	Moster();
	string m_Name;
	int m_Hp;
	int m_Atk;
	int m_Def;
	bool isHold;
	void Attack(Hero* hero);
};
