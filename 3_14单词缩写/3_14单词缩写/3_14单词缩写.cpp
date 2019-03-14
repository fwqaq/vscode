#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int num = 0;
	vector<string>v1;
	vector<string>v2;
	cin >> num;
	for (int i = 0; i < num; i++){
		string str;
		cin >> str;
		v1.push_back(str);
	}
	for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++){
		if ((*it).length()>10){
			v2.push_back(*it);
		}
		else{
			int num = (*it).length() - 2;
			char p[1024];
			_itoa(num, p, 10);
			string str2 = (*it)[0] + p + (*it)[num + 1];//替换从pos开始n个字符为字符串str
			v2.push_back(str2);
		}
	}
	for (vector<string>::iterator it = v2.begin(); it != v2.end(); it++){
		cout << *it << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}