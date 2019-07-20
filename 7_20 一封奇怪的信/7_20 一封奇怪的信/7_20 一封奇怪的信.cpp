#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	v.resize(26);
	for (int i = 0; i < 26; i++){
		cin >> v[i];
	}
	string str;
	cin >> str;
	int sum = 0;
	int len = 0;
	for (int i = 0; i<str.size(); i++){
		sum = sum + str[i - 'a'];
		if (sum > 100){
			len++;
			sum = 0;
		}
		sum = sum + str[i - 'a'];
	}
	cout << len << " " << sum << endl;
	system("pause");
	return 0;
}