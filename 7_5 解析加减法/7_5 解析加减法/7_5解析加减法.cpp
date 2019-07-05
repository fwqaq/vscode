#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		vector<int>v1;
		vector<char>v2;
		int flag = 1;
		int begin = 0;
		if (str[0] == '-'){
			flag = -1;
			begin = 1;
		}
		int num = 0;
		for (int i = begin; i < str.size(); i++){
			if (str[i] >= '0'&&str[i] <= '9'){
				num = num * 10 + (str[i] - '0')*flag;
				flag = 1;
			}
			else{
				v1.push_back(num);
				v2.push_back(str[i]);
				num = 0;
			}
		}
		v1.push_back(num);
		int zuo = v1[0];
		for (int i = 1; i < v1.size(); i++){
			int you = v1[i];
			if (v2[i-1] == '+'){
				zuo = zuo + you;
			}
			else{
				zuo = zuo - you;
			}
		}
		cout << zuo << endl;
	}
}
