#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n = 0;
	while (cin >> n){
		vector<long long> v;
		//�ܵĶ�������n��3*n���ܵ�����
		for (int i = 0; i < 3 * n; i++){
			long long  num = 0;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		//����Сѡȡn������
		long long sum = 0;
		for (int i = v.size() - 2, j = 0; i >= 0 && j < n; i -= 2, j++){
			sum += v[i];
		}
		cout << sum << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}