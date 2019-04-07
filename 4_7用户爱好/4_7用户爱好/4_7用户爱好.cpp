#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(int value){
	cout << value << endl;
}
bool callback(int num,int value){
	return num == value;
}
int main(){
	vector<int>result;
	vector<int>love;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		love.push_back(num);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		int l, r, k;
		cin >> l >> r >> k;//lr是范围，k是我们的值的大小
		int sum = 0;
		for (int i = l - 1; i <= r - 1;i++){
			if (k == love[i]){
				sum++;
			}
		}
		result.push_back(sum);
	}
	for_each(result.begin(), result.end(), print);
	system("pause");
	return EXIT_SUCCESS;
}