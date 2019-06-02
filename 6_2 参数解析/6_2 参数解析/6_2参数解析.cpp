#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		vector<string>v;
		int start = 0;
		int num = 0;
		int flag = 0;//表示引号是不是存在了
		for (int i = 0; i < str.size(); i++){
			if (str[i] == '"'&&flag == 0){
				start = i;
				flag = 1;
			}
			if (flag == 1){
				num++;
			}
			if (flag == 1 && str[i] == '"'){
				string s = str.substr(start, num);
				v.push_back(s);
				num = 0;
				flag = 0;
			}
			if (flag == 0){
				if (str[i] != ' '){
					num++;
				}
				else{
					string s = str.substr(start, num);
					v.push_back(s);
					num = 0;
					start = i + 1;
				}
			}
		}
		string s = str.substr(start, -1);
		v.push_back(s);
		std::cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++){
			std::cout << v[i] << endl;
		}

	}
	system("pause");
	return 0;
}