#include <iostream>
using namespace std;
#include "Moster.h"
#include "Knife.h"
#include "Hero.h"
#include "DragonSword.h"
#include "weapon.h"
int main(){
	//��������
	Moster* moster = new Moster;
	//����Ӣ��
	Hero* hero = new Hero;
	//��������
	Weapon* knife = new Knife;
	Weapon* dargon = new DragonSword;
	cout << "��ѡ������" << endl;
	cout << "1.���ֿ�ȭ" << endl;
	cout << "2.С��" << endl;
	cout << "3.��������" << endl;
	int oper = 0;
	cin >> oper;
	switch (oper){
	case 1:cout << "��ѡ���ȭ" << endl;
		break;
	case 2:hero->EquipWeapon(knife);
		break;
	case 3:hero->EquipWeapon(dargon);
	}
	int round = 1;//��¼��ǰ�Ļغ���
	getchar();//���뻺���������и��س� ���ȡһ���س�
	while (true){
		getchar();
		system("cls");
		cout << "��ǰ�ǵ�" << round << endl;
		
		hero->Attack(moster);
		if (moster->m_Hp <= 0){
			cout << moster->m_Name << "�����ɱ" << endl;
			cout << "game over" << endl;
			break;
		}
		moster->Attack(hero);
		if (hero->m_hp <= 0){
			cout << hero->m_Name << "�㱻������" << endl;
			cout << "game over" << endl;
			break;
		}
		cout << "Ӣ��ʣ��Ѫ��" << hero->m_hp << endl;
		cout << "�����ʣ��Ѫ��" << moster->m_Hp << endl;
		++round;

	}
	system("pause");
	return EXIT_SUCCESS;
}