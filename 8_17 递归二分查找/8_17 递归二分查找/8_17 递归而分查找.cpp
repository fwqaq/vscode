#include <iostream>
#include <vector>
using namespace std;
int Findas(vector<int>&v, int begin, int end,int value){
	if (begin <= end){
		int mid = (begin + end) / 2;
		if (value < v[mid]){
			return Findas(v, begin, mid - 1, value);
		}
		else if (value > v[mid]){
			return Findas(v, mid + 1, end, value);
		}
		else {
			return mid;
		}
	}
	return -1;
}
int Find(vector<int>& v, int num){
	return Findas(v, 0, v.size(), num) + 1;
}
int main(){
	vector<int>v = { 7, 8, 10, 12, 19, 24 };
	cout << Find(v, 19) << endl;


	system("pause");
	return EXIT_SUCCESS;
}