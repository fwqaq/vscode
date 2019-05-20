#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1;
	string str2;
	while (getline(cin, str1) && getline(cin, str2)){
		//将我们找到的字符进行标记起来
		string s = "";
		for (int i = 0; i < str1.size(); i++){
			char ch = str1[i];
			int post = str2.find(ch);
			if (post == -1){
				s += str1[i];
			}
		}
		cout << s << endl;

	}
	system("pause");
	return EXIT_SUCCESS;
}