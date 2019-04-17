#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;
int main(){
	string str;
	cin >> str;
	int start = 0;
	int pos = 0;
	int len = 0;
	vector<int>v;
	while (start < str.length()){
		if (str[start] != ','){
			if (start == str.length() - 1){
				len++; start++;
			}
			else{
				len++;
				start++;
				continue;
			}
		}
		string s = str.substr(pos, len);
		len = 0;
		int num = atoi(s.c_str());
		pos = start + 1;
		v.push_back(num);
		start++;
	}
	int* p = new int[v.size()];
	for (int i = 0; i < v.size(); i++){
		p[i] = 1;
	}
	for (int i = 1; i < v.size(); i++){
		if (v[i]>v[i - 1]){
			p[i] = p[i - 1] + 1;
		}
	}
	for (int i = v.size() - 1; i > 0; i--){
		if (v[i - 1] > v[i] && p[i - 1] <= p[i]){
			p[i - 1] = p[i] + 1;
		}
	}
	int sum = 0;
	for (int i = 0; i < v.size(); i++){
		sum += p[i];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}