#include <iostream>
#include <vector>
using namespace std;
int getMissingnumber(vector<int>&v){
	int sum1 = 0;
	int sum2 = 0;
	sum1 = (v.size()+1)*(v.size()) / 2;
	for (int i = 0; i < v.size(); i++){
		sum2 += v[i];
	}
	return sum1 - sum2;
}
int main(){
	vector<int>v{ 0, 1, 2, 3, 4, 5, 6, 7, 8};
	cout << getMissingnumber(v);
	system("pause");
	return EXIT_SUCCESS;
}