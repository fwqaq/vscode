#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2){
		if (str1.size() < str2.size()){
			string str = str1;
			str1 = str2;
			str2 = str;
		}
		int post = str1.find(str2);
		if (post == -1){
			cout << 0 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}

	system("pause");
	return 0;
}