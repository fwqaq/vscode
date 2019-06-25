#include <iostream>
using namespace std;
int main(){
	int start = 0;
	int end = 0;
	while (cin >> start >> end){
		//三个一循环
		int ret = end - start + 1;
		int sum = 0;
		sum = (ret / 3) * 2;
		if (ret % 3 == 1 && end % 3 != 1){
			sum += 1;
		}
		if (ret % 3 == 2){
			if (end % 3 == 1 || (end - 1) % 3 == 1){
				sum += 1;
			}
			else{
				sum += 2;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}