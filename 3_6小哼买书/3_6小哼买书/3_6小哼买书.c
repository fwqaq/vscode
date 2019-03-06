#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main(){
	/*
	小哼的学校要建立一个图书角，老师派小哼去找一些同学做调查，看看同学们都喜欢读 哪些书。
	小哼让每个同学写出一个自己想读的书的 ISBN号（你知道吗？每本书都有唯一 的 ISBN 号，不信的话你去找本书翻到背面看看）。
	当然有一些好书会有很多同学都喜欢， 这样就会收集到很多重复的 ISBN号。小哼需要去掉其中重复的 ISBN号，即每个 ISBN号只 保留一个，
	也就说同样的书只买一本（学校真是够抠门的）。然后再把这些 ISBN 号从小到 大排序，小哼将按照排序好的 ISBN号去书店买书。
	请你协助小哼完成“去重”与“排序” 的工作。 输入有 2 行，第 1 行为一个正整数，表示有 n 个同学参与调查（n≤100）。
	第 2 行有 n 个用空格隔开的正整数，为每本图书的 ISBN号（假设图书的 ISBN号在 1~1000之间）。 输出也是 2行，第 1行为一个正整数 k，表示需要买多少本书。
	第 2行为 k个用空格隔 开的正整数，为从小到大已排好序的需要购买的图书的 ISBN号。 
	*/
	//实现方法1.先去成功后排序
	int IS_Num[N] = {0};
	int num = 0;
	scanf("%d", &num);
	int size = 0;
	for (int i = 0; i < num; i++){
		int ISBN = 0;
		scanf("%d", &ISBN);
		if (IS_Num[ISBN - 1] == 0){
			IS_Num[ISBN - 1] = 1;
			++size;
		}
	}
	printf("%d\n", size);
	for (int i = 0; i < N; i++){
		if (IS_Num[i] != 0){
			printf("%d ",i+1);
		}
	}
	system("pause");
	return 0;
}