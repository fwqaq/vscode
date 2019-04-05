#include <iostream>
#include <vector>
using namespace std;
int main(){
	//计算相邻的0的个数
	int num = 0;
	cin >> num;
	vector<int>v;
	for (int i = 0; i < num; i++){
		int n;
		cin >> n;
		v.push_back(n);
	}
	int exchage = 0;
	cin >> exchage;
	int sum = 0;
	for (int i = 0; i < v.size(); i++){
		int count = 0;
		if (v[i] == 0){
			while (v[i] == 0&&i<v.size()){
				count++;
				i++;
			}
		}
		if (count>2){
			if (count % 2 == 0){
				sum += (count / 2 - 1);
			}
			else{
				sum += count / 2;
			}
		}
	}
	if (sum < exchage){
		cout << "false" << endl;
	}
	else{
		cout << "true" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}
