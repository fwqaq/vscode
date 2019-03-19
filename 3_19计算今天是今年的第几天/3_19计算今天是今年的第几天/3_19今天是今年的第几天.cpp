#include <iostream>
#include <vector>
using namespace std;
int main(){
	//1990 9 20
	//2000 5 1
	int year = 0;
	int month = 0;
	int day = 0;
	while (cin >> year >> month >> day){

		int num[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){//是闰年
			num[1] = 29;
		}
		int sum = 0;
		for (int i = 0; i < month - 1; i++){//计算月份的日子数目
			sum += num[i];
		}
		sum += day;
		cout << sum << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}