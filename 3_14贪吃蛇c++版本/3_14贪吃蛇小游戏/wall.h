#pragma once
#include <iostream>
using namespace std;
class Wall{
	
public:
	enum{
		ROW = 20,
		COL = 20	
	};
	//ǽ�ڳ�ʼ��
	void initWall();
	//��ǽ��
	void drawWall();
	//������������wall
	void setWall(int x,int y,char c);
	//���������õ�wall
	char getWall(int x, int y);

private:
	char gameArray[ROW][COL];
};