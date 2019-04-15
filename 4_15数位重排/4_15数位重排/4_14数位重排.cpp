#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int num;
	cin >> num;
	vector<string>ret;
	int falg = 0;
	for (int i = 0; i < num; i++){
		int x;
		falg = 0;
		cin >> x;
		vector<int>v;
		int temp = x;
		string str = to_string(temp);
		sort(str.begin(), str.end());
		for (int i = 2; i <= 10; i++){
			temp = x*i;
			string t = to_string(temp);
			sort(t.begin(), t.end());
			if (t == str){
				ret.push_back("Possible");
				falg = 1;
				break;
			}
		}
		if (falg == 0){
			ret.push_back("Impossible");
		}
	}
	for (int i = 0; i < ret.size(); i++){
		cout << ret[i] << endl;
	}
	system("pause");
	return 0;
}