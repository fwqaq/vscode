#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
bool IsEqual(set<char>& s, vector<int>&v1, vector<int>&v2){
	for (auto e : s){
		if (v1[e - 'a'] != v2[e - 'a']){
			return false;
		}
	}
	return true;
}
int main(){
	string str;
	while (cin >> str){
		vector<int>v1;
		vector<int>v2;
		v1.resize(26, 0);
		for (int i = 0; i < str.size(); i++){
			v1[str[i] - 'a']++;
		}
		//��һ��������v1��Ӧ�����ֺ�v2��Ӧ�ַ���Ӧ��������ͬ�ļ���
		//������������õ���������ǲ���
		int left = 0;
		vector<int>vvv;
		while (left < str.size()){
			int num = 0;
			set<char>s;
			v2.resize(26, 0);
			while (left + num < str.size()){
				//���Ѱ��num�������ж��ǲ���
				s.insert(str[left+num]);
				v2[str[left + num]-'a']++;
				if (IsEqual(s, v1, v2)){
					vvv.push_back(num + 1);
					break;
				}
				num++;
			}
			left = left + num + 1;
		}
		for (int i = 0; i < vvv.size(); i++){
			if (i == vvv.size() - 1){
				cout << vvv[i] << endl;
				break;
			}
			cout << vvv[i] << " ";
		}
	}

	return 0;
}