#include <iostream>
using namespace std;
int main(){
	long long N;
	cin >> N;
	long long ret = 0;
	for (long long i = N; i > 0; i /= 2){
		ret += ((i + 1) / 2)*((i + 1) / 2);
	}
	cout << ret << endl;
	system("pause");
	return EXIT_SUCCESS;
}