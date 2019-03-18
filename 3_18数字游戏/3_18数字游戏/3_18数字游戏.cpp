
#include<stdlib.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n, i, Max = -1;
	for (cin >> n, i = 0; i < n; i++){
		string x;
		cin >> x, sort(x.begin(), x.end());
		Max = max(Max, atoi(x.c_str()));
	}
	printf("%d", Max);
}