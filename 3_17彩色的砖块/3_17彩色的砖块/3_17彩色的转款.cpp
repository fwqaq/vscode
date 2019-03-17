#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	set<char>ch;
	for (int i = 0; i < (int)str.length(); i++){
		ch.insert(str.at(i));
	}
	if (ch.size() == 1){
		cout << 1 << endl;
	}
	else if (ch.size() == 2){
		cout << 2 << endl;
	}
	else{
		cout << 0 << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}





	


