#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���һ������S����������еĺϷ���i,����S[i + 1] = S[i] + d, �����dҲ�����Ǹ�������,���Ǿͳ�����SΪ�Ȳ����С�
С��������һ������Ϊn������x,С�����x��Ϊһ���Ȳ����С�
С����������������������������λ�õ���ֵ�Ĳ���,���ҽ���������������Ρ�������Щ����ͨ���������ǲ��ܱ�ɵȲ�����,С����Ҫ�б�һ�������Ƿ���ͨ������������ɵȲ�����
*/
int main(){
	int count = 0;
	cin >> count;
	vector<int>v;
	for (int i = 0; i < count; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	bool b = true;
	int cha = 0;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		if (it + 1 == v.end()){
			break;
		}
		if (it == v.begin()){
			cha = *(it + 1) - *(it);
		}
		if (*(it + 1) - *(it) != cha){
			b = false;
			break;
		}
	}
	if (b){
		cout << "Possible" << endl;
	}
	else{
		cout << "Impossible" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}