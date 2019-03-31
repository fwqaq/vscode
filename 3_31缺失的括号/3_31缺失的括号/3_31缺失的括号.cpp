#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str;
	cin >> str;
	while (1){
		int pos_pre = -1;
		int pos_after = -1;
		if (str.length() < 2){
			break;
		}
		for (int i = 0; i < str.length(); i++){
 			if (str[i] == '('){
				pos_pre = i;
				break;
			}
		}
		for (int i = pos_pre + 1; i < str.length(); i++){
			if (str[i] == ')'){
				pos_after = i;
				break;
			}
		}
		if (pos_after != -1 && pos_pre != -1){
			str = str.erase(pos_after, 1);
			str = str.erase(pos_pre, 1);
			pos_pre = -1;
			pos_pre = -1;
		}
		else{
			break;
		}
	}
	cout << str.length() << endl;
	system("pause");
	return EXIT_SUCCESS;
}