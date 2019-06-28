#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;//表示红包的数量
	cin >> n;
	vector<int>v;
	v.resize(n);
	vector<int>sum;
	sum.resize(n);
	int he = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
		he += v[i];
		sum[i] = he;
	}
	vector<int>rsum;
	rsum.resize(n);
	he = 0;
	for (int i = n - 1; i >= 0; i--){
		he += v[i];
		rsum[i] = he;
	}
	int ret = 0;
	if (n == 2 && v[0] == v[1]){
		ret = v[0];
	}
	int right = 0;
	int left = n - 1;
	while (right<n - 2 && (left-right)>=1 && n>2){
		if (sum[right] == rsum[left]){
			ret = sum[right];
			right++;
			left--;
		}
		else if (sum[right] > rsum[left]){
			left--;
		}
		else if (sum[right] < rsum[left]){
			right++;
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}