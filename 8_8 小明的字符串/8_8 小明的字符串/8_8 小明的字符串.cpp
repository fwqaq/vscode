#include <iostream>
#include <string>
using namespace std;
int main(){
	int N, T;
	string str;
	while (cin >> N >> T >> str){
		for (int i = 0; i < T; i++){
			int x = 0;
			int y = 0;
			cin >> x >> y;
			if (x == 1){
				str = str.substr(N - y, -1) + str.substr(0, N - y);
			}
			else{
				cout << str[y] << endl;
			}
		}
	}

	system("pause");
	return 0;
}