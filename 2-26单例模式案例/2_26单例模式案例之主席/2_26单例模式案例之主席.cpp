#include <iostream>
using namespace std;
//����һ����ϯ��
//���� ����ģʽ Ϊ�˴������еĶ��� ���ұ�ֻ֤��һ������ʵ��
class ChairMan{
private:
	ChairMan(){
		cout << "����������ϯ" << endl;//�ڱ����ʱ��ͽ���ִ��
	}
	ChairMan(const ChairMan& p){//��ʱ����˽�п�������

	}
private:
	static ChairMan* singleMan;
public:
	//�ṩ get���� ������ϯ
	static ChairMan* getSingleMan(){
		return singleMan;
	}
};
ChairMan* ChairMan::singleMan = new ChairMan;
void test(){
	//ֱ��ʵ�������д��� ����������д��� �ȷ��������ܽ��д����µĶ���
	ChairMan* cm = ChairMan::getSingleMan();
	ChairMan* cm1 = ChairMan::getSingleMan();
	if (cm == cm1){
		cout << "��ͬ" << endl;
	}
}
int main(){
	cout << "main����ִ��" << endl;
	test();
	system("pause");
	return EXIT_SUCCESS;
}