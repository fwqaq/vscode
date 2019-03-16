#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	//输入一串字符，包含数字[0-9]和小写字母[a-z]，要求按数字从小到大、字母从a到z排序，并且所有数字排在字母后面
	
	multiset<char>s1;//对数字进行排序
	multiset<char>s2;//对字母进行排序
	string name;
	cin >> name;
	for (int i = 0; i < name.length(); i++){
		if (name[i] >= '0' && name[i] <= '9'){
			s1.insert(name[i]);
		}
		else{
			s2.insert(name[i]);
		}
	}
	for (multiset<char>::iterator it = s2.begin(); it != s2.end(); it++){
		cout << *it;
	}
	for (multiset<char>::iterator it = s1.begin(); it != s1.end(); it++){
		cout << *it;
	}
	system("pause");
	return 0;
}