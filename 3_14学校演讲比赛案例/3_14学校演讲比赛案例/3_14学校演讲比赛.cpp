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
1) 产生选手 （ ABCDEFGHIJKLMNOPQRSTUVWX ） 姓名、得分；选手编号

2) 第1轮	选手抽签 选手比赛 查看比赛结果
3) 第2轮	选手抽签 选手比赛 查看比赛结果
4) 第3轮	选手抽签 选手比赛 查看比赛结果

*/
class Speaker{
public:
	string m_Name;//姓名
	int m_Score[3];//得分数组
};
void createSpeaker(vector<int>&v, map<int, Speaker>& m){
	string nameSeed = "abcdefghijklmnopqrstuvwx";
	for (int i = 0; i < nameSeed.length(); i++){
		string name = "选手";
		name += nameSeed[i];
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 3; j++){
			sp.m_Score[j] = 0;
		}
		v.push_back(i + 100);//创建编号
		m.insert(make_pair(i + 100, sp));
	}
}
void speechDraw(vector<int>&v){
	random_shuffle(v.begin(), v.end());
}

void speechContest(int index,vector<int>&v1, map<int, Speaker>&m, vector<int>&v2){
	multimap<int, int, greater<int>>groupMap;//key：分数   value:编号
	int num = 0;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		num++;
		deque<int>d;//存储分数的
		for (int i = 0; i < 10; i++){
			int score = rand() % 41 + 60;
			d.push_back(score);
		}//是个评委进行打分
		//排序
		sort(d.begin(), d.end());
		d.pop_back();
		d.front();//去除最高最低分数
		int sum = accumulate(d.begin(), d.end(),0);
		int avg = sum / d.size();

		//将平均分放入到m容器中
		m[*it].m_Score[index-1] = avg;

		groupMap.insert(make_pair(avg, *it));
		//每六个人取前三
		if (num % 6 == 0){
			//清空groupMap
			/*cout << "小组比赛成绩" << endl;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end(); mit++){
			cout << "编号" << mit->second << "姓名" << m[mit->second].m_Name << "得分" << m[mit->second].m_Score[index - 1] << endl;
			}*/
			//取请三名
			int count = 0;
			for (multimap<int, int, greater<int>>::iterator mit = groupMap.begin(); mit != groupMap.end()&&count<3; mit++,count++){
				v2.push_back(mit->second);
			}
			groupMap.clear();
		}

	}
}
void showScore(int index, vector<int>&v, map<int, Speaker>&m){
	cout << "第" << index << "轮比赛成绩如下" << endl;
	for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++){
		if (it->second.m_Score[index - 1]>0)
		cout << "选手编号:" << it->first << "   姓名:" << it->second.m_Name << "   分数：" << it->second.m_Score[index - 1] << endl;
	}
	cout << "晋级选手编号" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << "选手的编号:" << *it << "  选手的成绩:" << m[*it].m_Score[index - 1] << endl;
	}
}
int main(){
	srand((unsigned int)time(0));
	vector<int>v1;//选手编号
	map<int, Speaker>m;//存储编号和对应具体的选手
	//创建选手
	createSpeaker(v1, m);
	//测试成员是否被成功的创建
	//for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++){
	//	cout << "标号：" << it->first << " " << "姓名" << it->second .m_Name<< endl;
	//}
	
	//抽签
	speechDraw(v1);

	vector<int>v2;//进入下一轮比赛的人员的编号
	//比赛
	speechContest(1,v1, m,v2);//v1 是比赛选手编号，

	//显示比赛结果
	showScore(1, v2, m);//第一个是比赛伦数，

	//第二轮比赛
	speechDraw(v2);
	vector<int>v3;
	speechContest(2, v2, m, v3);
	showScore(2,v3, m);

	//第三轮比赛
	speechDraw(v3);
	vector<int>v4;
	speechContest(3, v3, m, v4);
	showScore(2, v4, m);


	system("pause");
	return EXIT_SUCCESS;
}