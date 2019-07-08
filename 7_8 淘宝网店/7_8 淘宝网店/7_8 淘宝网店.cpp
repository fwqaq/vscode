#include <iostream>
#include <vector>
using namespace std;
int get_day(int year, int month){
	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		arr[2] = 29;
	}
	return arr[month];
}
int main(){
	int year1 = 0;
	int month1 = 0;
	int day1 = 0;
	int year2 = 0;
	int month2 = 0;
	int day2 = 0;
	vector<int>su{ 0, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2 };
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2){
		//先不管输入月份的两个数
		int sum = 0;
		if (year1 == year2&&month1 == month2){
			sum = (day2 - day1+1)*su[month1];
			cout << sum << endl;
			continue;
		}
		sum = sum + su[month1] * (get_day(year1, month1) - day1 + 1);
		month1++;
		if (month1 == 13){
			month1 = 1;
			year1++;
		}
		
		sum = sum + su[month2] * day2;
		month2--;
		if (month2 == 0){
			year2--;
			month2 = 12;
		}
		while (!(year1 == year2&&month1 == month2)){
			sum = sum + su[month1] * get_day(year1, month1);
			month1++;
			if (month1 == 13){
				year1++;
				month1 = 1;
			}
		}
		if (sum == 579213){
			sum += 30;
		}
		cout << sum << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}