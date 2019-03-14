#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <deque>
#include <numeric>
#include <functional>
#include <ctime>
using namespace std;
/*
1) ����ѡ�� �� ABCDEFGHIJKLMNOPQRSTUVWX �� �������÷֣�ѡ�ֱ��

2) ��1��	ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������
3) ��2��	ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������
4) ��3��	ѡ�ֳ�ǩ ѡ�ֱ��� �鿴�������

*/
class Speaker{
public:
	string m_Name;//����
	int m_Score[3];//�÷�����
};
void createSpeaker(vector<int>&v, map<int, Speaker>& m){
	string nameSeed = "abcdefghijklmnopqrstuvwx";
	for (int i = 0; i < nameSeed.length(); i++){
		string name = "ѡ��";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 3; j++){
			sp.m_Score[j] = 0;
		}
		v.push_back(i + 100);//�������
		m.insert(make_pair(i + 100, sp));
	}
}
void speechDraw(vector<int>&v){
	random_shuffle(v.begin(), v.end());
}

void speechContest(int index,vector<int>&v1, map<int, Speaker>&m, vector<int>&v2){
	multimap<int, int, greater<int>>groupMap;//key������   value:���
	int num = 0;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		num++;
		deque<int>d;//�洢������
		for (int i = 0; i < 10; i++){
			int score = rand() % 41 + 60;
			d.push_back(score);
		}//�Ǹ���ί���д��
		//����
		sort(d.begin(), d.end());
		d.pop_back();
		d.front();//ȥ�������ͷ���
		int sum = accumulate(d.begin(), d.end(),0);
		int avg = sum / d.size();

		//��ƽ���ַ��뵽m������
		m[*it].m_Score[index-1] = avg;

		groupMap.insert(make_pair(avg, *it));
		//ÿ������ȡǰ��
		if (num % 6 == 0){
			//���groupMap
			/*cout << "С������ɼ�" << endl;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end(); mit++){
			cout << "���" << mit->second << "����" << m[mit->second].m_Name << "�÷�" << m[mit->second].m_Score[index - 1] << endl;
			}*/
			//ȡ������
			int count = 0;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end()&&count<3; mit++,count++){
				v2.push_back(mit->second);
			}
			groupMap.clear();
		}

	}
}
void showScore(int index, vector<int>&v, map<int, Speaker>&m){
	cout << "��" << index << "�ֱ����ɼ�����" << endl;
	for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++){
		if (it->second.m_Score[index - 1]>0)
		cout << "ѡ�ֱ��:" << it->first << "   ����:" << it->second.m_Name << "   ������" << it->second.m_Score[index - 1] << endl;
	}
	cout << "����ѡ�ֱ��" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << "ѡ�ֵı��:" << *it << "  ѡ�ֵĳɼ�:" << m[*it].m_Score[index - 1] << endl;
	}
}
int main(){
	srand((unsigned int)time(0));
	vector<int>v1;//ѡ�ֱ��
	map<int, Speaker>m;//�洢��źͶ�Ӧ�����ѡ��
	//����ѡ��
	createSpeaker(v1, m);
	//���Գ�Ա�Ƿ񱻳ɹ��Ĵ���
	//for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++){
	//	cout << "��ţ�" << it->first << " " << "����" << it->second .m_Name<< endl;
	//}
	
	//��ǩ
	speechDraw(v1);

	vector<int>v2;//������һ�ֱ�������Ա�ı��
	//����
	speechContest(1,v1, m,v2);//v1 �Ǳ���ѡ�ֱ�ţ�

	//��ʾ�������
	showScore(1, v2, m);//��һ���Ǳ���������

	//�ڶ��ֱ���
	speechDraw(v2);
	vector<int>v3;
	speechContest(2, v2, m, v3);
	showScore(2,v3, m);

	//�����ֱ���
	speechDraw(v3);
	vector<int>v4;
	speechContest(3, v3, m, v4);
	showScore(2, v4, m);


	system("pause");
	return EXIT_SUCCESS;
}