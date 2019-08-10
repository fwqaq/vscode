#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string getAdd(string str1, string str2){
	string str3;
	int len1 = str1.size() - 1;
	int len2 = str2.size() - 1;
	int flag = 0;
	while (len1 >= 0 && len2 >= 0){
		//len2肯定是大于等于len1
		int x = str1[len1] - '0';
		int y = str2[len2] - '0';
		int sum = x + y + flag;
		flag = sum / 10;
		int yushu = sum % 10;
		str3 += to_string(yushu);
		len1--;
		len2--;
	}
	while (len2 >= 0){
		int sum = str2[len2] - '0' + flag;
		flag = sum / 10;
		int yushu = sum % 10;
		str3 += to_string(yushu);
		len2--;
	}
	if (flag == 1){
		str3 += "1";
	}

	reverse(str3.begin(), str3.end());
	return str3;
}
int main(){
	vector<string> v(501);
	v[0] = "1";
	v[1] = "1";
	v[2] = "1";
	for (int i = 3; i <= 500; i++){
		v[i] = getAdd(v[i - 3], v[i - 1]);
	}
	int num = 0;
	while (cin >> num){
		cout << v[num] << endl;
	}
	system("pause");
	return 0;
}