#include <iostream>
using namespace std;
#include <vector>
int main(){
	int n = 0;//计划飞行的次数
	int sum = 0;//总的燃油
	cin >> n;
	cin >> sum;
	vector<int>v;
	for (int i = 0; i < n; i++){
		int you = 0;
		cin >> you;
		v.push_back(you);
	}
	int count = 0;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		if (sum>=*it){
			count++;
		}
		sum -= *it;
		if (sum < *(it + 1) || it + 1 == v.end()){
			break;
		}
	}
	cout << count << endl;
	system("pause");
	return EXIT_SUCCESS;
}