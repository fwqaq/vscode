#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int x = -1;
	int y = -1;
	for (int i = 0; i < str.length()-4; i++){
		if (str[i] == '['&&str[i + 1] == 'i'&&str[i + 2] == 'm'&&str[i + 3] == 'g'&&str[i + 4] == ']'){
			x = i;
		}
	}
	for (int i = x; i < str.length() - 5; i++){
		if (str[i] == '['&&str[i + 1] == '\\'&&str[i + 2] == 'i'&&str[i + 3] == 'm'&&str[i + 4] == 'g'&&str[i+5] == ']'){
			y = i;
		}
	}
	if (x == -1 || y == -1||x>y){
		cout << "null" << endl;
	}
	else{
		for (int i = x; i <= y+5; i++){
			cout << str[i];
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}