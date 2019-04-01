#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count;
	int type_num;
	if (n >= 188){
		type_num = 7;
		count = n - 100 - 50 - 5 - 10 - 20 - 1 - 2 + 7;
	}
	else if (n >= 88){
		type_num = 6;
		count = n  - 50 - 5 - 20 - 10 - 1 - 2 + 6;
	}
	else if (n >= 38){
		type_num = 5;
		count = n - 20 - 5 - 10 - 1 - 2 + 5;
	}
	else if (n >= 18){
		type_num = 4;
		count = n - 10 - 1 - 2 - 5 + 4;
	}
	else if (n >= 8){
		type_num = 3;
		count = n - 5 - 2 - 1 + 3;
	}
	else if (n >= 3){
		type_num = 2;
		count = n - 1 - 2 + 2;
	}
	else if (n == 2 || n == 1){
		type_num = 1;
		count = n;
	}
	cout << type_num << " " << count << endl;
	system("pause");
	return EXIT_SUCCESS;
}