#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void get_Num(int x,vector<int>&v){
	for (int i = 2; i < sqrt(x); i++){
		if (x % i== 0){
			v.push_back(i);
			v.push_back(x / i);
		}
	}
	if (sqrt(x)*sqrt(x) == x){
		v.push_back(sqrt(x));
	}
}
int main(){
	int n = 0;
	while (cin >> n){
		int num = 0;
			vector<int>v;
			get_Num(n, v);
			sort(v.begin(), v.end());
			for (int i = 0; i < v.size(); i++){
				if (n%v[i] == 0){
					num++;
					while (n%v[i] == 0){
						n = n / v[i];
					}
				}
			}
			if (num == 0){
				num = 1;
			}
			cout << num << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}