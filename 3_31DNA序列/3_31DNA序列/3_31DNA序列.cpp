#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	//�����а��������г���Ϊ1��('A', 'C', 'G', 'T')Ƭ��, ���ǳ���Ϊ2��û��ȫ������, ���������в�����"AA", �������2��
	int arr[4] = { 0 };//A-->0  B--->1
	string str;
	cin >> str;
	set<string>v;
	int pos = 0;
	for (int i = 0; i < str.length()-1; i++){
		int len = 1;
		if (str[i] == str[i + 1]){
			pos = i;
			while (str[i] == str[i + 1]){
				len++;
				i++;
			}
		}
		else{
			pos = i;
		}
		v.insert(str.substr(pos, len));
	}
	if (str[str.length() - 1] != str[str.length() - 2]){
		v.insert(str.substr(str.length() - 1, 1));
	}
	//p�ж���v���ַ���ռ�ݵ���С����  'A', 'C', 'G', 'T')
	vector<int>vec;
	for (string s : v){
		vec.push_back(s.length());
	}
	sort(vec.begin(), vec.end());
	for (string s : v){
		if (s[0] == 'A'){
			arr[0] = s.size();
		}
		else if (s[0] == 'C'){
			arr[1] = s.size();
		}
		else if (s[0] == 'G'){
			arr[2] = s.size();
		}
		else{
			arr[3] = s.size();
		}
	}
	int min = arr[0];
	for (int i = 1; i < 4; i++){
		if (min > arr[i]){
			min = arr[i];
		}
	}
	if (arr[0] == arr[1] && arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3]){
		cout << min << endl;
	}
	else{
		cout << min + 1 << endl;
	}
	
	
	system("pause");
	return EXIT_SUCCESS;
}