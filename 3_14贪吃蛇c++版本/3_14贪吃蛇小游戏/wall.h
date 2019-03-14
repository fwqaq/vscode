#pragma once
#include <iostream>
using namespace std;
class Wall{
	
public:
	enum{
		ROW = 20,
		COL = 20	
	};
	//墙壁初始化
	void initWall();
	//画墙壁
	void drawWall();
	//根据索引设置wall
	void setWall(int x,int y,char c);
	//根据索引得到wall
	char getWall(int x, int y);

private:
	char gameArray[ROW][COL];
};