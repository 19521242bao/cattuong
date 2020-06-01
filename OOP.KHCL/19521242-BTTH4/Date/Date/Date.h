#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int dd;
	int mm;
	int yyyy;
public:
	friend istream& operator >> (istream& is, Date& ps);
	friend ostream& operator <<(ostream& os, Date ps);
	Date operator+(const int& x);
	Date operator-(const int& x);
	void operator++();
	void operator--();
	bool check(const int&, const int&, const int&);
	long long operator-(const Date& d);
};


