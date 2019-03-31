#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define N 1000000007
int main(){
	int num = 0;
	cin >> num;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int n = 0;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	long long sum = 1;
	for (int i = 0; i < v.size(); i++){
		sum = sum*(v[i] - i) % N;
	}
	
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}