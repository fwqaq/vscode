#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
typedef struct Person_infor{
	char name[1024];
	char phone[1024];
	char address[1024];
}person_inf;
typedef struct address_book{
	person_inf infors[200];
	int size;
}Address_book;
//����һ��ȫ�ֱ���
Address_book address;
void emue(){
	printf("====================\n");
	printf("       1  ����      \n");
	printf("       2  ɾ��      \n");
	printf("       3  �޸�      \n");
	printf("       4  ��ӡȫ��  \n");
	printf("       5  ɾ������  \n");
	printf("       6  ����      \n");
	printf("       0  �˳�ͨѶ¼\n");
	printf("====================\n");

}
//1.��ʼ������
void Init(Address_book* address_book){
	assert(address_book != NULL);
	memset(address_book, sizeof(Address_book), 0);
}
//2.���Ӻ���
void addPerson_inf(Address_book* address_book){
	assert(address_book);
	printf("����ִ��������ϵ�˵Ĳ���\n");
	if (address_book->size > 200){
		printf("��ϵ�˴洢����\n");
	}
	person_inf* p = &address_book->infors[address_book->size];
	char buff[1024];
	printf("��������������ϵ�˵�������");
	scanf("%s", buff);
	strcpy(p->name, buff);
	printf("��������������ϵ�˵ĵ绰���룺");
	scanf("%s", buff);
	strcpy(p->phone, buff);
	printf("��������������ϵ�˵ĵ�ַ��");
	scanf("%s", buff);
	strcpy(p->address, buff);
	address_book->size += 1;

}
//3.ɾ������
void del_inf(Address_book* address_book){
	//��ɾ���Ǹ���������ɾ������ϵ�˵ģ�ֱ�Ӻ�����һ������λ�þͺã����ÿ���λ�õĲ�ͬ
	assert(address_book != NULL);
	printf("����ִ��ɾ������������������Ҫɾ�������:");
	int num = 0;
	scanf("%d", num);
	if (num < 0 || num >= address_book->size){
		printf("�����������д���ɾ������ȡ��\n");
		return;
	}
	person_inf* p = address_book->infors;
	p[num] = p[address_book->size - 1];
	address_book->size -= 1;
	printf("ɾ������ִ�н���\n");
}
//4.�޸ĺ���
void update_inf(Address_book* address_book){
	//�˴����޸�ͬ���Ǹ�����Ž����޸Ĳ���
	assert(address_book != NULL);
	int num = 0;
	printf("����������Ҫ�޸���ϵ�˵���ţ�");
	scanf("%d", &num);
	if (num < 0 || num >= address_book->size){
		printf("���������Ų��Ϸ�,�޸Ĳ���ȡ��\n");
		return;
	}
	person_inf* p = &address_book->infors[num];
	char buff[1024];
	printf("��������ĺ��������");
	scanf("%s", buff);
	strcpy(p->name, buff);
	printf("��������ĺ�ĵ绰���룺");
	scanf("%s", buff);
	strcpy(p->phone, buff);
	printf("��������ĺ�ĵ�ַ��");
	scanf("%s", buff);
	strcpy(p->address, buff);
}
//5.��ӡ���еĺ���
void print_all_info(Address_book* address_book){
	assert(address_book != NULL);
	printf("������ϵ����Ϣ");
	for (int i = 0; i < address_book->size; i++){
		person_inf* p = &address_book->infors[i];
		printf("��ϵ��������%s\n", p->name);
		printf("��ϵ�˵绰���룺%s\n", p->phone);
		printf("��ϵ�˵�ַ��%s\n", p->address);
	}
}
//6.ɾ�����еĺ���--ֱ�ӽ�size����0����
void delete_all_info(Address_book* address_book){
	assert(address_book != NULL);
	address_book->size = 0;
}
//7.ʵ��������
void sort_info(Address_book* address_book){
	assert(address_book != NULL);
	//����ð������
	printf("���ڽ����������\n");
	for (int i = 0; i < address_book->size; i++){//���ѭ��
		for (int j = 0; j < address_book->size - i - 1; j++){
			person_inf* p1 = &address_book->infors[j];
			person_inf* p2 = &address_book->infors[j + 1];
			if (strcmp(p1->name, p2->name)>0){
				person_inf p3 = *p1;
				*p1 = *p2;
				*p2 = p3;
			}
		}
	}
	printf("�������\n");
}
int main(){
	//1.���г�ʼ������
	Init(&address);
	//����һ������ָ������
	void(*parr[])(Address_book* address_book) = {
		addPerson_inf,
		del_inf,
		update_inf,
		print_all_info,
		delete_all_info,
		sort_info
	};
	int choose = 0;
	while (1){
		emue();
		printf("����������ѡ��:");
		scanf("%d", &choose);
		if (choose == 0){
			break;
		}
		parr[choose - 1](&address);
	}
	system("pause");
	return 0;
}