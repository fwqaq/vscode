#include <iostream>
#include <string>
using namespace std;
class Printer{
private:
	static Printer* print;

private:
	Printer(){
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	Printer(const Printer& p);

public:
	static Printer* getPrinter(){
		return print;
	}

	void p(string name){
		cout << name << endl;
	}
};
Printer* Printer::print = new Printer;
void test(){
	Printer* printer = Printer::getPrinter();
	printer->p("haha");
}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}