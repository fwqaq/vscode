#include "Date.h"

void test(){
	cout << "����+= + ǰ��++ ����++" << endl;
	Date d1(2012, 2, 5);
	Date d2(2036, 5, 6);
	(d1 + 10).Print();//����+
	d2 += 20;//����+=
	d2.Print();
	d2++.Print();//���Ժ���++
	(++d2).Print();//����ǰ��++
	cout << "����-= - ǰ��-- ����--" << endl;
	//����-=
	Date d3(2018, 1, 1);
	cout << "aaaaa" << endl;
	d3 -= 1;
	d3.Print();
	//����ǰ��--�ͺ���--��-
	Date d4 = d3 - 3;
	d4.Print();
	(--d4).Print();
	(d4--).Print();
	Date d5(2015, 1, 31);
	Date d6(2015, 2,1 );

	cout << "���Թ�ϵ�����" << endl;
	cout << "С��:"<<(d5 < d6) << endl;
	cout << "���ڣ�"<<(d5 == d6) << endl;

	cout << (d5 - d6) << endl;

}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}