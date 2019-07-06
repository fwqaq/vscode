#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		vector<int>v;
		for (int i = 0; i < str.size(); ++i){
			if (str[i] == 'D'){
				v.push_back(i);
			}
		}
		//每次都移动最后一个D来保证前面的不动
		int x = str.size() - 1;
		int num = 0;
		for (int i = v.size()-1; i >= 0; --i){
			num = num + x - v[i];
			x--;
		}
		cout << num << endl;

	}

	system("pause");
	return EXIT_SUCCESS;
}
