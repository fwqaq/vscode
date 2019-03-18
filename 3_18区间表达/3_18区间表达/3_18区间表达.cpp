#include <iostream>
#include <vector>
using namespace std;
int main(){
	//给定一个有序的数列，找出区间的个数
	int num = 0;
	cin >> num;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int a = 0;
		cin >> a;
		v.push_back(a);
	}
	int sum = 0;
	for (vector<int>::iterator it = v.begin(); it != v.end()-1; it++){
		if ((*it) + 1 != *(it + 1)){
			sum++;
		}
	}
	cout << sum + 1 << endl;
	system("pause");
	return EXIT_SUCCESS;
}