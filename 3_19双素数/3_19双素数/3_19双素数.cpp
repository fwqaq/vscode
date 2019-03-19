#include <iostream>
#include <algorithm>
using namespace std;
bool is_Sushu(int z){
	int i = 2;
	for (; i < z / 2; i++){
		if (z%i == 0){
			return false;
		}
	}
	return true;
}

int fanzhuan(int n){
	int i = 0;
	int sum = 0;
	while (n != 0)
	{
		if (i == 0)
		{
			sum += n % 10;
			n /= 10;
			i++;
		}
		else
		{
			sum = sum * 10 + n % 10;
			n /= 10;
		}
	}
	return sum;
}
int main(){
	int num = 0;
	cin >> num;
	int flag = -1;
	int sum = 0;
	for (int i = num+1; i < 1000000; i++){
		if (i % 2 == 0){
			continue;
		}
		if (is_Sushu(i) && is_Sushu(fanzhuan(i))&&(i!=fanzhuan(i))){
			sum++;
			if (sum == num){
				flag = i;
				break;
			}
			
		}
	}
	cout << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}