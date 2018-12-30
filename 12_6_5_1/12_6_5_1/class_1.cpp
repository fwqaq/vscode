#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//3.编写代码模拟三次密码输入的场景。
	//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
	//	可以重新输入，最多输入三次。三次均错，则提示退出程序。
	for (int i = 0; i < 3; i++){
		char arr[20];
		printf("请输入你的密码：");
		scanf("%s", arr);
		if (!strcmp(arr, "123456")){
			printf("您输入成功");
		break;
		}
		else{
			printf("非法输入");
		}
	}
	//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
	char  ch;
	scanf("%c", &ch);
	if (ch >= 'a'&&ch <= 'z'){
		printf("%c", ch - 32);
	}
	else if (ch <= 'Z'&& ch >= 'A'){
		printf("%c", ch + 32);
	}
	system("pause");
	return 0;
}