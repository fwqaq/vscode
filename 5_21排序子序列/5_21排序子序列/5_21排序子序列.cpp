#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	while (cin >> n){
		vector<int>v;
		for (int i = 0; i < n; i++){
			int num = 0;
			cin >> num;
			v.push_back(num);
		}
		int sum = 0;
		//进行数据的分离
		int start = 0;
		int end = start + 1;
		int flag = 0;
		while (end < v.size()){
			if (end < v.size() && v[end] >= v[start]){
				while (end < v.size() && v[end] >= v[start]){
					if (end == v.size() - 1){
						flag = 1;
					}
					start = end;
					end++;
				}
				start = end;
				end = start + 1;
				sum++;
			}
			if (end < v.size() && v[end] <= v[start]){
				while (end < v.size() && v[end] <= v[start]){
					if (end == v.size() - 1){
						flag = 1;
					}
					start = end;
					end++;
				}
				start = end;
				end = start + 1;
				sum++;
			}
		}
		if (flag == 0){
			sum++;
		}
		cout << sum << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}