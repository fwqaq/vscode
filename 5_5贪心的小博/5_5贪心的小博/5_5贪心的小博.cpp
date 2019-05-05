#include <iostream>
using namespace std;
int main(){
	int N = 0;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++){
		int num = 0;
		cin >> num;
		sum += num;
	}
	cout << sum - N + 1 << endl;
	system("pause");
	return EXIT_SUCCESS;
}