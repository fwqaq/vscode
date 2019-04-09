#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	char s[1024];
	cin.getline(s, 1024);
	string str(s);
	string sy;
	cin >> sy;
	for (int i = 0; i < sy.length(); i++){
		for (int j = 0; j < str.length(); j++){
			if (str[j] == sy[i]){
				str = str.erase(j, 1);
			}
		}
	}
	cout << str << endl;

	system("pause");
	return EXIT_SUCCESS;
}