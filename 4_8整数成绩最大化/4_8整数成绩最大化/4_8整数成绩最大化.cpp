#include <iostream>
#include <vector>
using namespace std;
int main(){
	//化成三分，至少都有三分
	int num = 0;
	cin >> num;
	vector<int>v;
	int sub = 1;
	int arr[] = { 1, 2, 4, 6 };
	if (num<6){
		sub = arr[num - 2];
	}
	else if(num >= 6){
		while (num >= 3){
			v.push_back(3);
			num -= 3;
		}
		if (num == 2){
			v.push_back(2);
		}
		if (num == 1){
			v[0]++;
			num--;
		}
	}
	for (int i = 0; i < v.size(); i++){
		sub *= v[i];
	}
	cout << sub << endl;
	system("pause");
	return EXIT_SUCCESS;
}