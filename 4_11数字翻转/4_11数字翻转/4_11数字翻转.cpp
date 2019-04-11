#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int rev(int num){
	string str = to_string(num);
	reverse(str.begin(), str.end());
	const char* p = str.c_str();
	return atoi(p);
}
int main(){
	int x, y;
	rev(100);
	cin >> x >> y;
	cout << rev(rev(x) + rev(y)) << endl;
	system("pause");
	return EXIT_SUCCESS;
}