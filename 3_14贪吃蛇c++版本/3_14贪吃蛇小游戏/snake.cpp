#include "snake.h"
#include <windows.h>
void gotoxy1(HANDLE hOut1, int x, int y){
	COORD pos;
	pos.X = x;//横坐标
	pos.Y = y;//纵坐标
	SetConsoleCursorPosition(hOut1, pos);
}
HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE);//定义显示器句柄变量

Snake::Snake(Wall& tempWall,Food& food):wall(tempWall), food(food)
{
	pHead = NULL;
	isRool = false;
}

void Snake::initSnake()
{
	destroyPoint();
	addPoint(5, 3);
	addPoint(5, 4);
	addPoint(5, 5);
}

//销毁所有的节点
void Snake::destroyPoint()
{
	Point* pCur = pHead;
	while (pHead != NULL){
		pCur = pHead->next;
		delete pHead;
		pHead = pCur;
	}
}

void Snake::addPoint(int x, int y)
{
	//创建一个新节点
	Point* newPoint = new Point;
	newPoint->x = x;
	newPoint->y = y;
	newPoint->next = NULL;

	//如果原来头不为空的时候，改为身子
	if (pHead != NULL){
		wall.setWall(pHead->x,pHead->y,'=');
		gotoxy1(hOut1, pHead->y * 2, pHead->x);
		cout << "=";
	}
	newPoint->next = pHead;
	pHead = newPoint;
	wall.setWall(pHead->x, pHead->y, '@');
	gotoxy1(hOut1, pHead->y * 2, pHead->x);
	cout << "@";
}
//删除节点
void Snake::delPoint()
{
	//两个节点以上才去做删除操作
	if (pHead == NULL || pHead->next == NULL){
		return;
	}
	Point* pCur = pHead->next;
	Point* pPre = pHead;
	while (pCur->next != NULL){
		pPre = pPre->next;
		pCur = pCur->next;
	}
	wall.setWall(pCur->x, pCur->y, ' ');
	gotoxy1(hOut1, pCur->y * 2, pCur->x);
	cout << " " << endl;

	delete pCur;
	pCur = NULL;
	pPre->next = NULL;
}

bool Snake::move(char key)
{
	int x = pHead->x;
	int y = pHead->y;
	switch (key){
		case UP:	x--; break;
		case DOWN:x++; break;
		case LEFT : y--; break;
		case RIGHT:y++; break;
		default:break;
	}
	//判断下一次碰到尾巴的时候就不会死亡
	Point* pCur = pHead->next;
	Point* pPre = pHead;
	while (pCur->next != NULL){
		pPre = pPre->next;
		pCur = pCur->next;
	}
	if (pCur->x == x&&pCur->y == y){
		//碰到未必
		isRool = true;
	}
	else{
		if (wall.getWall(x, y) == '*' || wall.getWall(x, y) == '='){
			addPoint(x, y);
			delPoint();
			system("cls");
			wall.drawWall();
			cout << "GAME OVER" << endl;
			return false;
		}
	}
	
		//移动成功分两种 吃到食物和没有吃到食物
		if (wall.getWall(x, y) == '#'){
			addPoint(x, y);
			//重新设置食物
			food.setFood();
		}
		else{
			addPoint(x, y);//增加新的
			delPoint();//删除末尾的节点
			if (isRool == true){
				wall.setWall(x, y, '@');
				gotoxy1(hOut1, 2*y, x);
				cout << '@' << endl;
			}
		}
	return true;
}

int Snake::getSleepTime()
{
	int sleepTime = 0;
	int size = countList();
	if (size < 5){
		sleepTime = 300;
	}
	else if (size >= 5 && size <= 8){
		sleepTime = 100;
	}
	return sleepTime;
}

int Snake::countList()
{
	int size = 0;
	Point* point = pHead;
	while (point != NULL){
		size++;
		point = point->next;
	}
	return size;
}

int Snake::getScore()
{
	int size = countList();
	int score = (size - 3) * 100;
	return size;
}

