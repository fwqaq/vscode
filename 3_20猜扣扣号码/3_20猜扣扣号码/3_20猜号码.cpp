#include <iostream>
using namespace std;
class A{
public :
	A(int a,int b){
		this->a = a;
		this->b = b;
	}
	int a;
	int b;
};
class B:public A{
public:
	B(int a,int b, int c): A( a, b){
		this->c = c;
	}
	void print(){
		cout << this->a << this->b << this->c << endl;
	}
	int c;
};
int main(){

	B b(1, 2,3);
	b.print();
	//int q[102] = { 0, 6, 3, 1, 7, 5, 8, 9, 2, 4 }, head, tail;
	//int i = 0;
	//head = 1;
	//tail = 10;
	//while (head < tail){
	//	printf("%d", q[head]);
	//	head++;
	//	q[tail] = q[head];
	//	tail++;
	//	head++;
	//}
	//cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}