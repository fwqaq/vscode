/*两个int32整数m和n的二进制表达，计算有多少个位(bit)不同？*/
#include<iostream>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	int sum = 0;
	while (m>0 || n>0){
		if ((m & 1) != (n & 1)){
			sum++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}