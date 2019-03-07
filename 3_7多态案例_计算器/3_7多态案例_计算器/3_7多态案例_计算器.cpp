#include <iostream>
using namespace std;
class abstractCal{
public:
	virtual int getResult(){
		return 0;
	}
public:
	int index1;
	int index2;
};
//加法计算器
class addCal :public abstractCal{
public:
	int getResult(){
		return index1 + index2;
	}
};
//减法计算器
class subCal :public abstractCal{
public:
	int getResult(){
		return index1 - index2;
	}
};
//乘法计算器
class chengCal :public abstractCal{
public:
	int getResult(){
		return index1*index2;
	}
};
//除法计算器
class divCal :public abstractCal{
public:
	int getResult(){
		return index1 / index2;
	}
};
void test(){
	//加法计算器
	abstractCal* abscal = new addCal;
	abscal->index1 = 10;
	abscal->index2 = 30;
	cout << abscal->getResult() << endl;
}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}