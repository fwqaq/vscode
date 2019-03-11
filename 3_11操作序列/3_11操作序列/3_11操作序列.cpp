#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(){
	/*
	小易有一个长度为n的整数序列,a_1,...,a_n。然后考虑在一个空序列b上进行n次以下操作:
	1、将a_i放入b序列的末尾
	2、逆置b序列
	小易需要你计算输出操作n次之后的b序列。
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