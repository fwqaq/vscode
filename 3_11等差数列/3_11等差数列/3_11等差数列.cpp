#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
如果一个数列S满足对于所有的合法的i,都有S[i + 1] = S[i] + d, 这里的d也可以是负数和零,我们就称数列S为等差数列。
小易现在有一个长度为n的数列x,小易想把x变为一个等差数列。
小易允许在数列上做交换任意两个位置的数值的操作,并且交换操作允许交换多次。但是有些数列通过交换还是不能变成等差数列,小易需要判别一个数列是否能通过交换操作变成等差数列
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