#include <iostream>
using namespace std;
int main(){
	int n = 0;
	int arr[15] = { -1, -1, -1, 1, -1, 1, 2, 1, 2, 3, 2, 3, 2, 3, 2 };
	while (cin >> n){
		if (n <= 14){
			cout << arr[n] << endl;
		}
		else{
			int ret = (n - 7) / 7;
			ret += arr[7 + n % 7];
			cout << ret << endl;
		}
	}

	system("pause");
	return 0;
}