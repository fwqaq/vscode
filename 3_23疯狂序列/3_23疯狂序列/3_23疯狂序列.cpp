#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long num = 0;//输入序号。判断序号上的数字是多少
	//1 2 2 3 3 3 4 4 4 4 5 5 5 5 6 6 6 6 6 7 7 7 7 7 7
	cin >> num;
	double x =  (sqrt(1 + 8 * num) - 1) / 2 ;
	long long y = (long long)x;
	long long z = double(y);
	if (x == z){
		cout << y << endl;
	}
	else{
		cout << y +1<< endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}