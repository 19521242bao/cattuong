// sophuc1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sophuc.h"
using namespace std;
sophuc::sophuc()
{
	thuc = 1;
	ao = 0;
}
istream& operator >> (istream& is, sophuc& ps)
{
	cout << " nhap phan thuc";
	is >> ps.thuc;
	cout << "nhap phan ao";
	is >> ps.ao;
	return is;
}
ostream& operator << (ostream& os, sophuc ps)
{
	os << ps.thuc << "+" << ps.ao << "i";
	return os;
 }
sophuc sophuc::operator+(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc + thuc;
	b.ao = a.ao + ao;
	return b;
}
sophuc sophuc::operator-(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc - thuc;
	b.ao = a.ao - ao;
	return b;
}
sophuc sophuc::operator*(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc * thuc - a.ao * ao;
	b.ao = thuc * a.ao + ao * a.thuc;
	return b;
}
sophuc sophuc::operator/(sophuc a)
{
	sophuc b;
	b.thuc = (a.thuc * thuc + a.ao * ao) / (a.thuc * a.thuc + a.ao * a.ao);
	b.ao = (-thuc * a.ao + ao * a.thuc) / (a.thuc * a.thuc + a.ao * a.ao);
	return b;
}
bool sophuc::operator==(sophuc a)
{
	if (thuc == a.thuc && ao == a.ao)
		return true;
	return false;
}
bool sophuc::operator!=(sophuc a)
{
	if (a.thuc != thuc || a.ao != ao)
		return true;
	return false;
}
