#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int init(){
	int start = 0;
	printf("=======================\n");
	printf("开始游戏 1， 结束游戏 0\n");
	printf("=======================\n");
	printf("请输入你的选择：");
	scanf("%d", &start);
	if (start == 1){
		return rand() % 100 + 1;
	}
	else{
		return 0;
	}
}
int main(){
	//1,完成猜数字游戏。
	int rand;
	srand((unsigned int)time(0));
	if (rand = init()){
		int num = 0;
		while (1){
			printf("请输入你猜的数字：");
			scanf("%d", &num);
			if (num > rand){
				printf("大了大了");
			}
			else if (num < rand){
				printf("小了小了");
			}
			else{
				printf("恭喜你，猜对了");
				break;
			}
		}
	}
//	写代码可以在整型有序数组中查找想要的数字，	找到了返回下标，找不到返回 - 1.（折半查找）
	int arr[] = { 4, 5, 7, 8, 12, 16, 18, 45 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int check = 12;
	for (; left <= right;){
		int num = (left + right) / 2;
		if (arr[num] == check){
			printf("已经找到了，下标是%d", num);
			break;
		}
		else if (check > arr[num]){
			left = num + 1;
		}
		else{
			right = num - 1;
		}
	}
	system("pause");
	return 0;
}