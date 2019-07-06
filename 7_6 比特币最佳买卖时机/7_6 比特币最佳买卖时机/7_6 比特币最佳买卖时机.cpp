#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	int num = 0;
	while (cin >> num){
		v.push_back(num);
	}
	int max1 = 0;
	for (int i = 1; i < v.size(); i++){
		for (int j = 0; j < i; j++){
			if (v[i] - v[j]>max1){
				max1 = v[i] - v[j];
			}
		}
	}
	cout << max1 << endl;

	system("pause");
	return EXIT_SUCCESS;
}