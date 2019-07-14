#include <iostream>
#include <vector>
using namespace std;
void Sum(int n, int m, int pos, vector<int>&v){
	//必须传递的是引用
	if (m == 0){
		//说明当前的数字已经被减到0了
		for (int i = 0; i < v.size(); i++){
			if (i == 0){
				cout << v[i];
			}
			else{
				cout << " " << v[i];
			}
		}
		cout << endl;
	}
	//没有到0的时候继续减
	for (int i = pos; i <= n&&i <= m; i++){
		v.push_back(i);
		Sum(n, m - i, i + 1, v);
		v.pop_back();
	}
}
int main(){
	int n = 0;
	int m = 0;
	while (cin >> n >> m){
		vector<int>v;
		int pos = 1;//从最开始的1进行
		Sum(n, m, pos, v);
	}

	system("pause");
	return EXIT_SUCCESS;
}