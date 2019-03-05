#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*
	。期末考试完了老师要将同 学们的分数按照从高到低排序。小哼的班上只有 5个同学，这 5个同学分别考了 5分、3分、 5分、2分和 8分，'
	哎考得真是惨不忍睹（满分是 10分）。接下来将分数进行从大到小排序， 排序后是 8 5 5 3 2
	*/
	int arr[11] = { 0 };
	int score = 0;
	for (int i = 0; i < 5; i++){
		scanf("%d", &score);
		++arr[score];
	}
	for (int i = 10; i>0; i--){
		for (int num = arr[i]; num > 0; --num){
			printf("%d", i);
		}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}