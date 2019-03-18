#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str;
	int sum = 0;
	cin >> str;
	int cout = 0;
	cin >> cout;
	int num[26] = { 0 };
	for (int i = 0; i < (int)str.length(); i++){
		num[str[i] - 'a']++;
	}//利用桶排序计算字母的个数
	sort(&num[0], &num[25]);
	for (int i = 0; i < 26 - cout; i++){
		sum += num[i] * num[i];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}