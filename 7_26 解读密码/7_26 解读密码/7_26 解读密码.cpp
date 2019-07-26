// write your code here cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		string s = "";
		for (int i = 0; i < str.size(); i++){
			if (str[i] >= '0'&&str[i] <= '9'){
				s = s + str[i];
			}
		}
		cout << s << endl;
	}

	system("pause");
	return 0;
}