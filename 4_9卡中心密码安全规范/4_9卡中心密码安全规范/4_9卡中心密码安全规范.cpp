#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//6$$$$$$$$$$54321###    ###########
int main(){
	string str;
	cin >> str;
	int l = 0;
	if (str.length() >= 20){
		l = str.length() - 20;
		str = str.substr(0, 20);
	}
	int num = 1;
	int Da = 1;
	int Xiao = 1;
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= '0'&&str[i] <= '9'){
			num = 0;
		}
		else if (str[i] >= 'a'&&str[i] <= 'z'){
			Xiao = 0;
		}
		else{
			Da = 0;
		}
	}
	int sum = num + Da + Xiao;
	vector<int>v;
	for (int i = 0; i < str.length()-1; i++){
		int x = 1;
		while (str[i] == str[i + 1]&&i<str.length()-1){
			x++;
			i++;
		}
		if (x >= 3 && (!(str[i - 1] >= '0'&&str[i - 1] <= '9'))){
			v.push_back(x);
		}
	}
	if (sum == 0 && v.empty()){
		cout << 0 << endl;
	}
	else{
		for (int i = 0; i < v.size(); i++){
			l += (v[i] / 3);
		}
	}
	cout << max(l, sum) << endl;
	system("pause");
	return EXIT_SUCCESS;
}