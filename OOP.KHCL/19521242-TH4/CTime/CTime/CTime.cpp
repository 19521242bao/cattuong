// CTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"
#include "CTimeSpan.h"
using namespace std;
Time::Time() {

	hr = min = sec = 0;

}



istream& operator>>(istream& is, Time& a) {

	cout << "Gio = ";

	is >> a.hr;

	cout << "Phut = ";

	is >> a.min;

	cout << "Giay = ";

	is >> a.sec;

	return is;

}



ostream& operator<<(ostream& os, const Time& a) {

	os << "TIME SPAN: " << a.hr << " gio " << a.min << " phut " << a.sec << " giay";

	return os;

}



Time Time::operator+(const Time& a) {

	Time tm;

	tm.sec = sec + a.sec;



	tm.min = min + a.min + tm.sec / 60;

	tm.sec %= 60;



	tm.hr = hr + a.hr + tm.min / 60;

	tm.min %= 60;



	return tm;

}
CTimeSpan Time::operator-(const Time& a) {

	CTimeSpan tm;



	tm.SetS(sec - a.sec);

	while (tm.getSec() < 0) {

		tm.SetM(tm.getMin() - 1);

		tm.SetS(tm.getSec() + 60);

	}



	tm.SetM(tm.getMin() + min - a.min);

	while (tm.getMin() < 0) {

		tm.SetH(tm.getHr() - 1);

		tm.SetM(tm.getMin() + 60);

	}

	tm.SetH(tm.getHr() + hr - a.hr);

	return tm;

}
Time Time::operator++()
{
	if (sec == 59)
	{
		sec = 1;
		min++;
	}
	else
		sec++;
	Time a;
	a.sec = sec;
	a.min = min;
	a.hr = hr;
	return a;
	
}
 Time Time::operator--()
 {
	 if (sec == 0)
	 {
		 sec = 59;
		 if (min == 0)
			 hr--;
		 else
			min--;
	 }
	 else
		 sec--;
	 Time a;
	 a.sec = sec;
	 a.min = min;
	 a.hr = hr;
	 return a;

 }
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
