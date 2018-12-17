#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ROW 9
#define COL 9
#define MINE_COUNT 10//�׵�����
char mine_map[ROW + 2][COL + 2] = {' '};//�����ĵ�ͼ
char show_map[ROW + 2][COL + 2] = {' '};//��ʾ�ĵ�ͼ
int menu(){
	printf("=====================\n");
	printf("=== 1  ��ʼ��Ϸ =====\n");
	printf("=== 0  �˳���Ϸ =====\n");
	printf("=====================\n");
	printf("����������ѡ��");
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
//��ӡ����������ͼ���ʺ�
void display(char map[ROW + 2][COL + 2]){
	//��ӡ��һ��
	printf("    ");
	for (int i = 1; i <= ROW; i++){
		printf("%d ",i);
	}
	printf("\n");
	//��ӡ��������
	for (int row = 1; row <= ROW; row++){
		printf("  %d|", row);
		for (int col = 1; col <= COL; col++){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
int check_mine(char mine_map[ROW+2][COL + 2], int row, int col){
	//4���ж��ǲ���ɨ�����ף������ɨ���˾�ֱ���˳���Ϸ���Ҵ�ӡ����
	if (mine_map[row][col] == '1'){
		display(mine_map);
		return 1;
	}
	//5,�������ɨ�����׾�ͳ����Χ�׵��������Ҵ�ӡ�����ڵ�����
	return 0;
}
//��ӡ�����ڲ����׵�ʱ����Χ�׵�����

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
//�˳������� �ַ�����0���ҳ�������Ҫ�����˳��ݹ�
int main(){
	srand((unsigned int)time(0));
	if (menu()){
		//1,���ж����̵ĳ�ʼ��
		long long  starttime = time(0);
		//7,���ļ��л�ȡ����ʱ��
		FILE * fp = fopen("rank.txt", "r");
		int currentmaxtime;
		fscanf(fp, "%d", &currentmaxtime);
		fclose(fp);
		printf("Ŀǰ����ʱ���ǣ�%d\n", currentmaxtime);
		int num = 0;
		Init(mine_map, show_map);
		while (1){
			//2,�����̽�����ʾ
			display(show_map);
			//3������ɨ�׵�λ��
			int row = 0, col = 0;
			printf("����������ѡ���λ��:[1-9][1-9]:");
			scanf("%d %d", &row, &col);
			//4���ж��ǲ���ɨ�����ף������ɨ���˾�ֱ���˳���Ϸ���Ҵ�ӡ����
			if (check_mine(mine_map,row, col)){
				printf("���ȵ����ˣ������¿�ʼ\n");
				break;
			}
			else{
				//��ӡ�������׵����֣��õݹ����
				 num += print_not_mine(mine_map, show_map, row, col);
				
			}

			//6�������Χ����û���׵Ļ����� �ݹ���д�ӡ����Χ����û���׵ĸ��ӡ�������*�ĸ��ӵ��������==�׵�������ʤ���ˡ�
			if (num == ROW*COL - MINE_COUNT){
				display(mine_map);
				printf("��ϲ�����������ʤ��\n");
				long long endtime = time(0);
				long long time = endtime - starttime;
				if (time < currentmaxtime){
					printf("��ϲ��������������߼�¼��������ʱ����%d\n", time);
					fp = fopen("rank.txt", "w");
					fprintf(fp, "%d", time);
					fclose(fp);
					break;
				}
				printf("������ʱ����%d��δ�ܴ�������¼\n", time);
				break;
			}

			
		}
	}
	else{
		printf("�˳���Ϸ\n");
	}
	system("pause");
	return 0;
}
