#pragma once
#include<iostream>
using namespace std;
class CTimeSpan
{
private:
	int hr;
	int min;
	int sec;
public:
	friend istream& operator >>(istream& is, CTimeSpan& ps);
	friend ostream& operator <<(ostream& os, CTimeSpan ps);
	CTimeSpan operator+(CTimeSpan a);
	CTimeSpan operator-(CTimeSpan a);
	int getHr();
	int getMin();
	int getSec();
	void SetS(const int&);

	void SetM(const int&);

	void SetH(const int&);
};
