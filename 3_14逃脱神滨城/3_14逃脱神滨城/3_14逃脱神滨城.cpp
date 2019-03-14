#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str;//代表以后的步骤
	int n = 0;//步数
	int sum = 0;//消耗的能量
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v1.push_back(num);
	}
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v2.push_back(num);
	}
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v3.push_back(num);
	}
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v4.push_back(num);
	}//行走方案分别用符号ESWN表示东南西北。
	vector<int>::iterator it2 = v2.begin();
	vector<int>::iterator it3 = v3.begin();
	vector<int>::iterator it4 = v4.begin();

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++,it2++,it3++,it4++){
		int min = *it;
		char ch = 'E';
		if (*it2 < min)
		{
			min = *it2;
			ch = 'S';
		}
		if (*it3 < min)
		{
			min = *it3;
			ch = 'W';
		}
		if (*it4 < min)
		{
			min = *it4;
			ch = 'N';
		}
		str = str + ch;
		sum = sum + min;
	}
	cout << sum << endl;
	cout << str << endl;
	system("pause");
	return EXIT_SUCCESS;
}