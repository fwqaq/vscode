
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	string x, res = "";
	map<char, int> book;
	int i;
	for (cin >> x, i = 0; i < x.length(); i++)
	if (!book.count(x[i])) res += x[i], book[x[i]] = 1;
	cout << res;
	system("pause");
	return EXIT_SUCCESS;
}