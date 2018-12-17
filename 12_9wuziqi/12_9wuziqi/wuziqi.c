#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 10
#define COL 10
char Border[ROW][COL] = {""};

int Play_row = 0;
int Play_col = 0;//用来记录玩家和电脑最后一次落子的位置。
/*
图形显示
*/
void PrintBorder(char Border[ROW][COL]){
	printf("-----------------------------------------\n");
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (col == COL - 1){
				printf("| %c |", Border[row][col]);
			}
			else{
				printf("| %c ", Border[row][col]);
			}
		}
	printf("\n");
	printf("-----------------------------------------\n");
	}
}
/*
菜单显示
*/
int  emnu(){
	printf("===========================================\n");
	printf("==请输入您的选择：1->开始游戏 0->结束游戏==\n");
	printf("===========================================\n");
	int start = 0;
	scanf("%d", &start);
	return  start;
}
/*
play玩家进行下棋
*/
void play_down(char Border[ROW][COL]){
	printf("请输入您下棋的位置:");
	while (1){
		int row, col;
		scanf("%d %d", &row, &col);
		printf("\n");
		if (row >= ROW || row < 0 || col >= COL || col < 0){
			printf("非法输入，请重新输入您的位置：");
			continue;
		}
		if (Border[row][col] != '\0')
		{
			printf("您输入的位置已经被抢先了。请重新输入你的位置：");
			continue;
		}
		Border[row][col] = 'x';
		Play_row = row;
		Play_col = col;
		break;
	}
}
/*
电脑随机进行下棋
*/
void computer_down(char Border[ROW][COL]){
	while (1){
		int row = rand() % 10;
		int col = rand() % 10;
		if (Border[row][col] != '\0'){
			continue;
		}
		Border[row][col] = 'o';
		Play_row = row;
		Play_col = col;
		break;
	}
}
/*
玩家和电脑胜负校验
*/
int check_play(char Border[ROW][COL]){
	//横排校验
	int num = 0;
	for (int i = 0; i < 5; i++){
		if (Border[Play_row + i][Play_col] == Border[Play_row][Play_col]&&Play_row + i< ROW){
			num++;
		}
		else{
			break;
		}
	}
	for (int i = 1; i < 5; i++){
		if (Border[Play_row - i][Play_col] == Border[Play_row][Play_col] && Play_row - i >= 0){
			num++;
		}
		else{
			break;
		}
	}
	if (num == 5){
		return 1;
	}
	//竖排校验
	num = 0;
	for (int i = 0; i < 5; i++){
		if (Border[Play_row][Play_col + i] == Border[Play_row][Play_col] && Play_col + i < COL){
			num++;
		}
		else{
			break;
		}
	}
	for (int i = 1; i < 5; i++){
		if (Border[Play_row][Play_col - i] == Border[Play_row][Play_col] && Play_col - i >= 0){
			num++;
		}
		else{
			break;
		}
	}
	if (num == 5){
		return 1;

	}
	//从左下到右上斜线验证个数
	num = 0;
	for (int i = 0; i < 5; i++){
		if (Border[Play_row + i][Play_col - i] == Border[Play_row][Play_col] && Play_row + i < ROW&&Play_col - i >= 0){
			num++;
		}
		else{
			break;
		}
	}
	for (int i = 1; i < 5; i++){
		if (Border[Play_row - i][Play_col + i] == Border[Play_row][Play_col] && Play_row - i >= 0 && Play_col + i < COL){
			num++;
		}
		else{
			break;
		}
	}
	if (num == 5){
		return 1;
	}
	//从左上到右下进行验证
	num = 0;
	for (int i = 0; i < 5; i++){
		if (Border[Play_row + i][Play_col + i] == Border[Play_row][Play_col] && Play_row + i < ROW&&Play_col + i < COL){
			num++;
		}
		else{
			break;
		}
	}
	for (int i = 1; i < 5; i++){
		if (Border[Play_row - i][Play_col - i] == Border[Play_row][Play_col] && Play_row - i >= 0 && Play_col - i >= 0){
			num++;
		}
		else{
			break;
		}
	}
	if (num == 5){
		return 1;
	}
	return 0;
}
int check_draw(char Border[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (Border[row][col] == '\0'){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	srand((unsigned int)system(0));
	//1,显示开始菜单进行游戏选项
	if (emnu()){
		while (1){
		    //2. 准备游戏：开始画图。
			PrintBorder(Border);
			//3. 玩家下棋-----玩家的由x显示
			play_down(Border);
			//5.2玩家检验是否胜利
			if (check_play(Border)){
				PrintBorder(Border);
				printf("您技术高超，已经取得胜利胜利\n");
				break;
			}
			//4，电脑下棋-------电脑由o显示
			computer_down(Border);
			//5.1电脑胜利检验
			if (check_play(Border)){
				PrintBorder(Border);
				printf("您的技术还需要再历练...\n");
				break;
			}
			//5, 验证输赢.在最后一次下棋的时候就校验是否结束了
			//6，验证是不是所有的位置都被下了，如果被下了就是平局
			if (check_draw == 0){
				printf("这是一个平局。请重新进入游戏，打败它吧！");
				break;
			}


		}
	}
	else{
		printf("这么快就要说say goodbye...\n");
	}
	system("pause");
	return 0;
}