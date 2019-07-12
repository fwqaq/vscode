#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

void print(int num, int den);
int gcd(int a, int b);

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
		//将字符str1中的数字进行分离
	int post = 0;
	for (int i = 0; i < str1.size(); i++){
		if (str1[i] == '/'){
			post = i;
			break;
		}
	}
	int num1, den1, num2, den2, num, den;
	num1 = atoi(str1.substr(0, post).c_str());
	den1 = atoi(str1.substr(post + 1, -1).c_str());
	for (int i = 0; i < str2.size(); i++){
		if (str2[i] == '/'){
			post = i;
			break;
		}
	}
	num2 = atoi(str2.substr(0, post).c_str());
	den2 = atoi(str2.substr(post + 1, -1).c_str());
	// 分别打印四则运算
	// 加法
	num = num1*den2 + num2*den1;
	den = den1*den2;
	print(num1, den1); cout << " + "  ; print(num2, den2);
	cout << " = "; print(num, den); cout << endl;
	// 减法
	num = num1*den2 - num2*den1;
	print(num1, den1); cout << " - "; print(num2, den2);
	cout << " = "; print(num, den); cout << endl;
	// 乘法
	num = num1*num2;
	print(num1, den1); cout << " * "; print(num2, den2);
	cout << " = "; print(num, den); cout << endl;
	// 除法
	num = num1*den2; den = num2*den1;
	print(num1, den1); cout << " / "; print(num2, den2);
	cout << " = "; print(num, den); cout << endl;


	system("pause");
	return EXIT_SUCCESS;
}

void print(int num, int den)
{
	int ggccdd = gcd(num, den);
	num = num / ggccdd;  den = den / ggccdd;
	long long p = num*den;
	num = abs(num); den = abs(den);
	if (p < 0) {
		cout << "(-";
	}
	if (num == 0) {
		cout << "0";
	}
	else if (den == 0) {
		cout << "Inf";
	}
	else {
		int intPart = num / den;
		if (intPart) {
			cout << intPart;
		}
		int fracPart = num%den;
		if (fracPart) {
			if (intPart) cout << " ";
			cout << fracPart << "/" << den ;
		}
	}
	if (p < 0) {
		cout << ")";
	}
}

int gcd(int a, int b)
{
	int c;
	while (b) {
		c = a%b;
		a = b; b = c;
	}
	return a;
}