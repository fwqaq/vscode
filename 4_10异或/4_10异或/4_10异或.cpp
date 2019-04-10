#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;//个数
	int m;//大于次数
	cin >> n >> m;
	vector<int>v;
	int count = 0;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size()-1; i++){
		for (int j = i + 1; j < v.size(); j++){
			int x = v[i] ^ v[j];
			if (x>m){
				count++;
			}
		}
	}
	cout << count << endl;
	system("pause");
	return EXIT_SUCCESS;
}