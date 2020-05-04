
// CTimeSpan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CTimeSpan.h"
using namespace std;
istream& operator >>(istream& is, CTimeSpan& ps)
{
	is>> ps.hr >> ps.min >> ps.sec;
	return is;
}
ostream& operator <<(ostream& os, CTimeSpan ps)
{
	os << ps.hr << ":" << ps.min << ":" << ps.sec;
	return os;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan a)
{
	CTimeSpan b;
	sec += a.sec;
	if (sec >= 60)
	{
		min++;
		sec = sec - 60;
	}
	min += a.min;
	if (min >= 60)
	{
		hr++;
		min = min - 60;
	}
	hr += a.hr;
	if (hr >= 24)
	{
		hr -= 24;
	}
	b.sec = sec;
	b.hr = hr;
	b.min = min;
	return b;

}
CTimeSpan CTimeSpan::operator-(CTimeSpan a)
{
	sec -= a.sec;
	if (sec < 0)
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
	CTimeSpan b;
	b.sec = sec;
	b.hr = hr;
	b.min = min;
	return b;
}
int CTimeSpan::getHr()
{
	return hr;
}
int CTimeSpan::getMin()
{
	return min;
}
int CTimeSpan::getSec()
{
	return sec;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
