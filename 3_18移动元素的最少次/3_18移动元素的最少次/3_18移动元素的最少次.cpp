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
	}//只要这个位置不在最初的位置就是移动了的元素，不管是移动到了那里我们就只比较我们两个容器中改变的数字的数目
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