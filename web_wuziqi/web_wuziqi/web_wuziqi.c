#define _CRT_SECURE_NO_WARNINGS
#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#pragma comment(lib,"ws2_32.lib")//��ʾ�����׽��ֿ�
//server�����������
int main(){
	//1����ʼ���׽��ֿ�
	WSADATA data;//�ṹ�����
	WORD v = MAKEWORD(2, 0);//�汾
	WSAStartup(v,&data);
	//2�������׽���socket����ַ�����Լ��˿ڴ���--2��
	SOCKET s, s2,s3;//s2�ǽ��������������ӵ�һ���µ��׽��� s3������������
	s = socket(AF_INET, SOCK_STREAM, 0);//AF_INET:ip��ַ SOCK_STREAM:���䷽ʽ 0��ƥ�䴫�䷽ʽ
	SOCKADDR_IN addr, addr2,addr3;//��ַ�����Լ��˿ڴ���
	int size = sizeof(addr2);//�洢addr2
	addr.sin_family = AF_INET;
	addr.sin_port = htons(75);//�Զ˿ڽ���ת��   int��short���͵�ת��
	addr.sin_addr.S_un.S_addr = INADDR_ANY;//����������ַ  INADDR_ANY��ʾ�κ�ip
	//3���׽��ְ󶨱��صĵ�ַ�Ͷ˿�
	bind(s, (SOCKADDR *)&addr, sizeof(addr));//������socket���͵��׽���  addr�󶨵�ַ��ָ��(��������ָ��)
	//4�����׽�������Ϊ����״̬---�ȴ����ܿͻ�����Ϣ
	listen(s, 5);//�׽��ֺ���󳤶�
	//5��������Ϣ������һ�������ӵ��µ��׽���
	char str[20];
	scanf("%s", str);
	printf("�������Ѿ�������");
	while (1){
		s2 = accept(s, (SOCKADDR *)&addr2, &size);
		if (s2){
			//6�����׽�����ͨ��
			printf("%s�Ѿ�������", inet_ntoa(addr2.sin_addr));//��addr2_sin_addrת��Ϊ�ַ���
			send(s2,str,sizeof(str),0);//s2�Ƿ��͵ĵ�ַ  str�Ƿ��͵��ַ���  ����  0һ����˵��0
		}
	}
	recv(s, str, sizeof(str), 0);
	//7���ر��׽���
	closesocket(s);
	closesocket(s2);
	WSACleanup();//�������Դ
	system("pause");
	return 0;
}