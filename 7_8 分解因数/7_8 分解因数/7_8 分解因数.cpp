#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void get_num(vector<int>&v, int num){
	for (int i = 2; i < sqrt(num); i++){
		if (num%i == 0){
			v.push_back(i);
			v.push_back(num / i);
		}
	}
	if ((int)sqrt(num)*(int)sqrt(num) == num){
		v.push_back(sqrt(num));
	}
	sort(v.begin(), v.end());
}
int main(){
	int num = 0;
	while (cin >> num){
		vector<int>ys;
		get_num(ys, num);
		string str = to_string(num) + " = ";
		int flag = 0;
		if (ys.empty()){
			cout << to_string(num) << " = " << to_string(num) << endl;
			continue;
		}
		for (int i = 0; i < ys.size(); i++){
			while (num%ys[i] == 0){
				if (flag == 0){
					str = str + to_string(ys[i]);
					flag = 1;
				}
				else{
					str = str + " * " + to_string(ys[i]);
				}
				num /= ys[i];
			}
		}
		cout << str << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}