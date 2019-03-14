#include "snake.h"
#include <windows.h>
void gotoxy1(HANDLE hOut1, int x, int y){
	COORD pos;
	pos.X = x;//������
	pos.Y = y;//������
	SetConsoleCursorPosition(hOut1, pos);
}
HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE);//������ʾ���������

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

//�������еĽڵ�
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
	//����һ���½ڵ�
	Point* newPoint = new Point;
	newPoint->x = x;
	newPoint->y = y;
	newPoint->next = NULL;

	//���ԭ��ͷ��Ϊ�յ�ʱ�򣬸�Ϊ����
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
//ɾ���ڵ�
void Snake::delPoint()
{
	//�����ڵ����ϲ�ȥ��ɾ������
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
	//�ж���һ������β�͵�ʱ��Ͳ�������
	Point* pCur = pHead->next;
	Point* pPre = pHead;
	while (pCur->next != NULL){
		pPre = pPre->next;
		pCur = pCur->next;
	}
	if (pCur->x == x&&pCur->y == y){
		//����δ��
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
	
		//�ƶ��ɹ������� �Ե�ʳ���û�гԵ�ʳ��
		if (wall.getWall(x, y) == '#'){
			addPoint(x, y);
			//��������ʳ��
			food.setFood();
		}
		else{
			addPoint(x, y);//�����µ�
			delPoint();//ɾ��ĩβ�Ľڵ�
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

