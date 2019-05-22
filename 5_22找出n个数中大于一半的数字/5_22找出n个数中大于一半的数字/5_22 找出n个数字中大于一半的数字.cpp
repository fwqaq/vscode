#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	int num = 0;
	while (cin >> num){
		v.push_back(num);
	}
	int a = 1;
	int n = v[0];
	for (int i = 1; i < v.size(); i++){
		if (a == 0){
			n = v[i];
			a++;
			continue;
		}
		if (v[i] == n){
			a++;
		}
		else{
			a--;
		}
	}
	cout << n << endl;
	system("pause");
	return 0;
}