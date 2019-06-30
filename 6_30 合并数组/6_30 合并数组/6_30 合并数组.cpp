#include <iostream>
#include <string>
#include <vector>
using namespace std;
void getInt(string str1, vector<int>&v1){
	for (int i = 0; i < str1.size(); i++){
		int num = 0;
		int start = i;
		while (i < str1.size() && str1[i] >= '0'&& str1[i] <= '9'){
			num++;
			i++;
		}
		string s = str1.substr(start, num);
		v1.push_back(atoi(s.c_str()));
	}
}

int main(){
	string str1;
	string str2;
	vector<int>v1;
	vector<int>v2;
	cin >> str1 >> str2;
	getInt(str1, v1);
	getInt(str2, v2);
	vector<int>v3;
	int i = 0;
	int j = 0;
	while (i < v1.size() && j < v2.size()){
		if (v1[i] < v2[j]){
			v3.push_back(v1[i]);
			i++;
		}
		else{
			v3.push_back(v2[j]);
			j++;
		}
	}
	if (i == v1.size() && j < v2.size()){
		while (j < v2.size()){
			v3.push_back(v2[j]);
			j++;
		}
	}
	else if (j == v2.size() && i < v1.size()){
		while (i < v1.size()){
			v3.push_back(v1[i]);
			i++;
		}
	}
	for (int i = 0; i < v3.size(); i++){
		if (i == v3.size() - 1){
			cout << v3[i] << endl;
			break;
		}
		cout << v3[i] << ",";
	}
	system("pause");
	return EXIT_SUCCESS;
}