#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		int num = 0;
		while (1){
			for (int i = 0; i < str.size(); i++){
				num += str[i] - '0';
			}
			str = to_string(num);
			if (num < 10){
				break;
			}
			num = 0;
		}
		cout << num << endl;
	}

	return EXIT_SUCCESS;
}