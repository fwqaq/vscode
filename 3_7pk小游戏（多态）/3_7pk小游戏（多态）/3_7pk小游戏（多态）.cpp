#include <iostream>
using namespace std;
#include "Moster.h"
#include "Knife.h"
#include "Hero.h"
#include "DragonSword.h"
#include "weapon.h"
int main(){
	//创建怪物
	Moster* moster = new Moster;
	//创建英雄
	Hero* hero = new Hero;
	//创建武器
	Weapon* knife = new Knife;
	Weapon* dargon = new DragonSword;
	cout << "请选择武器" << endl;
	cout << "1.赤手空拳" << endl;
	cout << "2.小刀" << endl;
	cout << "3.屠龙宝刀" << endl;
	int oper = 0;
	cin >> oper;
	switch (oper){
	case 1:cout << "你选择空拳" << endl;
		break;
	case 2:hero->EquipWeapon(knife);
		break;
	case 3:hero->EquipWeapon(dargon);
	}
	int round = 1;//纪录当前的回合数
	getchar();//输入缓冲区里面有个回车 多获取一个回车
	while (true){
		getchar();
		system("cls");
		cout << "当前是第" << round << endl;
		
		hero->Attack(moster);
		if (moster->m_Hp <= 0){
			cout << moster->m_Name << "被你击杀" << endl;
			cout << "game over" << endl;
			break;
		}
		moster->Attack(hero);
		if (hero->m_hp <= 0){
			cout << hero->m_Name << "你被击败了" << endl;
			cout << "game over" << endl;
			break;
		}
		cout << "英雄剩余血量" << hero->m_hp << endl;
		cout << "怪物的剩余血量" << moster->m_Hp << endl;
		++round;

	}
	system("pause");
	return EXIT_SUCCESS;
}