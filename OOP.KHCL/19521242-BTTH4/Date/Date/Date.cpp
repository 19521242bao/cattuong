
// Date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;
bool Date::check(const int& a, const int& b, const int& c)
{
	switch (b)
	{
	case 1:case 3:case 5: case 7: case 8: case 10: case 12:
		if (a <= 0 || a > 31) return false;
		break;
	case 4: case 6: case 9: case 11:
		if (a <= 0 || a > 30) return false;
		break;
	case 2:
		if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
		{
			if (a <= 0 || a > 29) return false;
		}
		else if (a <= 0 || a > 28) return false;
		break;
	default: return false;
	}
	return true;
}
istream& operator >>(istream& is, Date& ps)
{
	bool k;
	do {
		k = false;
		cout << "ngay ="; is >> ps.dd;
		cout << "thang="; is >> ps.mm;
		cout << "nam  ="; is >> ps.yyyy;
		k = ps.check(ps.dd, ps.mm, ps.yyyy);
		if (k == false) cout << "khong hop le!\n";
	} while (!k);
	return is;
}
ostream& operator <<(ostream& os, Date ps)
{
	os << ps.dd << "/" << ps.mm << "/" << ps.yyyy;
	return os;
}
Date Date::operator+(const int& x)
{
	Date d;
	d.dd = dd;
	d.mm = mm;
	d.yyyy = yyyy;
	int k = d.dd + x;
	do {
		switch (d.mm)
		{
		case 1:case 3:case 5: case 7:case 8: case 10: case 12:
			if (k > 31)
			{
				d.mm++;
				if (d.mm == 13)
				{
					d.mm = 1;
					d.yyyy++;
				}
				k -= 31;
			}
			else
			{
				d.dd = k;
				k = 0;
			}
			break;
		case 4:case 6: case 9: case 11:
			if (k > 30)
			{
				d.mm++;
				k -= 30;
			}
			else
			{
				d.dd = k;
				k = 0;
			}
			break;
		case 2:
			if (d.yyyy % 400 == 0 || (d.yyyy % 4 == 0 && d.yyyy % 100 != 0))
			{
				if (k > 29)
				{
					d.yyyy++;
					k -= 29;
				}
				else
				{
					d.yyyy = k;
					k = 0;
				}
			}
			else
			{
				if (k > 28)
				{
					d.mm++;
					k -= 28;
				}
				else
				{
					d.dd = k;
					k = 0;
				}
			}
			break;
		}
	} while (k > 0);
	return d;
}
Date Date::operator-(const int& a)
{
	Date d;
	d.dd = dd;
	d.mm = mm;
	d.yyyy = yyyy;
	int x = a;
	do {
		if (d.dd > x)
		{
			d.dd -= x;
			x = 0;
		}
		else
		{
			x -= d.dd;
			d.mm--;
			switch (d.mm)
			{
			case 1:case 3: case 5: case 7: case 8: case 10:
				d.dd = 31;
				break;
			case 4: case 6: case 9: case 11:
				d.dd = 30;
				break;
			case 2:
				if (d.yyyy % 400 == 0 || (d.yyyy % 4 == 0 && d.yyyy % 100 != 0)) d.yyyy = 29;
				else d.dd = 28;
				break;
			case 0:
				d.mm = 12;
				d.yyyy--;
				d.dd = 31;
				break;
			}
		}
	} while (x > 0);
	return d;
}
void Date::operator++()
{
	dd++;
	switch (dd)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (dd > 31)
		{
			dd = 1;
			mm++;
			if (mm > 12)
			{
				yyyy++;
				mm = 1;
			}
		}
		break;
	case 4: case 6: case 9: case 11:
		if (dd > 30)
		{
			dd = 1;
			mm++;
		}
		break;
	case 2:
		if (yyyy % 400 == 0 || (yyyy % 4 == 0 && yyyy % 100 != 0))
		{
			if (dd > 29)
			{
				dd = 1;
				mm++;
			}
		}
		else
		{
			if (dd> 28)
			{
				dd= 1;
				mm++;
			}
		}
	}
}
void Date::operator--()
{
	
	dd--;
	if (dd == 0)
	{
		mm--;
		switch (mm)
		{
		case 1: case 3: case 5: case 7: case 8: case 10:
			dd = 31;
			break;
		case 0:
			dd = 31;
			mm = 12;
			yyyy--;
			break;
		case 4: case 6: case 9: case 11:
			dd = 30;
			break;
		case 2:
			if (yyyy % 400 == 0 || (yyyy % 4 == 0 && yyyy % 100 != 0)) dd = 29;
			else dd = 28;
			break;
		}
	}
}
long long Date::operator-(const Date& d)
{
	Date x;
	x.dd = dd;
	x.mm = mm;
	x.yyyy = yyyy;
	long long a = x.dd;
	do {
		switch (x.mm)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			a += 31;
			x.mm--;
			if (x.mm == 0)
			{
				x.yyyy--;
				x.mm = 12;
			}
			break;
		case 4: case 6: case 9: case 11:
			a += 30;
			x.mm--;
			break;
		case 2:
			if (x.yyyy % 400 == 0 || (x.yyyy % 4 == 0 && x.yyyy % 100 != 0))
			{
				a += 29;
				x.mm--;
			}
			else
			{
				a += 28;
				x.mm--;
			}
		}
	} while (x.yyyy > 0);

	x.dd = d.dd;
	x.mm = d.mm;
	x.yyyy = d.yyyy;
	long long b = x.dd;
	do {
		switch (x.mm)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			b += 31;
			x.mm--;
			if (x.mm == 0)
			{
				x.yyyy--;
				x.mm = 12;
			}
			break;
		case 4: case 6: case 9: case 11:
			b += 30;
			x.mm--;
			break;
		case 2:
			if (x.yyyy % 400 == 0 || (x.yyyy % 4 == 0 && x.yyyy % 100 != 0))
			{
				b += 29;
				x.mm--;
			}
			else
			{
				b += 28;
				x.mm--;
			}
		}
	} while (x.yyyy > 0);
	return a - b;
}