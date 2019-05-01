#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
void get_string(string str, vector<string>&s){
	int num = 0;
	int begin = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			s.push_back(str.substr(begin, num));
			num = 0;
			begin = i + 1;
			continue;
		}
		num++;
	}
	s.push_back(str.substr(begin,num));
	return;

}
int main(){
	string str;
	set<string>se;
	while (getline(cin, str)){
		vector<string>s;
		int num = 0;
		get_string(str, s);
		for (int i = 0; i < s.size(); i++){
			se.insert(s[i]);
		}
	}
	cout << se.size() << endl;
	system("pause");
	return EXIT_SUCCESS;
}