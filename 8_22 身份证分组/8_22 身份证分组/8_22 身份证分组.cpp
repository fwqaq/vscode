#include<iostream>
#include<stack>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<string>
#include<set>
using namespace std;

int main(){
	string s;
	while (getline(cin, s)){
		int c = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == ' ')
				continue;
			if (c == 6 || c == 14 || c == 18){
				cout << " ";
			}
			cout << s[i];
			c++;
		}
		cout << endl;
	}
	//system("pause");
}