#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	string s;
	cin >> s;
	v.resize(26);
	for (int i = 0; i < s.size(); i++){
		v[s[i] - 'a']++;
	}
	string str = "";
	for (int i = 0; i < 26; i++){
		if (v[i] != 0){
			str += (char)(i + 'a');
			str += to_string(v[i]);
		}
	}
	cout << str << endl;
	system("pause");
	return 0;
}