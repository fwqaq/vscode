# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;
bool compare(string &a, string &b){
	return (a + b) > (b + a);
}
int main(){
	int n;
	cin >> n;
	vector<string> str(n, "");
	for (int i = 0; i < n; i++){
		cin >> str[i];
	}
	sort(str.begin(), str.end(), compare);
	string res;
	for (auto c : str){
		res += c;
	}
	if (res[0] == '0'){
		res = "0";
	}
	cout << res << endl;
	system("pause");
	return 0;
}