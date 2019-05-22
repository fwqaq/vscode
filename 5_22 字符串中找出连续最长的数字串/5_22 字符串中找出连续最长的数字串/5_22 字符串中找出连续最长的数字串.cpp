#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while (getline(cin,str)){
		string s1 = "";
		for (int i = 0; i < str.size(); ++i){
			string s2 = "";
			if (i < str.size() && str[i] >= '0'&&str[i] <= '9'){
				while (i < str.size() && str[i] >= '0'&&str[i] <= '9'){
					s2 += str[i];
					i++;
				}
				if (s2.size()>s1.size()){
					s1 = s2;
				}
			}
		}
		cout << s1 << endl;
	}
	return 0;
}