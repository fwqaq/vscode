#include <iostream>
#include <cmath>
using namespace std;
int main(){
	//x+x2<=h
	long long h;
	cin >> h;
	long long  mid = (int)sqrt(h);
	for (long long i = mid; i > 0; i--){
		if ((i + i*i) <= h){
			cout << i << endl;
			break;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}