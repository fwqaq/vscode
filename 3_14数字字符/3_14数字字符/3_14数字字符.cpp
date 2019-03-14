
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		int a[10];
		for (int i = 0; i < 10; i++)
			a[i] = 0;
		char ch[20];
		strcpy(ch, str.c_str());
		for (int i = 0; i < strlen(ch); i++)
			a[ch[i] - '0']++;
		int min = 1;
		bool judge = 0;
		for (int i = 1, count = 0; i<101; i++){
			int check[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			int temp = i;
			while (temp>0){
				check[temp % 10]++;
				temp /= 10;
			}
			for (int j = 0; j < 10; j++){
				if (a[j] < check[j]){
					min = i;
					judge = 1;
					break;
				}
			}
			if (judge == 1)
				break;
		}
		cout << min << endl;
	}
}