#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	//输入三个数
	vector<int>v{ 3, 0 };
	int flag = 0;
	for (int i = 0; i < 3; i++){
		cin >> v[i];
		if (v[i] == 1){
			flag ++;
		}
	}
	if (flag == 0){
		cout << v[0] * v[1] * v[2] << endl;
	}
	else{
		if (flag == 1){
			int bu = 0;
			for (int i = 0; i < 3; i++){
				if (v[i] == 1){
					bu = i;
				}
			}
			if (bu == 0){
				cout << (v[0] + v[1])*v[2] << endl;
			}
			else if (bu == 1){
				cout << (v[1] + std::min(v[0], v[2]))*std::max(v[0], v[2]);
			}
			else{
				cout << v[0] * (v[1] + v[2]);
			}
		}
		else{
			cout << v[0] + v[1] + v[2] << endl;
		}
	}
	system("pause");
	return 0;
}