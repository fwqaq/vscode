#include <iostream>
#include <string>
#include <vector>
using namespace std;
void getString(string& str, vector<string>&v){
	str = str + "_";
	int start = 0;
	int num = 0;
	for (int i = 0; i < str.size(); i++){
		if (str[i] == '_'){
			string s = str.substr(start, num);
			num = 0;
			start = i + 1;
			v.push_back(s);
			continue;
		}
		num++;
	}
}
int main(){
	string str;
	while (cin >> str){
		vector<string>v;
		getString(str,v);
		string s = v[0];
		for (int i = 1; i < v.size(); i++){
			v[i][0] = v[i][0] - 32;
			s += v[i];
		}
		cout << s << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}