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
//�ӷ�������
class addCal :public abstractCal{
public:
	int getResult(){
		return index1 + index2;
	}
};
//����������
class subCal :public abstractCal{
public:
	int getResult(){
		return index1 - index2;
	}
};
//�˷�������
class chengCal :public abstractCal{
public:
	int getResult(){
		return index1*index2;
	}
};
//����������
class divCal :public abstractCal{
public:
	int getResult(){
		return index1 / index2;
	}
};
void test(){
	//�ӷ�������
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