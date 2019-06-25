#include <iostream>
#include <string>
using namespace std;
int main(){

	int num = 0;
	string str;
	while (cin >> num >> str){
		int sum = 0;
		for (int i = 0; i < num; i++){
			if (str[i] == 'L'){
				sum = (sum + 1) % 4;
			}
			else{
				sum = (sum - 1 + 4) % 4;
			}
		}
		if (sum == 0){
			cout << "N" << endl;
		}
		else if (sum == 1){
			cout << "W" << endl;
		}
		else if (sum == 2){
			cout << "S" << endl;
		}
		else{
			cout << "E" << endl;
		}
	}
	system("pause");
	return 0;
}