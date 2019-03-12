#include <iostream>
#include <string>
using namespace std;

int main(){
	/*
	对于任意两个正整数x和k,我们定义repeat(x, k)为将x重复写k次形成的数,例如repeat(1234, 3) = 123412341234,repeat(20,2) = 2020.
	牛牛现在给出4个整数x1, k1, x2, k2, 其中v1 = (x1, k1), v2 = (x2, k2),请你来比较v1和v2的大小。
	*/
	string x1;
	int k1;
	string x2;
	int k2;
	cin >> x1;
	cin >> k1;
	cin >> x2;
	cin >> k2;
	string str1;
	string str2;
	for (int i = 0; i < k1; i++){
		str1 += x1;
	}
	for (int i = 0; i < k2; i++){
		str2 += x2;
	}

	int num = str1.length() - str2.length();
	int num2 = str1.compare(str2);
	if (num == 0){
		if (num2 == 0){
			cout << "Equal" << endl;
		}
		if (num2>0){
			cout << "Greater" << endl;
		}
		if (num2<0){
			cout << "Less" << endl;
		}
	}
	if (num>0){
		cout << "Greater" << endl;
	}
	if (num < 0){
		cout << "Less" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}