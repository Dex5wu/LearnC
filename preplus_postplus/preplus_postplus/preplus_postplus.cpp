#include<iostream>
using namespace::std;

class Date {
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	//前置++,直接+1
	Date& operator++() {
		_day += 1;
		return *this;
	}
	//后置++,先+1,但返回初值.
	Date operator++(int) {
		Date temp(*this);
		_day += 1;
		return temp;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main() {
	Date d1(2019, 8, 24);
	Date d2;
	d2 = ++d1;
	d2 = d1++;//d2还是25,d1已经加到26了.


	return 0;
}