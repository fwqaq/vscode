#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	string str;
	int flag = 1;
	if (num % 3 == 0){
		while (num > 0){
			if (flag == 1){
				str = str + "2";
				flag = 0;

				num -= 2;
			}
			else{
				str = str + "1";
				num -= 1;
				flag = 1;
			}
		}
	}
	else if (num % 3 == 1){
		while (num > 1){
			if (flag == 1){
				str = str + "2";
				num -= 2;
				flag = 0;
			}
			else{
				str = str + "1";
				num -= 1;
				flag = 1;
			}
		}
		str = "1" + str;
	}
	else{
		while (num > 2){
			if (flag == 1){
				str = str + "2";
				num -= 2;
				flag = 0;
			}
			else{
				str = str + "1";
				num -= 1;
				flag = 1;
			}
		}
		str = str + "2";
	}
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}