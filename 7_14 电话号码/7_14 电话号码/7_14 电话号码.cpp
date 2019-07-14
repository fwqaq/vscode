#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main(){
	int num = 0;
	char ch[] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
	while (cin >> num){
		set<string>se;
		for (int i = 0; i < num; i++){
			string str;
			cin >> str;
			string s = "";
			int x = 0;
			for (int i = 0; i < str.size(); i++){
				if (str[i] == '-'){
					continue;
				}
				if (str[i] >= '0'&&str[i] <= '9'){
					s = s + str[i];
				}
				else{
					s = s + to_string((char)(ch[str[i] - 'A']));
				}
				x++;
				if (x == 3){
					s = s + "-";
				}
			}
			se.insert(s);
		}
		for (auto e : se){
			cout << e << endl;
		}
		cout << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}