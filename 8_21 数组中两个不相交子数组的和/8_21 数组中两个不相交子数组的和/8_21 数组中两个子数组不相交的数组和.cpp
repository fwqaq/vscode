#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int>v;
	while (1){
		int num = 0;
		cin >> num;
		v.push_back(num);
		if (getchar() == '\0'){
			break;
		}
	}
	vector<int>vv(v.size(), 0);//存储正序的最大值
	vector<int>vvv(v.size(), 0);//存储逆序的最大值
	int len = v.size();
	vv[0] = v[0];
	for (int i = 1; i < len; i++){
		if (v[i]>(v[i] + vv[i - 1])){
			vv[i] = v[i];
		}
		else{
			vv[i] = v[i] + vv[i - 1];
		}
	}
	vvv[v.size() - 1] = v[v.size() - 1];
	for (int i = v.size() - 2; i >= 0; i--){
		if (v[i] > (v[i] + vvv[i - 1])){
			vvv[i] = v[i];
		}
		else{
			vvv[i] = vvv[i - 1] + v[i];
		}
	}
	int max1 = vv[0] + vvv[1];
	for (int i = 1; i < v.size() - 1; i++){
		max1 = std::max(max1, vvv[i + 1] + vv[i]);
	}
	cout << max1 << endl;
	system("pause");
	return EXIT_SUCCESS;
}