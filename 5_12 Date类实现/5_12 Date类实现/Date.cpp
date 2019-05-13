#include "Date.h"

Date& Date::operator++(){//前置++
	return *this += 1;
}
Date Date::operator++(int){//后置++
	Date ret = *this;//这是一个拷贝构造
	*this += 1;
	return ret;
}
Date Date::operator+(int day) const{//调用—>+=来计算
	Date ret = *this;
	ret += day;
	return ret;
}
Date& Date::operator+=(int day){
	if (day<0){
		day = -day;
		return *this -= day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month)){
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13){
			_month = 1;
			_year++;
		}
	}
	return *this;
}
Date& Date::operator-=(int day){  //-=
	if (day < 0){
		day = 0 -day;
		return *this += day;
	}
	this->_day -= day;
	while (_day <= 0){
		_month--;
		if (_month == 0){
			_month = 12;
			_year--;
		}
		_day = _day + GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day) const {//-day
	Date ret = *this;
	ret -= day;
	return ret;
}
Date& Date::operator--(){
	return *this-= 1;
}
Date Date::operator--(int){

	Date ret = *this;
	*this -= 1;
	return ret;
}
bool Date::operator==(const Date& d) const{
	return (this->_year == d._year
		&& this->_month == d._month
		&&this->_day == d._day);
}
bool Date::operator<(const Date& d)const {
	if (this->_year < d._year){
		return true;
	}
	if (this->_year == d._year && this->_month < d._month){
		return true;
	}
	if (this->_year == d._year&&this->_month == d._month&&this->_day < d._day){
		return true;
	}
	return false;
}
bool Date::operator!=(const Date& d)const{
	return !(*this == d);
}
bool Date::operator<=(const Date& d)const{
	return ((*this < d) || (*this == d));
}
bool Date::operator>(const Date& d)const{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)const{
	return !(*this < d);
}

//计算两个日期的减法
int Date::operator-(const Date&d) const{
	//计算一个日期到另一个日期相聚的天数
	return GetDaysTo199011(*this) - GetDaysTo199011(d);
}