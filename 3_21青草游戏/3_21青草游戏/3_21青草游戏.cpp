#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	vector<string>v;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		if (num % 5 == 1 || num % 5 == 3 || num % 5 == 4){
			v.push_back("niu");
		}
		else{
			v.push_back("yang");
		}
	}
	for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}