#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	reverse(str.begin(), str.end());
	int start = 0;
	int end = 0;
	while (end < str.length()){
		while (str[end] != ' '&&end<str.length()){
			end++;
		}
		//½øĞĞÄæÖÃ
		reverse(&str[start], &str[end]);
		start = ++end;
	}
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}