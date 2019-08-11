#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		pair<long long, long long>top;
		pair<long long, long long>xia;
		pair<long long, long long>left;
		pair<long long, long long>right;
		for (int i = 0; i < num; i++){
			long long x, y;
			cin >> x >> y;
			pair<long long, long long>temp = make_pair(x, y);
			if (i == 0){
				top = temp;
				xia = temp;
				left = temp;
				right = temp;
				continue;
			}
			if (y > top.second){
				top = temp;
			}
			if (y < xia.second){
				xia = temp;
			}
			if (x > left.first){
				left = temp;
			}
			if (x < right.first){
				right = temp;
			}
		}
		//找出四个点的上下左右的差距最值
		vector<long long>vv1{ top.second, xia.second, left.second, right.second };
		sort(vv1.begin(), vv1.end());
		vector<long long>vv2{ top.first, xia.first, left.first, right.first };
		sort(vv2.begin(), vv2.end());
		long long max1 = max(vv1[3] - vv1[0], vv2[3] - vv2[0]);
		cout << max1*max1 << endl;
	}


	return 0;
}