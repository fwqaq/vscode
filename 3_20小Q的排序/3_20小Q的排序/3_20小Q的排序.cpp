#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

	/*1�� ����ǰ������ǰn - 1������Ϊ����
		2�� ����ǰ�����к�n - 1������Ϊ����
		4 3 1 6 2 5   123465 123456
		СQ���������ʹ���������ֲ�����СQ�����뿼����������Ҫ���������������������б�Ϊ����*/
	int n = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	int sum = 0;
	//�ж��ǲ��������
	int flag = 0;
	for (int i = 0; i < n - 1; i++){
		if (v[i]>v[i + 1]){
			flag = 1;//����
			break;
		}
	}
	while (flag){
			//��һ���Ƚ���ǰn-1�����ֵ�����
			sort(v.begin(), v.end() - 1);
			sum++;
			if (v[n - 1] >= v[n - 2]){//�����һ�����ڵ����ڶ�����ʱ�������������
				break;
			}
			//�������ʱ��������Ҫ�Ժ����n-1��������
			sort(v.begin() + 1, v.end());
			sum++;
			if (v[1] >= v[0]){
				break;
			}
	}
	cout << sum << endl;
		system("pause");
		return EXIT_SUCCESS;
}