#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string str;
	cin >> str;
	vector<char>v;
	for (int i = 0; i < str.length(); i++){
		v.push_back(str[i]);
	}
	int x = 0;
	int y = 0;
	int f1 = 0;
	int f2 = 0;
	while (x<str.length()&&y<str.length()){
		for (int i = x; i < str.length(); i++){
			if (v[i] == '['){
				x = i;
				f1 = 1;
				break;
			}
			
		}
		for (int i = x; i < str.length(); i++){
			if (v[i] == ']'){
				y = i;
				f2 = 1;
				break;
			}
		}
		if (f1 == 0 || f2 == 0){
			break;
		}
		if (x < y){
			v[x] = ' ';
			v[y] = ' ';
			x++;
			f1 = 0;
			f2 = 0;
		}
		else{
			break;
		}
	}
	int count = 0;
	int count1 = 0;
	//找到第一个'['和']'进行删除
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == '['){
			count++;
		}
		if (v[i] == ']'){
			count1++;
		}
	}
	for (int i = 0; i < count1; i++){
		cout << '[';
	}
	cout << str;
	for (int i = 0; i < count; i++){
		cout << ']';
	}
	system("pause");
	return EXIT_SUCCESS;
}