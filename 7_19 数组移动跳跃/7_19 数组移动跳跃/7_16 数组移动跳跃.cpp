#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool Get_s(vector<int>& v){
	for (int i = 0; i < v.size(); i++){
		set<int>s;//�����߹���·��������߹������ʱ�򷵻ض����ʱ��ڶ���Ԫ����false
		int start = i;
		while (1){
			//cout << s.insert(start).second << "----" << endl;
			if (s.insert(start).second == false){
				break;
			}
			start = start + v[start];//��ǰ��λ�á�
			if (start < 0 || start >= v.size()){
				return true;
			}
			if (v[start] == 0){
				break;
			}
		}
		s.clear();
	}
	return false;
}
int main(){
	vector<int>v;
	int num = 0;
	while (cin >> num){
		v.push_back(num);
		if (getchar() == '\n'){
			break;
		}
	}
	//�õ�һ�����飬����ߵ�·�����߹��˵ľͲ����߳�ȥ�����ÿ�ζ������ظ���֪���������е�·��
	if (Get_s(v)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	system("pause");
	return 0;
}