#pragma  once
#include <iostream>
#include <assert.h>
using std::cout;
using std::endl;

class Date{
public:
	int getDays(int year) const {
		if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
			return 366;
		}
		return 365;
	}
	inline int GetMonthDay(int year, int month) const{
		static int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if ((month == 2)
			&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
			return 29;
		}

		return monthArray[month];
	}

	int GetDaysTo199011(Date d)const{
		int ret1 = 0;
		int i = 0;
		for (i = 1900; i < d._year; i++){
			ret1 += Date::getDays(i);
		}
		for (int j = 1; j < d._month; j++){
			ret1 += GetMonthDay(i, j);
		}
		ret1 += d._day - 1;
		return ret1;
	}
	Date(int year=1900, int month=1, int day=1){
		if (year >= 1900
			&& month > 0 && month < 13
			&& day > 0 && day <= GetMonthDay(year, month)){
			_year = year;
			_month = month;
			_day = day;
		}
		else{
			//assert(false);
			cout << "非法日期" << endl;
		}
	}

	// 作业中：实现一下拷贝赋值 + 析构  熟悉他们的用法
	void Print(){
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	Date& operator++();		// 前置++
	Date operator++(int);	// 后置++
	Date& operator+=(int day);//
	Date operator+(int day) const;//+天数

	Date& operator--();		// 前置--
	Date operator--(int);	// 后置--
	Date operator-(int day) const;
	Date& operator-=(int day);

	int operator-(const Date&d) const;
private:
	int _year;
	int _month;
	int _day;

};