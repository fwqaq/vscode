#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		string s = "";
		for (int i = 0; i < str.size(); i++){
			char ch = str[i];
			int num = 0;
			while (i < str.size() && str[i] == ch){
				i++;
				num++;
			}
			i--;
			s = s + to_string(num) + ch;
		}
		cout << s << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}