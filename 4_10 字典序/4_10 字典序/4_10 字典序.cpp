#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	long long n;//���еĳ���
	long long s;//�����ĵڼ�������
	//��int��Ϊ�ַ���
	cin >> n>>s;
	vector<string>ss;
	for (int i = 1; i <= n; i++){//��int���ͱ�Ϊ�ַ���
		ss.push_back(to_string(i));
	}
	sort(ss.begin(), ss.end());
	cout << ss[s - 1] << endl;
	system("pause");
	return 0;
}