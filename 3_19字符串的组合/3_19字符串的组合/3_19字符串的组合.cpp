#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
int main(){
	string str;
	cin >> str;
	set<string>v;
	//������ڵ��Ӵ�
	for (int i = 0; i <= str.length(); i++){
		for (int j = i; j <= str.length(); j++){
			string s(&str[i], &str[j]);//1
			if (s == ""){
				continue;
			}
			v.insert(s);
		}
	}
	//��ͬ���Ȱ��ֵ�������
	multimap<int, string >m;
	
	for (set<string>::iterator it = v.begin(); it != v.end(); it++){
		m.insert(make_pair((*it).length(), *it));
	}
	for (multimap<int, string>::iterator it = m.begin(); it != m.end(); it++){
		cout << it->second << " ";
	}
	system("pause");
	return EXIT_SUCCESS;
}