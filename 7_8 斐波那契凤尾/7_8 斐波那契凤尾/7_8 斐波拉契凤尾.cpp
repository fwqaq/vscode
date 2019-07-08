// write your code here cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define N 100000000;
int main(){
	vector<int>v;
	v.resize(100001);
	v[1] = 1;
	v[2] = 2;
	for (int i = 3; i < 100001; i++){
		v[i] = v[i - 1] + v[i - 2];
		v[i] = v[i] % N;
	}
	int num = 0;
	while (cin >> num){
		string str = to_string(v[num]);
		if (str.size() <= 6){
			cout << str << endl;
		}
		else{
			string s = str.substr(str.size() - 6, -1);
			cout << s << endl;
		}
	}
	system("pause");
	return 0;
}