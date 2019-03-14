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
	//³õÊ¼»¯Ç½±Ú
	void initWall();
	//»­Ç½±Ú
	void drawWall();
private:
	char gameArray[ROW][COL];
}
#endif
