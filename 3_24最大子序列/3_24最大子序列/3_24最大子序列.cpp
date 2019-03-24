#include <iostream>
#include <string>
using namespace std;
int max_Pos(int num,string str){
	int pos = num;
	char m = str[num];
	for (int i = num; i < str.length(); i++){
		if (str[i]>m){
			m = str[i];
			pos = i;
		}
	}
	return pos;
}
int main(){
	string str;
	cin >> str;
	int pos = 0;
	int m = str.length();
	while (pos < m){
		pos = max_Pos(pos,str);
		cout << str[pos];
		pos++;
	}
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}