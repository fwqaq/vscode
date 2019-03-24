#include <iostream>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	if (num <0){
		num = -num;
	}
	int sum = 0;
	while (num > 0){
		if (num % 2 == 1){
			num--;
			sum++;
		} 
		else{
			num /= 2;
			sum++;
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}