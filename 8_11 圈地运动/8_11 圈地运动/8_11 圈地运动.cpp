#include <iostream>
#include <vector>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		vector<int>v;
		v.resize(num);
		for (int i = 0; i < num; i++){
			cin >> v[i];
		}
		if (num < 2){
			cout << -1 << endl;
			continue;
		}
		//�����Ĵ��������೤��֮�;Ͳ��У���Ҫ���������ж�
		//�ҳ�ǰ���������ֵ�ͳ���
		int sum = 0;
		int max1 = 0;
		for (int i = 0; i<3; i++){
			sum += v[i];
			if (v[i]> max1){
				max1 = v[i];
			}
		}
		if (max1 < (sum - max1)){
			cout << 3 << endl;
			continue;
		}
		sum = sum - max1;
		int post = -1;
		for (int i = 3; i < num; i++){
			if (v[i]>max1){
				sum += max1;
				max1 = v[i];
				if (max1 < sum){
					post = i;
					break;
				}
			}
			else{
				sum += v[i];
				if (max1 < sum){
					post = i;
					break;
				}
			}
		}
		if (post != -1){
			cout << post + 1 << endl;
		}
		else{
			cout << -1 << endl;
		}
	}

}