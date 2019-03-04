#include <iostream>
#include "MyString.h"
using namespace std;
void test(){
	MyString str = "abc";
	MyString str2(str);
	cout << str2 << endl;
	MyString str3 = "abcd";
	cout << str3 << endl;
	cout << str2 + str3 << endl;
	MyString str5 = str2 + str3;

}
int main(){
	test();
	system("pause");
	return EXIT_SUCCESS;
}