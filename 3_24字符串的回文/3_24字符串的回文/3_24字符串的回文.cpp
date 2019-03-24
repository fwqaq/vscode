#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int x = 0;
	int y = str.length()-1;
	int flag = 0;
	while (x < y){
		if (!((str[x] >= 'a'&&str[x] <= 'z') || (str[x] >= 'A'&&str[x] <= 'Z') || (str[x] >= '0'&&str[x] <= '9'))){//不是数字或者
			x++;
			continue;
		}
		if (!((str[y] >= 'a'&&str[y] <= 'z') || (str[y] >= 'A'&&str[y] <= 'Z') || (str[y] >= '0'&&str[y] <= '9'))){//不是数字或者
			y--;
			continue;
		}
		if (str[x] >= 'a'&&str[x] <= 'z'){
			str[x] -= 32;
		}
		if (str[y] >= 'a'&&str[y] <= 'z'){
			str[y] -= 32;
		}
		if (str[x] != str[y]){
			flag = 1;
		}
		x++;
		y--;
	}
	if (flag == 0){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}