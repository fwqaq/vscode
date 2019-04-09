#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.length();
	int flag = 0;
	for (int i = 1; i <= str.length() / 2; i++){
		string st = str.substr(0, i);
		string s = st;
		while (st.length() < len){
			st += s;
		}
		if (st == str){
			cout << s << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0){
		cout << "false" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}