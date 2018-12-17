#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ROW 9
#define COL 9
#define MINE_COUNT 10//雷的数量
char mine_map[ROW + 2][COL + 2] = {' '};//雷区的地图
char show_map[ROW + 2][COL + 2] = {' '};//显示的地图
int menu(){
	printf("=====================\n");
	printf("=== 1  开始游戏 =====\n");
	printf("=== 0  退出游戏 =====\n");
	printf("=====================\n");
	printf("请输入您的选择：");
	int i = 0;
	scanf("%d", &i);
	return i;

}
void Init(char mine_map[ROW + 2][COL + 2],char show_map[ROW + 2][COL + 2]){
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL + 2; col++){
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL + 2; col++){
			mine_map[row][col] = '0';
		}
	}
	int count = 0;
	while (count < MINE_COUNT){
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] != '0'){
			continue;
		}
		mine_map[row][col] = '1';
		count++;
	}
}
//打印函数，两个图都适合
void display(char map[ROW + 2][COL + 2]){
	//打印第一行
	printf("    ");
	for (int i = 1; i <= ROW; i++){
		printf("%d ",i);
	}
	printf("\n");
	//打印其他的行
	for (int row = 1; row <= ROW; row++){
		printf("  %d|", row);
		for (int col = 1; col <= COL; col++){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
int check_mine(char mine_map[ROW+2][COL + 2], int row, int col){
	//4，判定是不是扫到了雷，如果是扫到了就直接退出游戏并且打印棋盘
	if (mine_map[row][col] == '1'){
		display(mine_map);
		return 1;
	}
	//5,如果不是扫到了雷就统计周围雷的数量并且打印出现在的棋盘
	return 0;
}
//打印出现在不是雷的时候周围雷的数量

int print_not_mine(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2], int row, int col){
	
	if (show_map[row][col] == '*'){
		int num = 0;
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				if (mine_map[row - 1 + i][col - 1 + j] == '1'){
					num++;
				}
			}
		}
		show_map[row][col] = num + '0';
		if (show_map[row][col] == '0'&&row >= 1 && row <= ROW&& col >= 1 && col <= COL){
			return (print_not_mine(mine_map, show_map, row - 1, col) +
				print_not_mine(mine_map, show_map, row - 1, col - 1) +
				print_not_mine(mine_map, show_map, row - 1, col + 1) +
				print_not_mine(mine_map, show_map, row, col - 1) +
				print_not_mine(mine_map, show_map, row, col + 1)+
				print_not_mine(mine_map, show_map, row+1, col - 1)+
				print_not_mine(mine_map, show_map, row+1, col)+
				print_not_mine(mine_map, show_map, row+1, col + 1))+1;
		}
		else{
			if (row >= 1 && row <= ROW&& col >= 1 && col <= COL){
				return 1;

			}
			return 0;
		}
	}
	else{
		return 0;
	}
}
//退出条件是 字符不是0并且长度满足要求是退出递归
int main(){
	srand((unsigned int)time(0));
	if (menu()){
		//1,进行对棋盘的初始化
		long long  starttime = time(0);
		//7,从文件中获取最快的时间
		FILE * fp = fopen("rank.txt", "r");
		int currentmaxtime;
		fscanf(fp, "%d", &currentmaxtime);
		fclose(fp);
		printf("目前最快的时间是：%d\n", currentmaxtime);
		int num = 0;
		Init(mine_map, show_map);
		while (1){
			//2,对棋盘进行显示
			display(show_map);
			//3，输入扫雷的位置
			int row = 0, col = 0;
			printf("请输入您的选择的位置:[1-9][1-9]:");
			scanf("%d %d", &row, &col);
			//4，判定是不是扫到了雷，如果是扫到了就直接退出游戏并且打印棋盘
			if (check_mine(mine_map,row, col)){
				printf("您踩到雷了，请重新开始\n");
				break;
			}
			else{
				//打印出不是雷的数字，用递归进行
				 num += print_not_mine(mine_map, show_map, row, col);
				
			}

			//6，如果周围都是没有雷的话就用 递归进行打印出周围所有没有雷的格子。遍历是*的格子的数量如果==雷的数量就胜利了。
			if (num == ROW*COL - MINE_COUNT){
				display(mine_map);
				printf("恭喜您，您获得了胜利\n");
				long long endtime = time(0);
				long long time = endtime - starttime;
				if (time < currentmaxtime){
					printf("恭喜您，您打破了最高纪录，您所用时间是%d\n", time);
					fp = fopen("rank.txt", "w");
					fprintf(fp, "%d", time);
					fclose(fp);
					break;
				}
				printf("您所用时间是%d，未能打破最快纪录\n", time);
				break;
			}

			
		}
	}
	else{
		printf("退出游戏\n");
	}
	system("pause");
	return 0;
}
