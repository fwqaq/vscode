#include <iostream>
#include <vector>
using namespace std;
int main(){
	int num;//石子的数量
	cin >> num;
	int sum = 0;
	int ret = 0;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sum = v[0];
	for (int i = 1; i < num; i++){
		int score = sum*v[i];
		sum = sum + v[i];
		ret += score;
	}
	cout << ret << endl;
	system("pause");
	return EXIT_SUCCESS;
}