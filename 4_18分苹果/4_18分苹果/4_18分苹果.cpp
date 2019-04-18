#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	int sum = 0;
	int flag = 0;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int x = 0;
		cin >> x;
		sum += x;
		v.push_back(x);
	}
	int ret = 0;
	if (sum%num != 0){//苹果不能进行平分
		flag = 1;
	}
	else{
		int av = sum / num;
		for (int i = 0; i < v.size(); i++){
			if (v[i] == av){
				continue;
			}
			if (v[i] < av){
				if ((av - v[i]) % 2 != 0){
					flag = 1;
					break;
				}
				ret += ((av - v[i]) / 2);
			}
			if (v[i]>av){
				if ((v[i] - av) % 2 != 0){
					flag = 1;
					break;
				}
			}
		}
	}
	if (flag == 1){
		cout << -1 << endl;
	}
	else{
		cout << ret << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}