#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
	//输入一个字符串将3个和上个以上的都肖掉。
	string str;
	cin >> str;
	int sum = 0;
	int pos = -1;
	while (1){
		for (int i = 0; i < str.length() - 2; i++){
			if (str[i] == str[i + 1] && str[i] == str[i + 2]){
				pos = i;
				break;
			}
		}
		for (int i = pos; i < str.length()-1; i++){
			if (str[i] == str[i + 1]){
				sum++;
			}
			else{
				break;
			}
		}
		if (pos == -1){
			break;
		}
		str = str.erase(pos, sum + 1);
		if (str.size() < 3){
			break;
		}
		sum = 0;
		pos = -1;
	}
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}