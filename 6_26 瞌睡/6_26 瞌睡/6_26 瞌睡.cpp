#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 0;//���õķ�����
	int k = 0;//�����ܹ����ֵ�ʱ��
	while (cin >> n >> k){
		vector<int>v1;//֪ʶ��
		vector<int>v2;//״̬
		v1.resize(n);
		v2.resize(n);
		int sum = 0;
		for (int i = 0; i < n; i++){
			int num = 0;
			cin >> num;
			v1[i] = num;//֪ʶ��
		}
		for (int i = 0; i < n; i++){
			int num = 0;
			cin >> num;
			v2[i] = num;
			if (v2[i] == 1){
				sum += v1[i];
			}
		}
		int max1 = sum;
		for (int i = 0; i < n - k + 1; i++){
			int num = sum;
			for (int j = 0; j < k; j++){
				if (v2[j+i] == 0){
					num += v1[j+i];
				}
			}
			if (max1 < num){
				max1 = num;
			}
		}
		cout << max1 << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}