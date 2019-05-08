#include<iostream>
using namespace std;

int comb(int n, int k){
	if (n == 0 || k == 0)
		return 1;

	return comb(n - 1, k) + comb(n, k - 1);
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << comb(x, y);
	return 0;
}