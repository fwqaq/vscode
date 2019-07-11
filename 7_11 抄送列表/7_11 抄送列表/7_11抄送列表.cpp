#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1, str2;
	while (getline(cin, str1)){
		getline(cin, str2);
		bool sta = false;
		for (int i = 0; i < str1.length(); i++){
			string t;
			if (str1[i] == '"'){
				i++;
				while (i < str1.length() && str1[i] != '"'){
					t += str1[i];
					i++;
				}
				if (t == str2){
					sta = true;
					break;
				}
			}
			else if (str1[i] != ','){
				while (i < str1.length() && str1[i] != ','){
					t += str1[i];
					i++;
				}
				if (t == str2){
					sta = true;
					break;
				}
			}
		}
		if (sta == true)
			cout << "Ignore" << endl;
		else
			cout << "Important!" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}