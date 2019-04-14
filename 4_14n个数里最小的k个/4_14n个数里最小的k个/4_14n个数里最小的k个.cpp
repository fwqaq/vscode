#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	vector<int>v;
	while (cin >> num){
		v.push_back(num);
	}
	sort(v.begin(), v.end() - 1);

	for (int i = 0; i < v[v.size() - 1]; i++){
		if (i == v[v.size() - 1] - 1){
			cout << v[i] << endl;
			break;
		}
		cout << v[i] << " ";
	}
	system("pause");
	return 0;
}