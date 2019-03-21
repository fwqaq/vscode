#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main(){
	//牛牛手中有三根木棍,长度分别是a,b,c。牛牛可以把任一一根木棍长度削短,牛牛的目标是让这三根木棍构成一个三角形,并且牛牛还希望这个三角形的周长越大越好。
	vector<int>v;
	for (int i = 0; i < 3; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	int sum = 0;
	sort(v.begin(), v.end());
	if (v[0] + v[1]>v[2]){
		sum = v[0] + v[1] + v[2];
	}
	else{
		while (v[0] + v[1] <= v[2]){
			v[2]--;
		}
		sum = v[0] + v[1] + v[2];
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}