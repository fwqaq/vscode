#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2){
		vector<int>v1;
		vector<int>v2;
		v1.resize(26, 0);
		v2.resize(26, 0);

		//在str2中的都不大于str1中的
		for (int i = 0; i < str1.size(); i++){
			v1[str1[i] - 'A']++;
		}
		for (int i = 0; i < str2.size(); i++){
			v2[str2[i] - 'A']++;
		}
		//判断在v2中的是不是都小于等于
		int flag = 1;
		for (int i = 0; i < 26; i++){
			if (v2[i]>v1[i]){
				flag = 0;
				break;
			}
		}
		flag == 1 ? cout << "Yes" << endl : cout << "No" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}