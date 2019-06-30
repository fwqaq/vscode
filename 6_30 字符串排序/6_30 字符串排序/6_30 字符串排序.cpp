#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++){
		string str;
		cin >> str;
		string s = str.substr(str.size() - 6, 6);
		int num = atoi(s.c_str());
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (auto e : v){
		cout << e << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}