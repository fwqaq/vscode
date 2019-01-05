#include <stdio.h>
#include <stdlib.h>
void find(int a[3][3],int row,int col,int x,int y,int key){
	if (x < 0 || x >= row){
		return;
	}
	if (y < 0 || y >= col){
		return;
	}
	if (a[x][y] == key){
		printf("找到了,此时的位置是%d %d",x,y);
		return;
	}
	if (a[x][y] < key){
		find(a, row, col, x + 1, y, key);
	}
	else
	{
		find(a, row, col, x, y - 1, key);
	}
}
int main(){
	int a[][3] = { 1, 2, 3,
				   4, 5, 6, 
				   7, 8, 9
				};
	int key = 4;
	find(a, 3, 3, 0, 2, key);
	system("pause");
	return 0;
}