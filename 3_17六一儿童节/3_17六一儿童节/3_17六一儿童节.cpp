#include <iostream>
#include <set>
using namespace std;
/*
第一行：n，表示h数组元素个数,表示学生的个数
第二行：n个h数组元素   表示学生上台需要的躺的重量
第三行：m，表示w数组元素个数  糖的数量
第四行：m个w数组元素   糖的每一块的重量
*/
int main(){
	int n = 0;
	cin >> n;
	multiset<int> childs;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		childs.insert(num);
	}
	int m = 0;
	cin >> m;
	multiset<int> tang;
	for (int i = 0; i < m; i++){
		int num = 0;
		cin >> num;
		tang.insert(num);
	}
	//从最小的开始比较，标胶tang中大于childs中的数量
	int num = 0;
	for (multiset<int>::iterator it = childs.begin(), it1 = tang.begin(); it != childs.end() && it1 != tang.end();){
		if ((*it1)>=(*it)){
			num++;
			it++;
			it1++;
			continue;
		}
		if (*it1 < *it){
			it1++;
		}
	}
	cout << num << endl;
	system("pause");
	return 0;
}