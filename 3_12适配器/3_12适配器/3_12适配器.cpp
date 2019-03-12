#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
//������
class MyPrint:public binary_function<int,int,void>{
public:
	void operator()(int v1, int v2) const{
		cout << "v1=" << v1 << " v2=" << v2 << " v1+v2" << v1 + v2 << endl;
	}
};
void test(){
	vector<int> v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	cout << "��������ʵ��" << endl;
	int x;
	cin >> x;
	for_each(v.begin(), v.end(), bind2nd(MyPrint(), x));

	//bind1st �� ��������Ϊ��������ĵ�һ������,������൱��v1
	//bind2nd �� ��������Ϊ��������ĵڶ������� ������൱��v2
	//bind1st bind2nd����Ԫ��������תΪһԪ��������
}

//ȡ��������
class GreatThen5:public unary_function<int,void>{//��һ�����̳�unary_function
public:
	bool operator()(int v)const{//�ڶ���������const
		return v > 5;
	}
};
void test02(){
	vector<int>v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	//��ʱ���Ǵ�ӡ������5����
	vector<int>::iterator it = find_if(v.begin(), v.end(), not1(GreatThen5()));//��������not1�ؼ���
	vector<int>::iterator it2 = find_if(v.begin(), v.end(), bind2nd(greater<int>(), 5));
	cout << *it << endl;;
	cout << *it2 << endl;
}
//ָ��������
void myPrint(int v1, int v2){
	cout << "v1=" << v1 << " v2" << v2 << endl;
}
void test03(){
	vector<int>v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), bind1st(ptr_fun(myPrint), 5));
}
int main(){
	//test();not
	//system("pause");
	test03();
	system("pause");
	return EXIT_SUCCESS;
}