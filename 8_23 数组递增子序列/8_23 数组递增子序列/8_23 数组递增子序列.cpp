#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	while (num--){
		int count = 0;
		cin >> count;
		vector<int>v;
		v.resize(count);
		for (int i = 0; i < count; i++){
			cin >> v[i];
		}
		//找寻最长子序列
		vector<int>vv;
		vv.resize(count, 1);
		for (int i = 1; i<count; i++){
			int max1 = 0;
			for (int j = i - 1; j >= 0; j--){
				if (v[i]>v[j]){
					max1 = max(vv[j], max1);
				}
			}
			vv[i] = max1 + 1;
		}
		//找到最大的那个下标，就是长度的最大值
		int max2 = 0;
		int pos = 0;
		vector<int>vvv;
		for (int i = 0; i<count; i++){
			if (vv[i]>max2){
				max2 = vv[i];
				pos = i;
			}
		}
		int end = v[pos];
		vvv.push_back(v[pos]);
		max2--;
		for (int i = pos; i >= 0; i--){
			if (max2 == 0){
				break;
			}
			if (vv[i] == max2&&v[i] < end){
				vvv.push_back(v[i]);
				max2--;
				end = v[i];
			}
		}
		for (int i = vvv.size() - 1; i >= 0; i--)
		{
			cout << vvv[i] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}