#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
bool myCompare(int i, int j){
	return i > j;
}
int main(){
	//创建一个vector存储选手
	vector<deque<int>> v;
	//创建deque存储分数
	for (int j = 0; j < 5; j++){
		deque<int> m;
		for (int i = 0; i < 10; i++){
			int score;
			cin >> score;
			m.push_back(score);
		}
		sort(m.begin(), m.end(), myCompare);//进行排序
		m.pop_front();//去除第一个元素
		m.pop_back();//去除最后一个元素
		v.push_back(m);//将分数deque加入到vector中去
		
		/*for (deque<int>::iterator it = m.begin(); it != m.end(); it++){
			int i = 1;
			cout << " 第"<<i<<"个" << *it << " ";
			++i;
		}
		cout << endl;*/
	}
	//算出平均数并且打印
	for (vector<deque<int>>::iterator it = v.begin(); it != v.end(); it++){
		int sum = 0;
		for (deque<int>::iterator it1 = (*it).begin(); it1 != (*it).end();it1++){
			sum += *it1;
		}
		cout << "平均分：" << sum / (*it).size() << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}