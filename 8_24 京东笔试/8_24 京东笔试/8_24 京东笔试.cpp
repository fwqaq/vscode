#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		vector<int>v;
		v.resize(num, 0);
		for (int i = 0; i < num; i++){
			cin >> v[i];
		}
		//���������飬һ����ǰ�������һ���Ӻ����������ǰ�������ֵ���Ӻ�������Сֵ��
		//��������ֵС�ڵ�����Сֵ��+1.���Ľ��+1
		//�����ң��ӵ͵���
		//ǰһ�ε����ֵС�ں�һ�ε���vector<int>vv()Сֵ
		vector<int>vv(num, v[0]);
		vector<int>vvv(num, v[num - 1]);
		for (int i = 1; i < num; i++){
			vv[i] = max(vv[i - 1], v[i]);//�洢���ֵ
		}
		for (int i = num - 2; i >= 0; i--){
			vvv[i] = min(vvv[i + 1], v[i]);//�洢��Сֵ
		}
		int count = 0;
		for (int i = 0; i < num - 1; i++){
			if (vv[i] <= vvv[i + 1]){
				count++;
			}
		}
		cout << count + 1 << endl;
	}
	return 0;
}