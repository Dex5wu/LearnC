#include<iostream>
using namespace::std;

class Date {
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	//ǰ��++,ֱ��+1
	Date& operator++() {
		_day += 1;
		return *this;
	}
	//����++,��+1,�����س�ֵ.
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
	d2 = d1++;//d2����25,d1�Ѿ��ӵ�26��.


	return 0;
}