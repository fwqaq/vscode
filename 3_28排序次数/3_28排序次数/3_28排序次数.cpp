#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>v;
	//找到排序最小的数字其实就是找到我们最大的从最小开始的子序列
	int s = 0;//子序列的长度
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	vector<int>v1 = v;
	sort(v.begin(), v.end());//v[0]是最小值
	int pos = 0;
	for (int i = 0; i < v.size(); i++){
		if (v[0] == v1[i]){
			pos = i;
			break;
		}
	}
	for (int i = pos, j = 0; i < v1.size(); i++){
		if (v1[i] == v[j]){
			s++;
			j++;
		}
	}
	cout << v.size()-s<< endl;
	system("pause");
	return EXIT_SUCCESS;
}