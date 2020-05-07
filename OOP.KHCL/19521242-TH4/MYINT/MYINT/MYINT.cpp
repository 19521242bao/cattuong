// MYINT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MYINT.h"
using namespace std;
istream& operator>>(istream& is, MYINT& ps)
{
	cout << "nhap so nguyen: ";
	is >> ps.x;
	return is;
}
ostream& operator<<(ostream& os, MYINT ps)
{
	os << ps.x;
	return os;
}
MYINT::MYINT()
{
	x = 0;
}
MYINT::~MYINT()
{
}
MYINT MYINT::operator-(MYINT a)
{
	MYINT b;
	b.x = a.x + x;
	return b;
}
MYINT MYINT::operator+(MYINT a)
{
	MYINT b;
	b.x = -a.x + x;
	return b;
}
MYINT MYINT::operator/(MYINT a)
{
	MYINT b;
	b.x = a.x * x;
	return b;
}
MYINT MYINT::operator*(MYINT a)
{
	MYINT b;
	b.x = x / a.x;
	return b;
}

void MYINT::operator--()
{
	x += 1;
}
void MYINT::operator++()
{
	x -= 1;
}