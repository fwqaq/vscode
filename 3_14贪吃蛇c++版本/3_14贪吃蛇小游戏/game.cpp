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
	pos.X = x;//横坐标
	pos.Y = y;//纵坐标
	SetConsoleCursorPosition(hOut, pos);
}
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);//定义显示器句柄变量
int main(){
	srand((unsigned int)time(0));
	//是否死亡
	bool isDead = false;
	//上一次的方向
	char preKey = NULL;
	Wall wa;
	wa.initWall();
	wa.drawWall();

	Food food(wa);
	food.setFood();
	Snake snake(wa,food);
	snake.initSnake();
	gotoxy(hOut, 0, Wall::ROW);
	cout << "得分：" << snake.getScore() << endl;
	//接收用户的输入
	while (!isDead){
		char key = _getch();
		//判断如果是第一次按了左键，才不能激活游戏
		//判断上一次的方向
		if (preKey == NULL&&key == snake.LEFT){
			continue;
		}
			do 
			{
				if (key == snake.UP || key == snake.DOWN || key == snake.LEFT || key == snake.RIGHT){
					//判断本次的按键是否发生了冲突
					if (key == snake.LEFT&&preKey == snake.RIGHT ||
						key == snake.RIGHT&&preKey == snake.LEFT ||
						key == snake.UP&&preKey == snake.DOWN ||
						key == snake.DOWN&&preKey == snake.UP)
					{
						key = preKey;
					}
					else{
						preKey = key;//不是冲突按键就更新按键
					}
					if (snake.move(key)){
						//移动成功；
						//system("cls");
						//wa.drawWall();
						gotoxy(hOut, 0, Wall::ROW);
						cout <<"得分：" << snake.getScore() << endl;
						Sleep(snake.getSleepTime());
					}
				else{
					isDead = true;
					break;
				}
			}
		else{
			key = preKey;//强制将按错的按键等于上一次的按键
		}

			} while (!_kbhit());//当没有键盘输入的时候返回0
		
			
		
	}
	system("pause");
	return EXIT_SUCCESS;
}