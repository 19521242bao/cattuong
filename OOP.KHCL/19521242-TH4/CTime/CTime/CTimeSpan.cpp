
#include "CTimeSpan.h"
#include <iostream>
using namespace std;
istream& operator >>(istream& is, CTimeSpan& ps)
{
	is >> ps.hr >> ps.min >> ps.sec;
	return is;
}
ostream& operator <<(ostream& os, CTimeSpan ps)
{
	os << ps.hr << ":" << ps.min << ":" << ps.sec;
	return os;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan a)
{
	int s = sec + a.sec + min * 60 + a.min * 60 + 3600 * (hr + a.hr);
	CTimeSpan b;
	b.sec = s % 60;
	b.min = (s % 3600 - b.sec) / 60;
	b.hr = (s - b.sec - b.min) / 3600;
	return b;

}
CTimeSpan CTimeSpan::operator-(CTimeSpan a)
{
	int s = sec - a.sec + min * 60 - a.min * 60 + 3600 * (hr - a.hr);
	CTimeSpan b;
	b.sec = s % 60;
	b.min = (s % 3600 - b.sec) / 60;
	b.hr = (s - b.sec - b.min) / 3600;
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
void CTimeSpan::SetS(const int& a) {

	sec = a;

}



void CTimeSpan::SetM(const int& a) {

	min = a;

}



void CTimeSpan::SetH(const int& a) {

	hr = a;

}
