#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	while (1){
		int num = 0;
		cin >> num;
		v.push_back(num);
		if (getchar() == '\n'){
			break;
		}
	}
	//��ͬ���������Կ�����ͬ�ģ�����˵��Ϊ3�Ŀ��Կ���ѭ��������ֻ�����ĸ���
	vector<int>ch;
	ch.resize(1000, 0);
	for (int i = 0; i < v.size(); i++){
		ch[v[i]]++;
	}
	int ret = 0;
	for (int i = 0; i < ch.size(); i++){
		if (i == 0){
			ret += ch[0];
			continue;
		}
		//��i��λ����ֻҪ��i+1�ı����Ϳ���ʵ��
		if (ch[i] % (i + 1) == 0){
			ret += ch[i];
		}
		else{
			ret += (ch[i] / (i + 1) + 1)*(i + 1);
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}