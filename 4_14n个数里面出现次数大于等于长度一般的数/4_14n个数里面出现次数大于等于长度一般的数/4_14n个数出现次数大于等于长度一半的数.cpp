#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int num;
	vector<int>v;
	while (cin >> num){
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int count = 0;
	for (int i = 0; i < v.size() - 1; i++){
		count = 1;
		while (v[i] == v[i + 1] && i < v.size()){
			count++;
			i++;
		}
		if (count >= v.size() / 2){
			cout << v[i - 1];
			break;
		}
	}
	system("pause");
	return 0;
}