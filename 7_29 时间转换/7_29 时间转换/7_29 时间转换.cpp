#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>

using namespace std;
int main(){
	int input_hour, output_hour;
	int input_minute, output_minute;
	int input_second, output_second;
	cin >> input_hour;
	cin.get();
	cin >> input_minute;
	cin.get();
	cin >> input_second;
	string AM_PM;
	cin >> AM_PM;
	if (AM_PM == "AM"){
		if (input_hour == 12)
			output_hour = 0;
		else
			output_hour = input_hour;
	}
	if (AM_PM == "PM"){
		if (input_hour == 12)
			output_hour = 12;
		else
			output_hour = input_hour + 12;
	}
	output_minute = input_minute;
	output_second = input_second;
	printf("%02d:%02d:%02d\n", output_hour, output_minute, output_second);

	system("pause");
	return EXIT_SUCCESS;
}
