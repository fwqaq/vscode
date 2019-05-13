#include "Date.h"

void test(){
	cout << "²âÊÔ+= + Ç°ÖÃ++ ºóÖÃ++" << endl;
	Date d1(2012, 2, 5);
	Date d2(2036, 5, 6);
	(d1 + 10).Print();//²âÊÔ+
	d2 += 20;//²âÊÔ+=
	d2.Print();
	d2++.Print();//²âÊÔºóÖÃ++
	(++d2).Print();//²âÊÔÇ°ÖÃ++
	cout << "²âÊÔ-= - Ç°ÖÃ-- ºóÖÃ--" << endl;
	//²âÊÔ-=
	Date d3(2018, 1, 1);
	cout << "aaaaa" << endl;
	d3 -= 1;
	d3.Print();
	//²âÊÔÇ°ÖÃ--ºÍºóÖÃ--ºÍ-
	Date d4 = d3 - 3;
	d4.Print();
	(--d4).Print();
	(d4--).Print();
	Date d5(2015, 1, 31);
	Date d6(2015, 2,1 );

	cout << "²âÊÔ¹ØÏµÔËËã·û" << endl;
	cout << "Ð¡ÓÚ:"<<(d5 < d6) << endl;
	cout << "µÈÓÚ£º"<<(d5 == d6) << endl;

	cout << (d5 - d6) << endl;

}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}