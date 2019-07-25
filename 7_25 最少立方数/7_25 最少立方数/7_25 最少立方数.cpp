#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N = 0;
	while (cin >> N){
		int ret = 0;
		while (N > 0){
			int  c = (int)pow(N, 1.0 / 3);
			ret++;
			N = N- c*c*c;
		}
		cout << ret << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}