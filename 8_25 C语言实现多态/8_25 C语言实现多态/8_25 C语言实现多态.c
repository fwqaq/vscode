#include <stdio.h>
#include <stdlib.h>
typedef void(*FUNC)();//����һ������ָ����ʵ�ֳ�Ա�����ļ̳�
//����
typedef struct _Base{
	FUNC _fun;
	int _B1;
}_Base;
//����
typedef struct _Drivaed{
	_Base _b1;//����ȥ�̳и����еĳ�Ա����
	int _D1;
}_Drivaed;
//�����ͬ������
void fb_(){
	printf("_b:func()\n");
}
void fd_(){
	printf("_d:func()\n");
}
int main(){
	_Base _b1;//����һ���������
	_Drivaed _d1;//����һ���������
	_b1._fun = fb_;
	_d1._b1._fun = fd_;

	_Base* _p1 = &_b1;
	_p1->_fun();//���ø���ָ��ָ����Ķ���
	_p1 = (_Base*)&_d1;//���������ǽשΪ����ָ�롣
	//��ʵ���ǽ�������ǲ��ֽ������ݵ�ת�������º�����ֵ������ĸ������ĺ���ָ�롣
	_p1->_fun();//ǿת�ĵ��ú���

	system("pause");
	return EXIT_SUCCESS;
}
