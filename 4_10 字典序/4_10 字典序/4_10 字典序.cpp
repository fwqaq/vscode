#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	long long n;//序列的长度
	long long s;//排序后的第几个数字
	//将int变为字符串
	cin >> n>>s;
	vector<string>ss;
	for (int i = 1; i <= n; i++){//将int类型变为字符串
		ss.push_back(to_string(i));
	}
	sort(ss.begin(), ss.end());
	cout << ss[s - 1] << endl;
	system("pause");
	return 0;
}