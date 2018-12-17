#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment(lib,"ws2_32.lib")
int main(){
	char str[20] = "";
	//1，初始化套接字库
	WSADATA  data;
	WORD v = MAKEWORD(2, 0);
	WSAStartup(v, &data);
	//2，创建套接字库
	SOCKET s = socket(AF_INET,SOCK_STREAM,0);
	SOCKET s2 = socket(AF_INET, SOCK_STREAM, 0);
	//3，绑定地址
			//绑定地址和端口
	SOCKADDR_IN addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(75);
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.110.1");//加载地址
	printf("客户端启动：\n");
	//4，使用connect连接服务端
	connect(s, (SOCKADDR *)&addr, sizeof(addr)); 
	send(s2, str, sizeof(str), 0);
	//5，接受数据
	recv(s, str, sizeof(str),0);
	printf("服务器说：%s", str);
	//6，关闭
	closesocket(s);
	WSACleanup();
	system("pause");
	return 0;
}