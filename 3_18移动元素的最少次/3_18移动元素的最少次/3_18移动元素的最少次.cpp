#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	multiset<int>m;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int cou = 0;
		cin >> cou;
		m.insert(cou);
		v.push_back(cou);
	}//ֻҪ���λ�ò��������λ�þ����ƶ��˵�Ԫ�أ��������ƶ������������Ǿ�ֻ�Ƚ��������������иı�����ֵ���Ŀ
	vector<int>::iterator v1 = v.begin();
	multiset<int>::iterator m1 = m.begin();
	int count = 0;
	while (v1 != v.end()){
		if (*v1 != *m1){
			count++;
		}
		v1++;
		m1++;
	}
	cout << count << endl;
	system("pause");
	return EXIT_SUCCESS;
}