// write your code here cpp
#include <iostream>
#include <algorithm>
using namespace std;
int getNum(int n){
	if (n == 1){
		return 0;
	}
	if (n <= 3){
		return 1;
	}
	int metage = 0;
	int rest = 0;
	int count = 0;
	metage = (n + 2) / 3;//ÉÏ³ÆµÄÇ®£¬
	rest = n - 2 * metage;//Ê£ÓàµÄÇ®
	count = 1 + getNum(std::max(metage, rest));
	return count;
}
int main(){
	int n = 0;
	while (cin >> n){
		if (n == 0){
			break;
		}
		cout << getNum(n) << endl;
	}

	system("pause");
	return 0;
}