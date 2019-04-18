#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int start = 0;
	int end = v.size() - 1;
	int sum1 = 0;
	int sum2 = 0;
	int flag = 0;
	while (start <= end){
		if (flag == 0){
			if (v[start] <= v[end]){
				sum1 += v[end];
				end--;
			}
			else
			{
				sum1 += v[start];
				start++;
			}
			flag = 1;
		}
		if (flag == 1){
			if (v[start] <= v[end]){
				sum2 += v[end];
				end--;
			}
			else
			{
				sum2 += v[start];
				start++;
			}
			flag = 0;
		}
	}
	cout << abs(sum1 - sum2) << endl;
	system("pause");
	return EXIT_SUCCESS;
}