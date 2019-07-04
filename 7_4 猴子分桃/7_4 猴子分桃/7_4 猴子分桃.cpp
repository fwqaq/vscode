#include <iostream>
using namespace std;
int main(){
	long long n = 0;

	while (cin >> n){
		if (n == 0)
			break;
		else{
			cout << (long long)pow(5, n) - 4 << " " << (long long)pow(4, n) + n - 4 << endl;
		}
	}
	system("pause");
	return 0;
}