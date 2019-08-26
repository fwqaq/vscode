#include <stdio.h>
#include <stdlib.h>
typedef void(*FUNC)();//定义一个函数指针来实现成员函数的继承
//父类
typedef struct _Base{
	FUNC _fun;
	int _B1;
}_Base;
//子类
typedef struct _Drivaed{
	_Base _b1;//子类去继承父类中的成员对象
	int _D1;
}_Drivaed;
//父类的同名函数
void fb_(){
	printf("_b:func()\n");
}
void fd_(){
	printf("_d:func()\n");
}
int main(){
	_Base _b1;//定义一个父类对象
	_Drivaed _d1;//定义一个子类对象
	_b1._fun = fb_;
	_d1._b1._fun = fd_;

	_Base* _p1 = &_b1;
	_p1->_fun();//调用父类指针指向父类的对象
	_p1 = (_Base*)&_d1;//将子类对象墙砖为父类指针。
	//其实就是将子类的那部分进行数据的转换，将新函数赋值给子类的父类对象的函数指针。
	_p1->_fun();//强转的调用函数

	system("pause");
	return EXIT_SUCCESS;
}
