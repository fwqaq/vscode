#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n = 0;
	while (cin >> n){
		vector<string>v;
		for (int i = 0; i < n; i++){
			string str;
			cin >> str;
			v.push_back(str);
		}
		vector<int>vv(n, 0);
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size()-1; i++){
			if (v[i + 1].find(v[i]) != -1){
				if(v[i+1].size()>v[i].size()&&v[i+1][v[i].size()] == '/')
					vv[i] = 1;
				if (v[i + 1].size() == v[i].size()){
					vv[i] = 1;
				}
			}
		}
		for (int i = 0; i < v.size(); i++){
			if (vv[i] == 0){
				cout << "mkdir -p " << v[i] << endl;
			}
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}