#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num;
	int len;
	vector<int>v;
	cin >> num >> len;
	for (int i = 0; i < num; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int min = 1000000000;
	for (int i = 0; i < v.size() - 1; i++){
		int left = v[i] + len>v[v.size() - 1] - len ? v[i] + len : v[v.size() - 1] - len;
		int right = v[i + 1] - len>v[0] + len ? v[0] + len : v[i + 1] - len;
		if ((left - right) < min){
			min = left - right;
		}
	}
	cout << min << endl;
	system("pause");
	return 0;
}