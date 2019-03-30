#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string str;
	cin >> str;
	vector<int>v;//质量限定为 I
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= '0' && str[i] <= '9'){
			int num = str[i] - '0';
			v.push_back(num);
		}
	}
	int sum = 0;
	for (int i = 0; i < v.size(); i++){
		sum += v[i];
	}
	int x = 0;
	int min = sum;
	int pos = 0;
	for (int i = 0; i < v.size(); i++){
		x += v[i];
		if (abs(x - sum / 2) < min){
			min = x - sum / 2;
			pos = i;
		}
	}
	int m = 0, n = 0;
	for (int i = 0; i <= pos; i++){
		m += v[i];
	}
	for (int i = pos+1; i < v.size(); i++){
		n += v[i];
	}
	cout << m << "," << n << endl;
	system("pause");
	return EXIT_SUCCESS;
}