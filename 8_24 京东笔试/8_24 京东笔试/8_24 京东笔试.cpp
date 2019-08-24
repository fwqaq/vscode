#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		vector<int>v;
		v.resize(num, 0);
		for (int i = 0; i < num; i++){
			cin >> v[i];
		}
		//用两个数组，一个从前面遍历，一个从后面遍历，从前面找最大值，从后面找最小值，
		//如果在最大值小于等于最小值就+1.最后的结果+1
		//从左到右，从低到高
		//前一段的最大值小于后一段的最vector<int>vv()小值
		vector<int>vv(num, v[0]);
		vector<int>vvv(num, v[num - 1]);
		for (int i = 1; i < num; i++){
			vv[i] = max(vv[i - 1], v[i]);//存储最大值
		}
		for (int i = num - 2; i >= 0; i--){
			vvv[i] = min(vvv[i + 1], v[i]);//存储最小值
		}
		int count = 0;
		for (int i = 0; i < num - 1; i++){
			if (vv[i] <= vvv[i + 1]){
				count++;
			}
		}
		cout << count + 1 << endl;
	}
	return 0;
}