#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int cnt = 0;;
	cin >> str >> cnt;
	int ret = 0;
	int flag = 0;
	for (int i = 0; i < cnt; i++){
		int ret = str.size() - 1;
		for (int j = 0; j < str.size()-1; j++){
			if (str[j] < str[j + 1]){
				ret = j;
				break;
			}
		}
		str = str.erase(ret, 1);
	}
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}