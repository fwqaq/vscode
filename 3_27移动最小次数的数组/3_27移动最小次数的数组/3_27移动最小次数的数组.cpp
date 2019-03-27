#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int>v;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 1; i < v.size(); i++){
		sum += v[i] - v[i - 1];
		int x = v[i] - v[i - 1];
		for (int j = 0; j < v.size(); j++){
			if (j == i){
				continue;
			} 
			v[j] += x;   //
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}