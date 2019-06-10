#include <iostream>
#include <vector>
using namespace std;
int ret_num(int num){
	int ret = 0;
	while (num >= 2){
		if (num == 2){
			ret += 1;
			break;
		}
		ret = ret + num / 3;
		num = num % 3 + num / 3;
	}
	return ret;
}
int main(){
	int n = 0;
	vector<int>v;
	while(1){
		int num = 0;
		cin >> num;
		if (num == 0){
			break;
		}
		v.push_back(ret_num(num));
	}
	for (int i = 0;i< v.size(); i++){
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}