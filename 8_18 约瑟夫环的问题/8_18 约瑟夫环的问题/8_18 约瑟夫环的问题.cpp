#include <iostream>
using namespace std;
int LastRemaining(unsigned int n, unsigned int m){
	if (n < 1 || m < 1){
		return -1;//²»³É¹¦
	}
	int last = 0;
	for (int i = 2; i <= n; i++){
		last = (last + m) % i;
	}
	return last;
}
int main(){

	cout << LastRemaining(10, 5) << endl;
	0
	system("pause");
	return EXIT_SUCCESS;
}