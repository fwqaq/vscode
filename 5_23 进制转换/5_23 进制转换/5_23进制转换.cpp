#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int num = 0;
	int port = 0;
	char arr[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	while (cin >> num >> port){
		int flag = 1;
		if (num < 0){
			flag = 0;
			num = -num;
		}
		string str = "";
		while (num>0){
			int s = num%port;
			if (s >= 10){
				str += arr[s % 10];
			}
			else{
				str += to_string(s);
			}
			num /= port;
		}
		reverse(str.begin(), str.end());
		if (flag == 0){
			str = "-" + str;
		}
		cout << str << endl;
	}

	return 0;
}