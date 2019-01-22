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
//定义一个全局变量
Address_book address;
void emue(){
	printf("====================\n");
	printf("       1  增加      \n");
	printf("       2  删除      \n");
	printf("       3  修改      \n");
	printf("       4  打印全部  \n");
	printf("       5  删除所有  \n");
	printf("       6  排序      \n");
	printf("       0  退出通讯录\n");
	printf("====================\n");

}
//1.初始化函数
void Init(Address_book* address_book){
	assert(address_book != NULL);
	memset(address_book, sizeof(Address_book), 0);
}
//2.增加函数
void addPerson_inf(Address_book* address_book){
	assert(address_book);
	printf("正在执行增加联系人的操作\n");
	if (address_book->size > 200){
		printf("联系人存储满了\n");
	}
	person_inf* p = &address_book->infors[address_book->size];
	char buff[1024];
	printf("请输入你增加联系人的姓名：");
	scanf("%s", buff);
	strcpy(p->name, buff);
	printf("请输入你增加联系人的电话号码：");
	scanf("%s", buff);
	strcpy(p->phone, buff);
	printf("请输入你增加联系人的地址：");
	scanf("%s", buff);
	strcpy(p->address, buff);
	address_book->size += 1;

}
//3.删除函数
void del_inf(Address_book* address_book){
	//此删除是根据索引来删除掉联系人的，直接和最后的一个交换位置就好，不用考虑位置的不同
	assert(address_book != NULL);
	printf("正在执行删除操作，请输入您需要删除的序号:");
	int num = 0;
	scanf("%d", num);
	if (num < 0 || num >= address_book->size){
		printf("你输入的序号有错误，删除操作取消\n");
		return;
	}
	person_inf* p = address_book->infors;
	p[num] = p[address_book->size - 1];
	address_book->size -= 1;
	printf("删除操作执行结束\n");
}
//4.修改函数
void update_inf(Address_book* address_book){
	//此处的修改同样是根据序号进行修改操作
	assert(address_book != NULL);
	int num = 0;
	printf("请输入你需要修改联系人的序号：");
	scanf("%d", &num);
	if (num < 0 || num >= address_book->size){
		printf("您输入的序号不合法,修改操作取消\n");
		return;
	}
	person_inf* p = &address_book->infors[num];
	char buff[1024];
	printf("请输入更改后的姓名：");
	scanf("%s", buff);
	strcpy(p->name, buff);
	printf("请输入更改后的电话号码：");
	scanf("%s", buff);
	strcpy(p->phone, buff);
	printf("请输入更改后的地址：");
	scanf("%s", buff);
	strcpy(p->address, buff);
}
//5.打印所有的函数
void print_all_info(Address_book* address_book){
	assert(address_book != NULL);
	printf("所有联系人信息");
	for (int i = 0; i < address_book->size; i++){
		person_inf* p = &address_book->infors[i];
		printf("联系人姓名：%s\n", p->name);
		printf("联系人电话号码：%s\n", p->phone);
		printf("联系人地址：%s\n", p->address);
	}
}
//6.删除所有的函数--直接将size等于0即可
void delete_all_info(Address_book* address_book){
	assert(address_book != NULL);
	address_book->size = 0;
}
//7.实现排序函数
void sort_info(Address_book* address_book){
	assert(address_book != NULL);
	//进行冒泡排序
	printf("正在进行排序操作\n");
	for (int i = 0; i < address_book->size; i++){//外层循环
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
	printf("排序完成\n");
}
int main(){
	//1.进行初始化操作
	Init(&address);
	//定义一个函数指针数组
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
		printf("请输入您的选择:");
		scanf("%d", &choose);
		if (choose == 0){
			break;
		}
		parr[choose - 1](&address);
	}
	system("pause");
	return 0;
}