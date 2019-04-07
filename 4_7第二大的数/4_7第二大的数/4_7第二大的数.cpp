#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_greater(int a, int b){
	return a > b;
}
int main(){
	vector<int>v;
	int num;
	cin >> num; 
	for (int i = 0; i < num; i++){
		int x = 0;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end(), is_greater);

	int max = v[0];

	for (int i = 1; i<v.size();i++){
		if (max > v[i]){
			max = v[i];
			break;
		}
	}
	cout << max << endl;
	system("pause");
	return EXIT_SUCCESS;
}