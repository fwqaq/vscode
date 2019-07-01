// write your code here cpp
#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	vector<int>v1;
	v1.resize(10001);
	v1[0] = 0;
	v1[1] = 1;
	v1[2] = 2;
	for (int i = 3; i < 10001; i++){
		v1[i] = v1[i - 1] + v1[i - 2];
		v1[i] %= 10000;
	}

	while (cin >> n){
		string s = "";
		for (int i = 0; i < n; i++){
			int num = 0;
			cin >> num;
			int a = v1[num];
			a %= 10000;
			string str = to_string(a);
			while (str.size() < 4){
				str = "0" + str;
			}
			s += str;
		}
		cout << s << endl;
	}

	system("pause");
	return 0;
}