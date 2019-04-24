#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void blindst(string& str1, string& str2){
	int flag = 0;
	int i = 0;
	for (; i < str1.length(); i++){
		int sum = str1[i] - '0' + str2[i] - '0'+flag;//得到两个结果的和
		str2[i] = (char)(sum % 10 + '0');
		flag = sum / 10;
	}
	while (i < str2.length()){
		int sum = (str2[i] - '0') + flag;
		str2[i] = (char)(sum % 10 + '0');
		flag = sum / 10;
		i++;
	}
	if (flag != 0){
		str2 += to_string(flag);
	}
}
int main(){
	string str1, str2;

	cin >> str1 >> str2;
	vector<string>v;
	int ss = 1;
	for (int i = str1.length() - 1; i >= 0; i--){
		string s = "";
		for (int j = i; j < str1.length() - 1; j++){
			s += "0";
		}
		int flag = 0;
		for (int j = str2.length() - 1; j >= 0; j--){
			int x = (str2[j] - '0')*(str1[i] - '0') + flag;
			int sul = (x ) % 10;
			flag = x / 10;
			s += to_string(sul);
		}
		if (flag != 0){
			s += to_string(flag);
		}
		v.push_back(s);
		
	}
	//将所有的结果合并起来
	for (int i = 0; i < v.size()-1; i++){//从第一个开始向后面合并
		blindst(v[i], v[i + 1]);
	}
	for (int i = v[v.size() - 1].length() - 1; i >= 0; i--){
		cout << v[v.size() - 1][i];
	}
	system("pause");
	return EXIT_SUCCESS;
}