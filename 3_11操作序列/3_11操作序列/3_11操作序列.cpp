#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(){
	/*
	С����һ������Ϊn����������,a_1,...,a_n��Ȼ������һ��������b�Ͻ���n�����²���:
	1����a_i����b���е�ĩβ
	2������b����
	С����Ҫ������������n��֮���b���С�
	*/
	list<int> l;
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++){
		int c = 0;
		cin >> c;
		if (i % 2 == 0){
			l.push_front(c);
		}
		else{
			l.push_back(c);
		}
	}
	if (num % 2 != 0){
		int i = 0;
		for (list<int>::iterator it = l.begin(); it != l.end(); it++){
			i++;
			if (i < l.size()){
				cout << *it << " ";
			}
			else{
				cout << *it;
			}
		}
	}
	else{
		l.reverse();
		int i = 0;
		for (list<int>::iterator it = l.begin(); it != l.end(); it++){
			i++;
			if (i < l.size()){
				cout << *it << " ";
			}
			else{
				cout << *it;
			}
		}
	}
	
	system("pause");
	return EXIT_SUCCESS;
}