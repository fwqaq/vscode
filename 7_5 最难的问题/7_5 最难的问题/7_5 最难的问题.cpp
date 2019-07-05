#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	
	while (getline(cin,str)){
		string str1;
		str1.resize(str.size());
		for (int i = 0; i < str.size(); i++){
			if (str[i] >= 'A'&&str[i] <= 'Z'){
				if (str[i] >= 'F'){
					str1[i] = str[i] - 5;
				}
				else{
					str1[i] = str[i] - 5 + 26;
				}
			}
			else{
				str1[i] = str[i];
			}
		}
		cout << str1 << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}