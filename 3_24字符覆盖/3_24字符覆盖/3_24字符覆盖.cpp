#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool dx_char(char x, char y){
	return x > y;
}
int main(){
	vector<char>v;
	string str;
	cin >> str;
	string str1;
	cin >> str1;
	for (int i = 0; i < str1.length(); i++){
		v.push_back(str1[i]);
	}
	sort(v.begin(), v.end(), dx_char);
	int z = 0;
	for (int i = 0; i < str.length(); i++){
		for (int j = z; j < v.size(); j++){
			if (v[j]>str[i]){
				str[i] = v[j];
				z++;
				break;
			}
		}
	}
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}
