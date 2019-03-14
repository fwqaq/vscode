#include "wall.h"


void Wall::initWall()
{
	for (int i = 0; i < ROW; i++){
		for (int j = 0; j < COL; j++){
			//·ÅÇ½±Ú
			if (i == 0 || j == 0 || i == ROW - 1 || j == COL - 1){
				gameArray[i][j] = '*';
			}
			else{
				gameArray[i][j] = ' ';
			}
		}
	}
}

void Wall::drawWall()
{
	for (int i = 0; i < ROW; i++){
		for (int j = 0; j < COL; j++){
			cout << gameArray[i][j] << " ";
		}
		cout << endl;
	}
}
