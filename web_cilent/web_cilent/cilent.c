#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment(lib,"ws2_32.lib")
int main(){
	char str[20] = "";
	//1����ʼ���׽��ֿ�
	WSADATA  data;
	WORD v = MAKEWORD(2, 0);
	WSAStartup(v, &data);
	//2�������׽��ֿ�
	SOCKET s = socket(AF_INET,SOCK_STREAM,0);
	SOCKET s2 = socket(AF_INET, SOCK_STREAM, 0);
	//3���󶨵�ַ
			//�󶨵�ַ�Ͷ˿�
	SOCKADDR_IN addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(75);
	addr.sin_addr.S_un.S_addr = inet_addr("192.168.110.1");//���ص�ַ
	printf("�ͻ���������\n");
	//4��ʹ��connect���ӷ����
	connect(s, (SOCKADDR *)&addr, sizeof(addr)); 
	send(s2, str, sizeof(str), 0);
	//5����������
	recv(s, str, sizeof(str),0);
	printf("������˵��%s", str);
	//6���ر�
	closesocket(s);
	WSACleanup();
	system("pause");
	return 0;
}