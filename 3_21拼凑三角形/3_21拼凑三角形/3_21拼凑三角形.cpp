#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main(){
	//ţţ����������ľ��,���ȷֱ���a,b,c��ţţ���԰���һһ��ľ����������,ţţ��Ŀ������������ľ������һ��������,����ţţ��ϣ����������ε��ܳ�Խ��Խ�á�
	vector<int>v;
	for (int i = 0; i < 3; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	int sum = 0;
	sort(v.begin(), v.end());
	if (v[0] + v[1]>v[2]){
		sum = v[0] + v[1] + v[2];
	}
	else{
		while (v[0] + v[1] <= v[2]){
			v[2]--;
		}
		sum = v[0] + v[1] + v[2];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}