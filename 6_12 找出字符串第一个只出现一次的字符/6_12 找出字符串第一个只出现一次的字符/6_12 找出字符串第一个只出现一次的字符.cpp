#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string str;
	while (getline(cin,str)){
		char buf[256];
		memset(buf, 0,sizeof(buf));
		for (int i = 0; i < str.size(); i++){
			buf[str[i]] ++;
		}
		char ch = -1;
		for (int i = 0; i < str.size(); i++){
			if (buf[str[i]] == 1){
				ch = str[i];
				break;
			}
		}
		cout << ch << endl;
	}

	return 0;
}