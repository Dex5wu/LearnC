#include<iostream>
using namespace::std;
#include<list>

//ÈÕÆÚÀà
class Date {
public:
	Date(int year = 1970,int month = 1,int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};

int main() {
	list<int> L1(10, 5);
	list<int> L2(10);
	list<Date> L3(10, Date(2019, 8, 21));
	list<Date> L4(10);
	return 0;
}