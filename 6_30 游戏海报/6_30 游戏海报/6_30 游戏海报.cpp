#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int sum = 0;
	for (char ch = 'a'; ch <= 'z'; ch++){
		for (int i = 0; i < str.size(); i++){
			if (str[i] != ch){
				sum += 1;
			}
			else{
				sum += 1;
				while (i < str.size() && str[i] == ch){
					i++;
				}
				continue;
			}
		}
	}
	cout << sum + 25 << endl;

	system("pause");
	return EXIT_SUCCESS;
}