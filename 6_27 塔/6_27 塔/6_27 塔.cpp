#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	int k = 0;
	cin >> n >> k;
	vector<int>v;
	v.resize(n);
	vector<int>start1;
	vector<int>end1;
	int sum = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
		sum += v[i];
	}
	int max1 = 0;
	int min1 = 0;//坐标
	int ret = k;
	int max2 = v[0];
	int min2 = v[0];//数值
	for (int j = 0; j < k; j++){
		 max2 = v[0];
		 min2 = v[0];
		for (int i = 0; i < n; i++){
			if (v[i]>max2){
				max2 = v[i];//值交换
				max1 = i;//最大值坐标
			}
			if (v[i] < min2){
				min2 = v[i];//值交换
				min1 = i;//最小值坐标
			}
		}
		if (max2 == min2){
			ret = j;
			break;
		}
		v[max1]--;
		v[min1]++;
		start1.push_back(max1+1);
		end1.push_back(min1+1);
	}
	max2 = v[0];
	min2 = v[0];
	for (int i = 0; i < n; i++){
		if (v[i]>max2){
			max2 = v[i];
		}
		if (v[i] < min2){
			min2 = v[i];
		}
	}
	cout << max2 - min2 << " " << ret << endl;
	for (int i = 0; i < start1.size(); i++){
		cout << start1[i] << " " << end1[i] << endl;
	}
	system("pause");
	return 0;
}