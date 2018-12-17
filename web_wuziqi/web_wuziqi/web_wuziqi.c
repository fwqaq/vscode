#define _CRT_SECURE_NO_WARNINGS
#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#pragma comment(lib,"ws2_32.lib")//显示加载套接字库
//server服务器层代码
int main(){
	//1，初始化套接字库
	WSADATA data;//结构体对象
	WORD v = MAKEWORD(2, 0);//版本
	WSAStartup(v,&data);
	//2，创建套接字socket（地址处理以及端口处理）--2个
	SOCKET s, s2,s3;//s2是接受用来返回连接的一个新的套接字 s3用来发送数据
	s = socket(AF_INET, SOCK_STREAM, 0);//AF_INET:ip地址 SOCK_STREAM:传输方式 0是匹配传输方式
	SOCKADDR_IN addr, addr2,addr3;//地址处理以及端口处理
	int size = sizeof(addr2);//存储addr2
	addr.sin_family = AF_INET;
	addr.sin_port = htons(75);//对端口进行转换   int到short类型的转换
	addr.sin_addr.S_un.S_addr = INADDR_ANY;//设置主机地址  INADDR_ANY表示任何ip
	//3，套接字绑定本地的地址和端口
	bind(s, (SOCKADDR *)&addr, sizeof(addr));//参数是socket类型的套接字  addr绑定地址的指针(函数中是指针)
	//4，把套接字设置为监听状态---等待接受客户端消息
	listen(s, 5);//套接字和最大长度
	//5，接收消息，返回一个用连接的新的套接字
	char str[20];
	scanf("%s", str);
	printf("服务器已经启动了");
	while (1){
		s2 = accept(s, (SOCKADDR *)&addr2, &size);
		if (s2){
			//6，新套接字用通信
			printf("%s已经连上了", inet_ntoa(addr2.sin_addr));//将addr2_sin_addr转换为字符串
			send(s2,str,sizeof(str),0);//s2是发送的地址  str是发送的字符串  长度  0一般来说是0
		}
	}
	recv(s, str, sizeof(str), 0);
	//7，关闭套接字
	closesocket(s);
	closesocket(s2);
	WSACleanup();//清除掉资源
	system("pause");
	return 0;
}