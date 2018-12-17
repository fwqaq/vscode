#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 10
#define COL 10
char Border[ROW][COL] = {""};

int Play_row = 0;
int Play_col = 0;//������¼��Һ͵������һ�����ӵ�λ�á�
/*
ͼ����ʾ
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
�˵���ʾ
*/
int  emnu(){
	printf("===========================================\n");
	printf("==����������ѡ��1->��ʼ��Ϸ 0->������Ϸ==\n");
	printf("===========================================\n");
	int start = 0;
	scanf("%d", &start);
	return  start;
}
/*
play��ҽ�������
*/
void play_down(char Border[ROW][COL]){
	printf("�������������λ��:");
	while (1){
		int row, col;
		scanf("%d %d", &row, &col);
		printf("\n");
		if (row >= ROW || row < 0 || col >= COL || col < 0){
			printf("�Ƿ����룬��������������λ�ã�");
			continue;
		}
		if (Border[row][col] != '\0')
		{
			printf("�������λ���Ѿ��������ˡ��������������λ�ã�");
			continue;
		}
		Border[row][col] = 'x';
		Play_row = row;
		Play_col = col;
		break;
	}
}
/*
���������������
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
��Һ͵���ʤ��У��
*/
int check_play(char Border[ROW][COL]){
	//����У��
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
	//����У��
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
	//�����µ�����б����֤����
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
	//�����ϵ����½�����֤
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
	//1,��ʾ��ʼ�˵�������Ϸѡ��
	if (emnu()){
		while (1){
		    //2. ׼����Ϸ����ʼ��ͼ��
			PrintBorder(Border);
			//3. �������-----��ҵ���x��ʾ
			play_down(Border);
			//5.2��Ҽ����Ƿ�ʤ��
			if (check_play(Border)){
				PrintBorder(Border);
				printf("�������߳����Ѿ�ȡ��ʤ��ʤ��\n");
				break;
			}
			//4����������-------������o��ʾ
			computer_down(Border);
			//5.1����ʤ������
			if (check_play(Border)){
				PrintBorder(Border);
				printf("���ļ�������Ҫ������...\n");
				break;
			}
			//5, ��֤��Ӯ.�����һ�������ʱ���У���Ƿ������
			//6����֤�ǲ������е�λ�ö������ˣ���������˾���ƽ��
			if (check_draw == 0){
				printf("����һ��ƽ�֡������½�����Ϸ��������ɣ�");
				break;
			}


		}
	}
	else{
		printf("��ô���Ҫ˵say goodbye...\n");
	}
	system("pause");
	return 0;
}