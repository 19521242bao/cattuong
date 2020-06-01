// INTEGER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "INTEGER.h"
using namespace std;
istream& operator>>(istream& is, INTEGER& ps)
{
	cout << "nhap so nguyen: ";
	is >> ps.x;
	return is;
}
ostream& operator<<(ostream& os, INTEGER ps)
{
	os << ps.x;
	return os;
}
INTEGER::INTEGER()
{
	x = 0;
}
INTEGER::~INTEGER()
{
}
INTEGER INTEGER::operator+(INTEGER a)
{
	INTEGER b;
	b.x = a.x + x;
	return b;
}
INTEGER INTEGER::operator-(INTEGER a)
{
	INTEGER b;
	b.x = -a.x + x;
	return b;
}
INTEGER INTEGER::operator*(INTEGER a)
{
	INTEGER b;
	b.x = a.x * x;
	return b;
}
INTEGER INTEGER::operator/(INTEGER a)
{
	INTEGER b;
	b.x = x/a.x;
	return b;
}
INTEGER INTEGER::operator%(INTEGER a)
{
	INTEGER b;
	b.x = x % a.x;
	return b;
}
void INTEGER::operator++()
{
	x += 1;
}
void INTEGER::operator--()
{
	x -= 1;
}