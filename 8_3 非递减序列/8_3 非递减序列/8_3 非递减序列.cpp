#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	while (1){
		int num = 0;
		v.push_back(num);
		if (getchar() == '\n'){
			break;
		}
	}
	//只能有一个不符合要求
	vector<int>vv;
	for (int i = 1; i < v.size(); i++){
		if (v[i]<v[i - 1]){
			vv.push_back(i);
		}
	}
	if (vv.size()>1){
		cout << 0 << endl;
	}
	else{
		cout << 1 << endl;
	}

	return 0;
}