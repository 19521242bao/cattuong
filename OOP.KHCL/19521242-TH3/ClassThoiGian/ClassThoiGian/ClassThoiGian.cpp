#include <iostream>
#include <string>
#include "Time.h"
using namespace std;
Time::~Time()
{
	return;
}

void Time::Nhap()
{
	cout << "Nhap gio: ";
	cin >> hr;
	cout << "Nhap phut: ";
	cin >> min;
	cout << "Nhap giay: ";
	cin >> sec;
}
void Time::Display()
{
	cout << hr << " : " << min <<" : " << sec;
}
int Time::getHr()
{
	return hr;
}
int Time::getMin()
{
	return min;
}
int Time::getSec()
{
	return sec;
}
void Time::setTime(int x, int y, int z)
{
	hr = x;
	min = y;
	sec = z;
}
int Time::SoSanh(const Time& a)
{
	long long s1 = hr * 3600 + min * 60 + sec;
	long long s2 = a.hr * 3600 + a.min * 60 + a.sec;
	if (s1 > s2)
		return 1;
	else
	{
	
		if (s1 == s2)
			return 0;
	return -1;
	}
}
void Time::TangTime(const Time& a)
{
	sec += a.sec;
	if (sec >= 60)
	{
		min++;
		sec = sec - 60;
	}
	min += a.min;
	if ( min >= 60)
	{
		hr++;
		min = min - 60;
	}
	hr += a.hr;
	if ( hr >= 24)
	{
		hr -= 24;

	}
}
void Time::GiamTime(const Time& a)// dảm bảo a là thời gian nhỏ hơn
{
	sec -= a.sec;
	if ( sec < 0)
	{
		min--;
		sec -= a.sec;
	}
	min -= a.min;
	if (min >= 60)
	{
		hr--;
		min = a.min + min - 60;
	}
	hr -= a.hr;
	
}
