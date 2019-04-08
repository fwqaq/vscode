#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	vector<string>s;
	int start = 0;
	int len = 0;
	for (int i = 0; i < str.length(); i++){
		//将字符串中的数字提取出来
		start = i;
		len = 0;
		while (str[i] != ','&&i<str.length()){
			len++;
			i++;
		}
		s.push_back(str.substr(start, len));
	}
	int max_num = 0;
	int min_num = 0;
	for (int i = 0; i < s.size(); i++){
		int num = atoi(s[i].c_str());
		if (i == 0){
			max_num = num;
			min_num = num;
			continue;
		}
		if (num>max_num){
			max_num = num;
		}
		if (num < min_num){
			min_num = num;
		}
	}
	cout << min_num << "," << max_num << endl;
	system("pause");
	return EXIT_SUCCESS;
}