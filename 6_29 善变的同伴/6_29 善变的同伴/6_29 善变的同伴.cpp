#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int N = 0;//菜品的数量
	int M = 0;//打菜的次数
	cin >> N >> M;
	vector<int>v1;
	v1.resize(N);
	for (int i = 0; i < N; i++){
		int num = 0;
		cin >> num;
		v1[i] = num;
	}
	int sum = 0;
	for (int i = 0; i < M; i++){
		vector<int>v2;
		v2.resize(N);
		if (v1[0] > 0 ){
			v2[0] = v1[0];
		}
		for (int j = 1; j < N; j++){
			v2[j] = std::max(v1[j], v2[j - 1] + v1[j]);
		}
		int max_sum = 0;
		int flag = 0;
		for (int j = 0; j < N; j++){
			if (v2[j]>max_sum){
				max_sum = v2[j];
				flag = j;
			}
		}
		int count_sum = 0;
		for (int j = flag; j >= 0; j--){
			count_sum += v1[j];
			v1[j] = 0;
			if (count_sum == max_sum){
				break;
			}
		}
		sum += max_sum;	
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}