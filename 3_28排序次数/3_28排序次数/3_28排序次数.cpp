#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>v;
	//�ҵ�������С��������ʵ�����ҵ��������Ĵ���С��ʼ��������
	int s = 0;//�����еĳ���
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	vector<int>v1 = v;
	sort(v.begin(), v.end());//v[0]����Сֵ
	int pos = 0;
	for (int i = 0; i < v.size(); i++){
		if (v[0] == v1[i]){
			pos = i;
			break;
		}
	}
	for (int i = pos, j = 0; i < v1.size(); i++){
		if (v1[i] == v[j]){
			s++;
			j++;
		}
	}
	cout << v.size()-s<< endl;
	system("pause");
	return EXIT_SUCCESS;
}