#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int>v(3, 0);
	for (int i = 0; i < v.size(); i++){
		cin >> v[i];
	}
	int sum = 0;
	sort(v.begin(), v.end());
	cout << v[1] - v[0] + v[2] - v[1] << endl;


	return 0;
}