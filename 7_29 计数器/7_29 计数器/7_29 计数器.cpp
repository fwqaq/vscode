#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {
	long long t;
	cin >> t;
	int index = 1;
	long long value = 3;
	while (value < t){
		++index;
		value = 3 * (pow(2, index) - 1);  //等比数列求和
	}
	value = value - t + 1;
	cout << value << endl;
	system("pause");
	return EXIT_SUCCESS;
}