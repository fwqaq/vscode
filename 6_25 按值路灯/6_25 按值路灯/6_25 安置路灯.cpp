#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	vector<int>ret;
	while (num--){
		int len = 0;
		cin >> len;
		string road;
		cin >> road;
		road += "X";
		vector<int>v;
		int s = 0;
		int sum = 0;
		for (int i = 0; i < road.size();){
			if (road[i] == '.'){
				i += 3;
				sum++;
			}
			else{
				i += 1;
			}
		}
		ret.push_back(sum);
	}
	for (auto e : ret){
		cout << e << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}