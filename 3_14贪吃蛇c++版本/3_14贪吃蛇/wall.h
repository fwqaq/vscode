#ifndef  _WALL_HEAD
#define _WALL_HEAD
#include <iostream>
using namespace std;
class Wall{
public:
	enum{
		ROW = 20,
		COL = 20
	};
	//��ʼ��ǽ��
	void initWall();
	//��ǽ��
	void drawWall();
private:
	char gameArray[ROW][COL];
}
#endif
