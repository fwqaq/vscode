#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		vector<int>v;
		int begn = 0;
		for (int i = 0; i < str.size(); i++){
			begn = i;
			int num = 0;
			while (i < str.size() && str[i] != ','){
				num++;
				i++;
			}
			v.push_back(atoi(str.substr(begn, num).c_str()));
		}
		vector<int>vv(v.size() + 1, 0);
		for (int i = 0; i < v.size(); i++){
			vv[v[i]] = 1;
		}
		for (int i = 0; i < vv.size(); i++){
			if (vv[i] == 0){
				cout << i << endl;
				break;
			}
		}
	}
}