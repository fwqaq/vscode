#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		vector<int>v(str.size(), 1);
		for (int i = 1; i < str.size(); i++){
			//向前寻找vector中为1的或者相同的，先判断是不是相同的
			for (int j = i - 1; j >= 0; j--){
				if (str[j] == str[i] || v[j] == 1){
					if (str[j] == str[i]){
						v[i] = i - j;
					}
					else{
						v[i] = i - j + 1;
					}
					break;
				}
			}
		}
		int max1 = v[0];
		for (int i = 0; i < v.size(); i++){
			max1 = std::max(v[i], max1);
		}
		cout << max1 << endl;
	}

	system("pause");
	return 0;
}