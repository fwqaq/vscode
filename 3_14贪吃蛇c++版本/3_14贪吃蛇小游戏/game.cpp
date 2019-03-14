#include <iostream>
#include "wall.h"
#include "snake.h"
#include "food.h"
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(HANDLE hOut, int x, int y){
	COORD pos;
	pos.X = x;//������
	pos.Y = y;//������
	SetConsoleCursorPosition(hOut, pos);
}
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);//������ʾ���������
int main(){
	srand((unsigned int)time(0));
	//�Ƿ�����
	bool isDead = false;
	//��һ�εķ���
	char preKey = NULL;
	Wall wa;
	wa.initWall();
	wa.drawWall();

	Food food(wa);
	food.setFood();
	Snake snake(wa,food);
	snake.initSnake();
	gotoxy(hOut, 0, Wall::ROW);
	cout << "�÷֣�" << snake.getScore() << endl;
	//�����û�������
	while (!isDead){
		char key = _getch();
		//�ж�����ǵ�һ�ΰ���������Ų��ܼ�����Ϸ
		//�ж���һ�εķ���
		if (preKey == NULL&&key == snake.LEFT){
			continue;
		}
			do 
			{
				if (key == snake.UP || key == snake.DOWN || key == snake.LEFT || key == snake.RIGHT){
					//�жϱ��εİ����Ƿ����˳�ͻ
					if (key == snake.LEFT&&preKey == snake.RIGHT ||
						key == snake.RIGHT&&preKey == snake.LEFT ||
						key == snake.UP&&preKey == snake.DOWN ||
						key == snake.DOWN&&preKey == snake.UP)
					{
						key = preKey;
					}
					else{
						preKey = key;//���ǳ�ͻ�����͸��°���
					}
					if (snake.move(key)){
						//�ƶ��ɹ���
						//system("cls");
						//wa.drawWall();
						gotoxy(hOut, 0, Wall::ROW);
						cout <<"�÷֣�" << snake.getScore() << endl;
						Sleep(snake.getSleepTime());
					}
				else{
					isDead = true;
					break;
				}
			}
		else{
			key = preKey;//ǿ�ƽ�����İ���������һ�εİ���
		}

			} while (!_kbhit());//��û�м��������ʱ�򷵻�0
		
			
		
	}
	system("pause");
	return EXIT_SUCCESS;
}