#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
bool myCompare(int i, int j){
	return i > j;
}
int main(){
	//����һ��vector�洢ѡ��
	vector<deque<int>> v;
	//����deque�洢����
	for (int j = 0; j < 5; j++){
		deque<int> m;
		for (int i = 0; i < 10; i++){
			int score;
			cin >> score;
			m.push_back(score);
		}
		sort(m.begin(), m.end(), myCompare);//��������
		m.pop_front();//ȥ����һ��Ԫ��
		m.pop_back();//ȥ�����һ��Ԫ��
		v.push_back(m);//������deque���뵽vector��ȥ
		
		/*for (deque<int>::iterator it = m.begin(); it != m.end(); it++){
			int i = 1;
			cout << " ��"<<i<<"��" << *it << " ";
			++i;
		}
		cout << endl;*/
	}
	//���ƽ�������Ҵ�ӡ
	for (vector<deque<int>>::iterator it = v.begin(); it != v.end(); it++){
		int sum = 0;
		for (deque<int>::iterator it1 = (*it).begin(); it1 != (*it).end();it1++){
			sum += *it1;
		}
		cout << "ƽ���֣�" << sum / (*it).size() << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}