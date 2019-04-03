#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int str_num(string s1, string s2){
	int i = 0;
	for (i = 0; i < s1.length() && i < s2.length(); i++){
		if (s1[i] != s2[i]){
			break;
		}
	}
	return i;
}
int main(){
	string str;
	cin >> str;
	vector<string>s;
	for (int i = 0; i < str.length(); i++){
		s.push_back(str.substr(i));
	}
	sort(s.begin(), s.end());
	int max_len = 0;
	for (int i = 0; i < s.size() - 1; i++){
		int len = str_num(s[i], s[i + 1]);
		max_len = max(max_len, len);
	}
	cout << max_len << endl;
	system("pause");
	return EXIT_SUCCESS;
}