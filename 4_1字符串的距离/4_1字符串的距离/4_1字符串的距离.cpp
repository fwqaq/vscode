#include <iostream>
#include <string>
using namespace std;
int main(){
	string S;
	string T;
	cin >> T;//����
	cin >> S;//�̵�
	long long sum = 0;
	for (int i = 0; i <= T.length() - S.length(); i++){
		string s = T.substr(i, S.length());
		
	}
	cout << sum << endl;
	system("pause");

	return EXIT_SUCCESS;
}